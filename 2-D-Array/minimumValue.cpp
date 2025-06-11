#include<iostream>
#include<vector>
using namespace std;

int minValue(vector<vector<int>>arr){
    int ans = INT_MAX;
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            if(ans>arr[i][j]) ans = arr[i][j];  
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> arr = {{3,2,5,7},{4,6,9,8},{4,6,7,8},{1,0,6,7}};
    cout<<"Minimum value:-"<<minValue(arr)<<endl;
    return 0;
}