#include <iostream>
#include <vector>
using namespace std;

void sumOfMatrix(vector<vector<int>> arr)
{
    int rowSize = arr.size();
    int colSize = arr[0].size();
    int leftSum = 0, rightSum = 0;
    // diagnal left sum TC-O(n) SC-O(1)
    for (int i = 0; i < rowSize; i++)
    {
        leftSum = leftSum + arr[i][i];
    }
    cout << "Left Sum :: " << leftSum << endl;

    // diagnal right sum TC-O(n) SC-O(1)
    for (int i = 0; i < rowSize; i++)
    {
        rightSum = rightSum + arr[rowSize - i - 1][rowSize - i - 1];
    }
    cout << "Right Sum :: " << rightSum << endl;

    //row wize
    for(int i=0;i<rowSize;i++){
        int rowSum = 0;
        for(int j=0;j<colSize;j++){
            rowSum+=arr[i][j];
        }
        cout<<"row sum "<<i<<" : "<<rowSum<<endl;
    }

    // column wise
    for(int row=0;row<rowSize;row++){
        int colSum=0;
        for(int col=0;col<colSize;col++){
            colSum+=arr[col][row];
        }
        cout<<"col sum "<<colSum<<endl;
    }
    
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    sumOfMatrix(arr);
    return 0;
}