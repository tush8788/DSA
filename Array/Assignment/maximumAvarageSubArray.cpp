#include<iostream>
#include<vector>
using namespace std;

int sumOfArr(vector<int>arr,int start,int end){
    int sum = 0;
    for(int i=start;i<end;i++){
        sum+=arr[i];
    }
    return sum;
}

//1) tc o(n^2) sc 0(1)
double maxAvarageSubArr(vector<int>arr,int k){
    int size = arr.size();
    int maxSum = INT_MIN;
    int i=0;
    while((i+k)<=size){
        int sum = sumOfArr(arr,i,i+k);
        cout<<"sum "<<sum<<endl;
        if(sum>maxSum) maxSum = sum;
        i++;
    }

    cout<<"Max SUM "<<maxSum;
    cout<<"maxSum / k "<<(double) maxSum / k;
    return (double) maxSum / k;
    // return maxSum;
}

//2) TC o(n) sc o(1)
double maxAverageSecond(vector<int> arr,int k){
    int size = arr.size();
    int i=0,j=k;
    int tempSum = 0,maxSum = INT_MIN;
    //first calculate i to k
    while(i<j){
        tempSum+=arr[i];
        i++;
    }
    maxSum = max(tempSum,maxSum);
    i=1;
    while(j<size){
        tempSum-=arr[i-1]; //remove last value from tempSum
        tempSum+=arr[j]; //add new value in tempSum
        maxSum = max(tempSum,maxSum);
        i++;
        j++;
    }
    return (double)maxSum/k;
}

//3 sliding window
// TC o(n) sc o(1)
double slidingWindow(vector<int>arr,int k){
    int i=0,j=k-1;
    int sum=0;
    for(int i=0;i<=j;i++){
        sum+=arr[i];
    }
    int maxSum = sum;
    j++;
    while (j<(int)arr.size()){
        sum-=arr[i];
        sum+=arr[j];
        maxSum = max(sum,maxSum);
        i++;
        j++;
    }
    return (double)maxSum/k;
}

int main(){
    vector<int>arr={1,12,-5,-6,50,3};
    int k = 4;
    // vector<int>arr={5};
    // int k = 1;
    // maxAvarageSubArr(arr,k);
    // cout<<"Average: "<<maxAverageSecond(arr,k)<<endl;
    cout<<"Average: "<<slidingWindow(arr,k)<<endl;
    return 0;
}