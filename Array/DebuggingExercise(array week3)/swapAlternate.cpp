#include<iostream>
using namespace std;

/*
    input [1,2,3,4,5]
    ouput [2,1,4,3,5]
*/ 
void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i+1]; // fixed only arr[i+1] insted of arr[i] 
        arr[i+1] = arr[i];
        arr[i] = temp;
    }
}

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    swapAlternate(arr,size);
    printArr(arr,size);
    return 0;
}