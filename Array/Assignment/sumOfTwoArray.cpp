#include <iostream>
using namespace std;

void printArr(vector<int> arr)
{
    for (int i = 0; i < (int)arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printStringArr(string arr)
{
    for (int i = 0; i < (int)arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


// tc o(max(m,n)) sc o(max(m,n))
vector<int> brouteForce(vector<int> arr1, vector<int> arr2)
{
    vector<int> ans;
    int arr1Size = arr1.size();
    int arr2Size = arr2.size();
    int i = arr1Size - 1;
    int j = arr2Size - 1;
    int carry = 0;
    while (i >= 0 || j >= 0)
    {
        if (i >= 0 && j >= 0)
        {
            int temp = arr1[i] + arr2[j] + carry;
            // get last value
            int lastElem = temp % 10;
            ans.push_back(lastElem);
            carry = temp / 10;
            i--;
            j--;
        }
        else if (i >= 0)
        {
            int temp = arr1[i] + carry;
            int lastElem = temp % 10;
            ans.push_back(lastElem);
            carry = temp / 10;
            i--;
        }
        else
        {
            int temp = arr1[j] + carry;
            int lastElem = temp % 10;
            ans.push_back(lastElem);
            carry = temp / 10;
            j--;
        }
    }
    // if last elem have carry value so just add at last
    if (carry > 0)
    {
        ans.push_back(carry);
    }

    // reverse arr
    i = 0, j = ans.size() - 1;
    while (i < j)
    {
        swap(ans[i], ans[j]);
        i++;
        j--;
    }
    return ans;
}

//tc o(m+n) sc (1)
string calc_Sum(vector<int> &arr1, vector<int> &arr2)
{
    // Complete the function
    int i = arr1.size() - 1;
    int j = arr2.size() - 1;
    int carry = 0;
    string ans;
    while (i >= 0 && j >= 0)
    {
        int temp = arr1[i] + arr2[j] + carry;
        ans.push_back((temp % 10) + '0');
        carry = temp / 10;
        i--;
        j--;
    }

    while (i >= 0)
    {
        int temp = arr1[i] + carry;
        ans.push_back((temp % 10) + '0');
        carry = temp / 10;
        i--;
    }

    while (j >= 0)
    {
        int temp = arr2[j] + carry;
        ans.push_back((temp % 10) + '0');
        carry = temp / 10;
        j--;
    }

    if (carry > 0)
    {
        ans.push_back(carry + '0');
    }

    // reverse
    i = 0, j = ans.size() - 1;
    while (i < j)
    {
        swap(ans[i], ans[j]);
        i++;
        j--;
    }

    return ans;
}

int main()
{
    // vector<int>arr1 = {9,5,4,9};
    // vector<int>arr2 = {6,1,4};
    vector<int> arr1 = {8, 5, 9, 2, 4, 1, 8, 3, 9, 3, 8, 7, 8, 6, 8, 9, 4, 1};
    vector<int> arr2 = {1, 7, 6, 1, 5, 8, 7, 6, 9, 6, 3, 1, 3, 1, 7, 5, 9, 2, 8};
    // vector<int> ans = brouteForce(arr1, arr2);
    // printArr(ans);
    string ans= calc_Sum(arr1,arr2);
    printStringArr(ans);
    return 0;
}