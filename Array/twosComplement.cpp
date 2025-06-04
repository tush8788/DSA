#include<iostream>
using namespace std;

void twosComplement(int arr[],int size){
    for(int i=0;i<size;i++){
        // cout<<"i:-- "<<(~arr[i]+1);
        int temp = (~arr[i]+1);
        arr[i] = temp;
    }
}

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,0,1,0,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    twosComplement(arr,size);
    print(arr,size);
    return 0;
}