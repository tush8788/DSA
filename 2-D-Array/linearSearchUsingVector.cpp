#include<iostream>
#include<vector>
using namespace std;

bool linearSearch(vector<vector<int>>arr,int target){
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            if(target == arr[i][j]) return true;
        }
    }
    return false;
}

int main(){
    // vector<vector<int>> arr(4,vector<int>(3,0));
    vector<vector<int>> arr = {{2,5,6},{4,7,8},{7,8,9}};
    int target = 9;
    cout<<linearSearch(arr,target)<<endl;
    return 0;
}