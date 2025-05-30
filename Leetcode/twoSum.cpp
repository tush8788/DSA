#include<iostream>
using namespace std;

void twoSum(int arr[],int size,int target){
    int i=0,j=1;    
    while(i<size-1){
        if(arr[i]+arr[j] == target){
            cout<<i<<" "<<j;
            return;
        }
        if(j==size-1){
            i++;
            j=i+1;
        }
        else j++;
    }
}

int main(){
    int arr[] = {3,3};
    int target=6;
    int size = sizeof(arr)/sizeof(arr[0]);
    twoSum(arr,size,target);
    return 0;
}