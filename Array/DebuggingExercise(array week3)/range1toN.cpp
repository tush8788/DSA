#include<iostream>
using namespace std;

/*
    Debug the code. Your task is to populate the array using the integer values 
    in the range 1 to N (both inclusive) in the order - 1,3,5,.......,6,4,2.
*/ 
void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j-1] = i+2; //here we need only apply -1 
        arr[j] = i+1;
        j++;
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
    populate(arr,size);
    printArr(arr,size);
    return 0;
}