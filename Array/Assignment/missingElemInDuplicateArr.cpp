#include<iostream>
using namespace std;

void printArr(vector<int>arr){
    for(int i=0;i<(int)arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//use negative marking [place visited]
//tc o(n) sc n(1)
int missingNumber(vector<int>arr){
    for(int i = 0;i < (int) arr.size();i++){
        int index = abs(arr[i]);
        if(arr[index-1]>0){
            arr[index-1] *= -1;
        }
    }
    printArr(arr);
    for(int i = 0;i < (int) arr.size();i++){
        if(arr[i]>0) return i+1;
    }
    return -1;
}

//sorting and swaping method
int sortAndSwap(vector<int>arr){
    int i =0,n=arr.size();
    //this will sort arr
    while(i<n){
        int index = arr[i]-1; // -1 becasue in question they think as arr start from 1 not zero
        // if i and index value are not same then just swap, if not same then increse i value
        if(arr[i] != arr[index]){
            swap(arr[i],arr[index]);
        }else{
            i++;
        }
    }
    printArr(arr);
    cout<<"missing num is : ";
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<"";
        }
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {1,3,5,3,4};
    // cout<<"Missing Num is : "<<missingNumber(arr)<<endl;
    sortAndSwap(arr);
    return 0;
}