#include<iostream>
using namespace std;

int sum(vector<int>arr,int start,int end){

    int sum=0;
    for(;start<=end;start++){
        sum=sum+arr[start];
    }
    return sum;
}
//brouteForce apporch
int pivotIndex(vector<int>arr){
    int size = arr.size();
    for(int i=0;i<size;i++){
        int leftSum = sum(arr,0,i-1);
        int rightSum = sum(arr,i+1,size-1);
        if(leftSum == rightSum) return i;
    } 
    return -1;
}

void printArr(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//optimizeApproch
//TC O(N) SC - O(N)
int pivotIndexOptimze(vector<int>arr){
    int size = arr.size();
    vector<int> leftSumArr(size,0);
    vector<int> rightSumArr(size,0);
    //left sum
    for(int i=1;i<size;i++){
        leftSumArr[i] = leftSumArr[i-1]+arr[i-1];
    }

    //right Sum
    for(int i=size-2;i>=0;i--){
        rightSumArr[i]=rightSumArr[i+1]+arr[i+1];
    }

    for(int i=0;i<size;i++){
        if(leftSumArr[i]==rightSumArr[i]) return i;
    }
    return -1;
}

int main(){
    vector<int>arr={1,7,3,6,5,9};
    // cout<<"Pivot index is : "<<pivotIndex(arr)<<endl;
    cout<<"Pivot index is : "<<pivotIndexOptimze(arr)<<endl;
    
    return 0;
}