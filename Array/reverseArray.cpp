#include<iostream>
using namespace std;
//optimze way time complexity o()
void reverseArray(int arr[],int size){
    int i=0,j=size-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    int arr[] = {1,2,4,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}