#include<iostream>
#include<vector>
using namespace std;

void printDiagnal(vector<vector<int>> arr){

    int rowSize = arr.size();
    for(int i=0;i<rowSize;i++){
        cout<<arr[rowSize-i-1][rowSize-i-1];
    }
    cout<<endl;
}

int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    printDiagnal(arr);
    return 0;
}