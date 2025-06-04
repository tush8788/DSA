#include<iostream>
using namespace std;
//tc-o(n) sc-o(1)
void flipBit(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=~arr[i];
    }
}

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[]={1,0,1,0,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    flipBit(arr,size);
    print(arr,size);
    return 0;
}