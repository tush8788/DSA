#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<vector<int>>arr){
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    //initlize vector
    vector<vector<int>> arr(4,vector<int>(3,12));
    printVector(arr);
    return 0;
}