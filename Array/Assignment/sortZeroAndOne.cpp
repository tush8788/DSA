#include<iostream>
using namespace std;

void printArr(vector<int>arr){
    for(int i=0;i<(int)arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//tc o(n) sc o(1)
void sortZeroAndOne(vector<int>&arr){
    int l=0,h=arr.size()-1;
    while (l<h){
        if(arr[l]==0){
            l++;
        }else if(arr[h]==1){
            h--;
        }else{
            swap(arr[l],arr[h]);
            l++;
            h--;
        }
    }
    
}

int main(){
    vector<int>arr={1,0,0,0,0,1,1,0,1,1,0};
    sortZeroAndOne(arr);
    printArr(arr);
    return 0;
}