#include<iostream>
#include<vector>
using namespace std;

vector<int>twoSum(vector<int>arr,int target){
    int size = arr.size();
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target) return {i,j};
        }
    }
    return {-1,-1};
}

void printArr(vector<int>arr){
    int size = arr.size();
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>arr={1,2,3,6,5,7};
    int target = 1;
    vector<int>temp = twoSum(arr,target);
    printArr(temp);
    return 0;
}