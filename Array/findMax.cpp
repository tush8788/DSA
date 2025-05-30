#include<iostream>
using namespace std;

int findMax(int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
}

int main(){
    int arr[] = {1,3,59,56,7,75,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<findMax(arr,size)<<endl;
}