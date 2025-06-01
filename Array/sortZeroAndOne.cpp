#include<iostream>
using namespace std;

//using two pointer techine
void sortZeroAndOne(int arr[],int size){
    int i =0,j=size-1;
    while(i<j){
        if(arr[i]<arr[j]){
            i++;
        }
        else if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }else if(arr[i]==0 && arr[j]==0){
            i++;
        }else{
            j--;
        }
    }
}

//most optimize logic
void sortZeroAndOneSecond(int arr[],int size){
    int i=0,j=size-1;
    while(i<j){
        while(arr[i]==0 && i<j) i++;
        while(arr[j]==1 && i<j) j--;
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

int main(){
    int arr[] = {0,1,0,1,1,0,1,0};
    // int arr[] = {1,0,0,0,1,0,1};
    // int arr[] = {1, 1, 1, 0};
    // int arr[] = {1, 1, 0, 0};
    int size = sizeof(arr)/sizeof(arr[1]);
    // sortZeroAndOne(arr,size);
    sortZeroAndOneSecond(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}