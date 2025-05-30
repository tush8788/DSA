#include<iostream>
using namespace std;

//two pointer
void extrimePrinting(int arr[],int size){
    int i=0,j=size-1;
    while(i<=j){
        if(i==j){
            cout<<arr[i]<<endl;
        }else{
            cout<<arr[i]<<", "<<arr[j]<<endl;
        }
        i++;
        j--;
    }
}

int main(){
    int arr[] = {1,3,4,5,7,8,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    extrimePrinting(arr,size);
    return 0;
}