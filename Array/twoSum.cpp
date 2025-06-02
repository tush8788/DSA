#include<iostream>
using namespace std;

//tc-o(n^2) sc-o(1)
bool twoSum(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target) return true;
        }
    }
    return false;
}

int main(){
    int arr[]={10,5,20,15,30};
    int target = 35,size=sizeof(arr)/sizeof(arr[0]);
    cout<<( twoSum(arr,size,target) ? "true" : "false" )<<endl;
    return 0;
}