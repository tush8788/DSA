#include<iostream>
#include<vector>
using namespace std;

void reverseArr(vector<int>&arr){
    int i=0,j=arr.size()-1;
    while (i<j)
    {
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j]=temp;
       i++;
       j--;
    }
}

void printArr(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr= {1,3,4,5,6};
    reverseArr(arr);
    printArr(arr);
    return 0;
}