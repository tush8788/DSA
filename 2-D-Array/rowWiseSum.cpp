#include<iostream>
#include<vector>
using namespace std;

//TC o(m*n) SC o(1)
void rowWiseSum(vector<vector<int>> arr){
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for(int i=0;i<rowSize;i++){
        int sum=0;
        for(int j=0;j<colSize;j++){
            sum=sum+arr[i][j];
        }
        cout<<"Row "<<i<<" sum is : "<<sum<<endl;
    }
}

int main(){
    vector<vector<int>>arr={{10,20,30},{40,50,60},{70,80,90}};
    rowWiseSum(arr);
    return 0;
}