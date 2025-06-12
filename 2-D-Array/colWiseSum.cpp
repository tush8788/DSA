#include<iostream>
#include<vector>
using namespace std;

//tc - o(m*n) sp - o(1)
void colWiseSum(vector<vector<int>> arr){
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for(int i=0;i<colSize;i++){
        int colSum = 0;
        for(int j=0;j<rowSize;j++){
            colSum = colSum + arr[j][i]; 
        }
        cout<<colSum<<endl;
    }
}

int main(){
    vector<vector<int>>arr={{1,2,4,5},{3,5,6,7},{7,8,8,9}};
    colWiseSum(arr);
    return 0;
}