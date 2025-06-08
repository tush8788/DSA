#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int>arr);

void reverseVector(vector<int>arr){
    int i =0,j=arr.size()-1;
    while (i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
        /* code */
    }
    printArr(arr);
    
}

void printArr(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>arr={1,2,3,4,5,6};
    reverseVector(arr);
    // printArr(arr);
    return 0;
}