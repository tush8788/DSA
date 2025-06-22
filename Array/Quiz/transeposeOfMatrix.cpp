#include<iostream>
using namespace std;

void printArr(vector<vector<int>>arr){
    int size = arr.size();
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}

void transposeMaxtrix(vector<vector<int>> arr){
    int size = arr.size();
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
           swap(arr[i][j],arr[j][i]);
        }
    }

    printArr(arr);
}

int main(){
   vector<vector<int>> arr = {{1,2,4},{4,5,6},{7,8,9}};
   transposeMaxtrix(arr);
    // matrix remain same

    return 0;
}