#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printArr(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int middleIndex(vector<int>arr){
    int size = arr.size();
    vector<int> leftArr(size,0);
    vector<int> rightArr(size,0);

    //left side arr
    for(int i=1;i<size;i++){
        leftArr[i]=leftArr[i-1]+arr[i-1];
    }

    //right side arr
    for(int i=size-2;i>=0;i--){
        rightArr[i] = rightArr[i+1]+arr[i+1];
    }

    for(int i=0;i<size;i++){
        if(leftArr[i]==rightArr[i]) return i;
    }
    return -1;
}

int main(){
    vector<int>arr={1,7,3,6,5,6};
    cout<<"middle index :- "<<middleIndex(arr)<<endl;
    return 0;
}