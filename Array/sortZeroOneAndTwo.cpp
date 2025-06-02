#include<iostream>
using namespace std;

//tc-0(n) sc-o(1)
void sortFirstMethod(int arr[],int size){
    int zeroCount=0,oneCount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0)zeroCount++;
        else if(arr[i]==1)oneCount++;
    }
    int i=0;
    //add zero
    for(;i<zeroCount;i++){
        arr[i]=0;
    }
    //add one
    for(;i<(oneCount+zeroCount);i++){
        arr[i]=1;
    }
    //add two
    while (i<size)
    {
        arr[i]=2;
        i++;
    }
    
}

//tc-o(n) sc-o(1)
void sortSecondMethod(int arr[],int size){
    int zeroCount=0,oneCount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0)zeroCount++;
        else if(arr[i]==1)oneCount++;
    }

    for(int i=0;i<size;i++){
        if(i<zeroCount) arr[i]=0;
        else if(i<(zeroCount+oneCount)) arr[i]=1;
        else arr[i]=2;
    }

}



void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int main(){
    int arr[]={1,0,1,2,0,1,2,2,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    // sortFirstMethod(arr,size);
    sortSecondMethod(arr,size);
    printArr(arr,size);
    return 0;
}