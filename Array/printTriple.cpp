#include<iostream>
using namespace std;

//tc->o(n^3) sc->o(1)
void printTriplete(int arr[],int size){
    for(int i=0;i<size-2;i++){
        for(int j=i+1;j<size-1;j++){
            for(int k=j+1;k<size;k++){
                cout<<arr[i]<<arr[j]<<arr[k]<<endl;
            }
        }
    }
}

void printTripleteTwoPointer(int arr[],int size){
    if(size==0 || size==2) return;
    int i=0,j=1,k=2;
    while (i<size-2)
    {
        cout<<arr[i]<<arr[j]<<arr[k]<<endl;
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
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    // printTriplete(arr,size);
    printTripleteTwoPointer(arr,size);
    return 0;
}