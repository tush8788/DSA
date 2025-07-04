#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//print arr
void printArr(vector<int>arr){
    for(int i=0;i<(int)arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//first approch using sort func
//tc o(n log n) sc o(n)
void firstApproch(vector<int>&arr){
    sort(arr.begin(),arr.end());
}

//second approch using dutch national flag algorithem (two pointer)
//tc o(n) sc-o(1)
void secondApproch(vector<int>&arr){
    int l=0,h=arr.size()-1;
    while(l<h){
        if(arr[l]<0){
            l++;
        }else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
            l++;
            h--;
        }
    }
}

//third approch
//tc o(n) sc o(1)
void thirdApproch(vector<int>&arr){
    int l=0,h=0;
    while(h<(int)arr.size()){
        if(arr[h]<0){
            swap(arr[l],arr[h]);
            h++;
            l++;
        }else{
            h++;
        }
    }
}

int main(){
    vector<int>arr={1,2,-3,4,-5,6};
    // firstApproch(arr);
    // secondApproch(arr);
    thirdApproch(arr);
    printArr(arr);
    return 0;
}