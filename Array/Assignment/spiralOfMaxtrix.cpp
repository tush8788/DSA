#include <iostream>
using namespace std;

// spiral print of matrix

// tc o(m*n) sc o(1)
void printSpiral(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();
    int totalElementCount = row * col;
    int startingRow = 0;
    int endingCol = col - 1;
    int endingRow = row - 1;
    int startingCol = 0;
    while (totalElementCount > 0)
    {
        // print starting row ---> ending col
        for (int i = startingRow; i <= endingCol && totalElementCount > 0; i++)
        {
            cout << arr[startingCol][i] << " ";
            totalElementCount--;
        }
        startingRow++;
        // print startingRow and endingCol ---> endingRow
        for (int i = startingRow; i <= endingRow && totalElementCount > 0; i++)
        {
            cout << arr[i][endingCol] << " ";
            totalElementCount--;
        }
        endingCol--;
        // print endingRow to startingCol
        for (int i = endingRow; i >= startingCol && totalElementCount > 0; i--)
        {
            cout << arr[endingRow][i] << " ";
            totalElementCount--;
        }
        endingRow--;
        // print endingRow and startingCol to startingRow
        for (int i = endingRow; i >= startingRow && totalElementCount > 0; i--)
        {
            cout << arr[i][startingCol] << " ";
            totalElementCount--;
        }
        startingCol++;
    }
}

//tc o(m*n) sc-o(1)
void print(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();
    int totalElem = row * col;
    int startingRow = 0, endingCol = col - 1, endingRow = row - 1, startingCol = 0;
    while (totalElem > 0)
    {
        // print  row -->
        for (int i = startingRow; i <= endingCol && totalElem > 0; i++)
        {
            cout << arr[startingRow][i] << " ";
            totalElem--;
        }
        startingRow++;
        // print col downward |
        for (int i = startingRow; i <= endingRow && totalElem > 0; i++)
        {
            cout << arr[i][endingCol] << " ";
            totalElem--;
        }
        endingCol--;
        // print ending row with reverse <--
        for (int i = endingCol; i >= startingCol && totalElem > 0; i--)
        {
            cout << arr[endingRow][i] << " ";
            totalElem--;
        }
        endingRow--;
        // print col upward ^|
        for (int i = endingRow; i >= startingRow && totalElem > 0; i--)
        {
            cout << arr[i][startingCol] << " ";
            totalElem--;
        }
        startingCol++;
    }
}

//tc -> O(m*n) sc -> o(m*n) 
void spiralOrder(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int totalElem = row * col;
    int startRow = 0;
    int endCol = col - 1;
    int endRow = row - 1;
    int startCol = 0;
    std::vector<int> ans;
    while (totalElem > 0)
    {
        for (int i = startCol; i <= endCol && totalElem > 0; i++)
        {
            ans.push_back(matrix[startRow][i]);
            totalElem--;
        }
        startRow++;
        for (int i = startRow; i <= endRow && totalElem > 0; i++)
        {
            ans.push_back(matrix[i][endCol]);
            totalElem--;
        }
        endCol--;
        for (int i = endCol; i >= startCol && totalElem > 0; i--)
        {
            ans.push_back(matrix[endRow][i]);
            totalElem--;
        }
        endRow--;
        for (int i = endRow; i >= startRow && totalElem > 0; i--)
        {
            ans.push_back(matrix[i][startCol]);
            totalElem--;
        }
        startCol++;
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    // return ans;
}
int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30}};

    vector<vector<int>> arr1 = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
    };
    vector<vector<int>> arr2 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}};
    // printSpiral(arr);
    // print(arr1);
    spiralOrder(arr2);
    return 0;
}