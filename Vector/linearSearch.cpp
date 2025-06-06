#include<iostream>
#include<vector>
using namespace std;

bool linearSearch(vector<int>arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}

int main(){
    return 0;
}