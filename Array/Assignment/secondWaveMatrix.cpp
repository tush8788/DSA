#include<iostream>
using namespace std;

//tc o(n^2) sc o(1)
void printWave(vector<vector<int>>arr){
    int row = arr.size();
    int col = arr[0].size();
    for(int i=0;i<row;i++){
        if((i&1)==0){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int j=col-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;
}

int main(){
    vector<vector<int>> arr = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    // output 1 2 3 4 8 7 6 5 9 10 11 12 
    printWave(arr);
}