#include<iostream>
using namespace std;

void countOfZeroAndOne(int arr[],int size){
    int zeroCount = 0,oneCount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0) zeroCount++;
        else if(arr[i]==1) oneCount++;
    }
    cout<<"ZeroCount :- "<<zeroCount<<endl<<"OneCount :- "<<oneCount<<endl;
}

int main(){
    int arr[] = {1,0,7,0,1,3,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    countOfZeroAndOne(arr,size);
    return 0;
}