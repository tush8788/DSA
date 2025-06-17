#include<iostream>
using namespace std;
bool linearSearch(int arr[], int n ,int val){ // there is no return available
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[]={1,3,5,6,7};
    int target = 7;
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout<<linearSearch(arr,size,target)<<endl;
    return 0;
}