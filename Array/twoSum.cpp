#include<iostream>
using namespace std;
//leetcode
//tc-o(n^2) sc-o(1)
bool twoSum(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target) return true;
        }
    }
    return false;
}

pair<int,int>twoSumUsingPair(int arr[],int size,int target){
    pair<int,int> p = make_pair(-1,-1);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                p.first = arr[i];
                p.second = arr[j];
                return p;
            }
        }
    }
    return p;
}

bool twoSumUsingTwoPointer(int arr[],int size,int target){
    if(size==0) return false;

    int i=0,j=1;
    while(i<size-1){
        if(arr[i]+arr[j]==target) return true;
        if(j==size-1){
            i++;
            j=i;
        }else{
            j++;
        }
    }
    return false;
}

int main(){
    int arr[]={10,5,20,15,30};
    int target = 35,size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Normal for loop"<<( twoSum(arr,size,target) ? "true" : "false" )<<endl;
    pair<int,int> temp = twoSumUsingPair(arr,size,target);
    cout<<temp.first<<" "<<temp.second<<endl;
    cout<<"Two pointer for loop :- "<<( twoSumUsingTwoPointer(arr,size,target) ? "true" : "false" )<<endl;
    
    return 0;
}