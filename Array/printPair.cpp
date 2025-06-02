#include<iostream>
using namespace std;

//tc - o(n^2) sc - o(1)
void printPair(int arr[],int size){
    int i=0,j=1;
    while(i<size){
        cout<<" { "<<arr[i]<<","<<arr[j]<<" } ";
        if(i==size-2){
            break;
        }else if(j==size-1){
            i++;
            j=i+1;
        }else{
            j++;
        }
    }
    cout<<endl;
}

void printPairScondWay(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            cout<<" { "<<arr[i]<<","<<arr[j]<<" } ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // printPair(arr,size);
    printPairScondWay(arr,size);
    return 0;
}