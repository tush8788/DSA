#include <iostream>
#include <vector>
using namespace std;

void sumOfMatrix(vector<vector<int>> arr)
{
    int rowSize = arr.size();
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

}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    sumOfMatrix(arr);
    return 0;
}