#include<iostream>
using namespace std;

bool linearSearch(int arr[][2],int rowSize,int colSize,int target){
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][2] = {{1,3},{4,7},{5,9}};
    int rowSize = 3;
    int colSize = 2;
    int target = 9;
    cout << linearSearch(arr,rowSize,colSize,target);
    return 0;
}