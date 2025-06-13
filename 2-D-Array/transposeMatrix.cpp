#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<vector<int>>arr){
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// TC -> O(m*n) sc-> O(m*n)
void trasnsposeMaxtrix(vector<vector<int>>arr){
    int rowSize = arr.size();
    int colSize = arr[0].size();
    vector<vector<int>>temp(colSize,vector<int>(rowSize,0));
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            temp[j][i] = arr[i][j];
        }
    }

    printArr(temp);    
    cout<<"____"<<endl;
}

//only for sqare matrix TC - o(m*n) SC - o(1)
void trasnsposeMaxtrixSecond(vector<vector<int>>arr){
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for(int i=0;i<rowSize;i++){
        for(int j=i;j<colSize;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    printArr(arr);
}

int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9},{4,9,9}};
    trasnsposeMaxtrix(arr);

    vector<vector<int>> arr1 = {{1,2,3},{4,5,6},{7,8,9}};
    trasnsposeMaxtrixSecond(arr1);
    return 0;
}