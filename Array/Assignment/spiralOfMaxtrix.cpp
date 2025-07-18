#include<iostream>
using namespace std;

//spiral print of matrix

// tc o(m*n) sc o(1)
void printSpiral(vector<vector<int>>arr){
    int row = arr.size();
    int col = arr[0].size();
    int totalElementCount = row*col;
    int startingRow = 0;
    int endingCol = col - 1;
    int endingRow = row - 1;
    int startingCol = 0;
    while(totalElementCount>0){
        //print starting row ---> ending col
        for(int i=startingRow;i<=endingCol && totalElementCount > 0;i++){
            cout<<arr[startingCol][i]<<" ";
            totalElementCount--;
        }
        startingRow++;
        //print startingRow and endingCol ---> endingRow
        for(int i=startingRow;i<=endingRow && totalElementCount > 0;i++){
            cout<<arr[i][endingCol]<<" ";
            totalElementCount--;
        }
        endingCol--;
        //print endingRow to startingCol
        for(int i=endingRow;i>=startingCol && totalElementCount > 0;i--){
            cout<<arr[endingRow][i]<<" ";
            totalElementCount--;
        }
        endingRow--;
        //print endingRow and startingCol to startingRow 
        for(int i=endingRow; i>=startingRow && totalElementCount > 0 ;i--){
            cout<<arr[i][startingCol]<<" ";
            totalElementCount--;
        }
        startingCol++;
    }
}

int main(){
    vector<vector<int>> arr = {
        { 1 ,2 ,3 ,4 ,5 ,6 },
        { 7 ,8, 9, 10,11,12},
        { 13,14,15,16,17,18},
        { 19,20,21,22,23,24},
        { 25,26,27,28,29,30}
    };
    printSpiral(arr);
    return 0;
}