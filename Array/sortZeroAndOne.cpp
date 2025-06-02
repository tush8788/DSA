#include<iostream>
using namespace std;

//using two pointer techine TC- o(n) sc-o(1)
void sortZeroAndOne(int arr[],int size){
    int i =0,j=size-1;
    while(i<j){
        if(arr[i]<arr[j]){
            i++;
        }
        else if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }else if(arr[i]==0 && arr[j]==0){
            i++;
        }else{
            j--;
        }
    }
}

//most optimize logic tc-o(n) sc- o(1)
void sortZeroAndOneSecond(int arr[],int size){
    int i=0,j=size-1;
    while(i<j){
        while(arr[i]==0 && i<j) i++;
        while(arr[j]==1 && i<j) j--;
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

//tc - o(n log n) sc->0(1)
void sortAndOneUsingInbuildMethod(int arr[],int size){
    sort(arr,arr+size);
}

//tc-o(n) sp-o(1)
void sortZeroAndOneUsingCountMethod(int arr[],int size){
    int zeroCount = 0;
    //count zero
    for(int i=0;i<size;i++){
        if(arr[i]==0) zeroCount++;
    }
    //add zero
    for(int i=0;i<size;i++){
        if(i<zeroCount) arr[i]=0;
        else arr[i]=1;
    }
}

int main(){
    int arr[] = {0,1,0,1,1,0,1,0};
    // int arr[] = {1,0,0,0,1,0,1};
    // int arr[] = {1, 1, 1, 0};
    // int arr[] = {1, 1, 0, 0};
    int size = sizeof(arr)/sizeof(arr[1]);
    // sortZeroAndOne(arr,size);
    // sortZeroAndOneSecond(arr,size);
    // sortAndOneUsingInbuildMethod(arr,size);
    sortZeroAndOneUsingCountMethod(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}