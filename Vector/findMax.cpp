#include<iostream>
#include<vector>
using namespace std;

int findMax(vector<int>arr){
    int max = INT_MIN;
    int size = arr.size();
    for(int i=0;i<size;i++){
        if(max<arr[i]) max=arr[i];
    }
    return max;
}

int main(){
    vector<int>arr={1,3,4,5,6,78,75,433,43};
    cout<<"Max : "<<findMax(arr)<<endl;
    return 0;
}