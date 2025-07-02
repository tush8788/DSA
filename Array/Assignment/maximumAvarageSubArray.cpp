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

int main(){
    // vector<int>arr={1,12,-5,-6,50,3};
    // int k = 4;
    vector<int>arr={5};
    int k = 1;
    maxAvarageSubArr(arr,k);
    return 0;
}