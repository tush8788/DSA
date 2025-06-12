#include<iostream>
#include<vector>
using namespace std;

//TC o(n) SC o(1)
void diagnalRightSum(vector<vector<int>>arr){
    int sum =0;
    int size = arr.size();
    for(int i=0;i<size;i++){
        sum+=arr[size-i-1][size-i-1];
    }
    cout<<sum<<endl;
}

int main(){
    vector<vector<int>> arr = {{1,2,4},{5,6,7},{6,7,8}};
    diagnalRightSum(arr);
    return 0;
}