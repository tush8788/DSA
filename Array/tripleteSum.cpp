#include<iostream>
using namespace std;

void tripleteSum(int arr[],int size,int target){
    if(size==2 || size == 0) return;
    int i=0,j=1,k=2;
    while(i<size-2){
        if(arr[i]+arr[j]+arr[k]==target){
            cout<<arr[i]<<arr[j]<<arr[k];
        }
        if(k==size-1){
                if(j==size-2){
                    i++;
                    j=i+1;
                    k=j+1;
                }else{
                    j++;
                    k=j+1;
                }
            }else{
                k++;
            }
    }
}

int main(){
    int arr[] = {10,20,30,40};
    int size = sizeof(arr)/sizeof(arr[0]);
    tripleteSum(arr,size,70);
    return 0;
}