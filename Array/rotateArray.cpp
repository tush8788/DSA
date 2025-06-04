#include<iostream>
using namespace std;
//declaration on top so we use function before define
void printArr(int arr[],int size);

//tc -> o(n) sc-> o(n)
void rotateArrayFirst(int arr[],int size,int shift){
    if(size==0 || shift == 0) return;
    int updatedShift = shift%size;
    int tempArr[size];
    for(int i=0;i<size;i++){
        if(i+updatedShift>=size){
               tempArr[((i+updatedShift)%size)] = arr[i];
        }else{
            tempArr[(i+updatedShift)] = arr[i];
        }
    }

     for(int i=0;i<size;i++){
        arr[i]=tempArr[i];
    }

}

//tc-o(n) sc-o(n)
void rotateArrayScond(int arr[],int size,int shift){
    if(size==0 || shift == 0) return;
    shift = shift%size;
    int tempArr[size];
    int index=0;
    for(int i=(size-shift);i<size;i++){
       tempArr[index] = arr[i];
       index++;
    }

    for(int i=size-1;i>=0;i--){
        if(i-shift>=0){
            tempArr[i]=arr[i-shift];
        }
    }

    for(int i=0;i<size;i++){
        arr[i]=tempArr[i];
    }

}



void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int shift = 2;
    // rotateArrayFirst(arr,size,shift);
    rotateArrayScond(arr,size,shift);
    printArr(arr,size);
    return 0;
}