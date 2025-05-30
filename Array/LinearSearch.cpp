#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target) return true;
    }
    return false;
}

int main(){
    int arr[] = {1,3,5,6,7,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<(LinearSearch(arr,size,3)?"true":"false")<<endl;
    return 0;
}