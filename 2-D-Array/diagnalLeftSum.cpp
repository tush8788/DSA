#include<iostream>
#include<vector>
using namespace std;

//TC o(n)  SC o(1)
void diagnalLeftSum(vector<vector<int>>arr){
    int sum = 0;
    int size = arr.size();
    for(int i=0;i<size;i++){
        sum+=arr[i][i];
    }
    cout<<sum<<endl;
}

int main(){
    vector<vector<int>> arr = {{1,3,5},{3,6,7},{5,6,7}};
    diagnalLeftSum(arr);
    return 0;
}