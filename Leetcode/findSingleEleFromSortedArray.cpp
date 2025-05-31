#include<iostream>
//single element in array [this logic work with both sorted and unsortd arr]
//TC-> O(N) SC->O(1)
int singleElement(int arr[],int size){
    if(size == 0) return -1;
    int ans = 0;
    for(int i =0;i<size;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {1,1,3,3,4,8,8,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout<<singleElement(arr,size)<<std::endl;
    return 0;
}