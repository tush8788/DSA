#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int>arr={1,3,5,6,7};
    int target = 6;
    cout<<""<<linearSearch(arr,target);
    return 0;
}