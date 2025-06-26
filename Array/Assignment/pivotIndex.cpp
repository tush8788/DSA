#include<iostream>
using namespace std;

int sum(vector<int>arr,int start,int end){

    int sum=0;
    for(;start<=end;start++){
        sum=sum+arr[start];
    }
    return sum;
}

int pivotIndex(vector<int>arr){
    int size = arr.size();
    for(int i=0;i<size;i++){
        int leftSum = sum(arr,0,i-1);
        int rightSum = sum(arr,i+1,size-1);
        if(leftSum == rightSum) return i;
    } 
    return -1;
}

int main(){
    vector<int>arr={1,7,3,6,5,6};
    cout<<"Pivot index is : "<<pivotIndex(arr)<<endl;
    return 0;
}