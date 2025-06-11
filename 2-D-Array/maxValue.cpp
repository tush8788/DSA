#include<iostream>
#include<vector>
using namespace std;

int maxValue(vector<vector<int>>arr){
    int maxV = INT_MIN;
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            maxV = max(arr[i][j],maxV);
        }
    }
    return maxV;
}

int main(){
    vector<vector<int>> arr = {{1,2,4,6},{64,7,5,6},{2,5,6,7}};
    cout<<"max value : "<<maxValue(arr)<<endl;
    return 0;
}