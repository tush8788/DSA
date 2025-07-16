#include <iostream>
using namespace std;

// own logic tc o(n) sc o(1)
void printMaxtrixInWave(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();
    int temp = 0;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j-temp][i]<<" ";
        }
        if(temp==0)temp=row-1;
        else temp=0;
    }
}

//new logic
void printMaxtrixInWaveNewLogic(vector<vector<int>> arr)
{   
    //if col is even then print top to bottom 
    // if col is odd then print bottom to top
    int row = arr.size();
    int col = arr[0].size();
    for(int i=0;i<col;i++){
       if((i&1)==0){
            for(int j=0;j<row;j++){
                cout<<arr[j][i]<<" ";
            }
       }else{
            for(int j=row-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
       }
    }
}


int main()
{
    vector<vector<int>> arr = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    }; 
    // printMaxtrixInWave(arr);
    printMaxtrixInWaveNewLogic(arr);
    return 0;
}