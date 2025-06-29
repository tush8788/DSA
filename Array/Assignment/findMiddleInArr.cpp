#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printArr(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//TC - O(N^2) SC - O(1)
int brouteForce(vector<int>arr){
    int size = arr.size();
    for(int i=0;i<size;i++){
        int leftSum = 0;
        int rightSum = 0;
        //left sum
        for(int j=0;j<i;j++){
            leftSum+=arr[j];
        }
        //right sum
        for(int j=i+1;j<size;j++){
            rightSum+=arr[j];
        }

        if(leftSum==rightSum){
            return i;
        } 
    }

    return -1;
}

//TC - O(N) SP - O(N)
int middleIndex(vector<int>arr){
    int size = arr.size();
    vector<int> leftArr(size,0);
    vector<int> rightArr(size,0);

    //left side arr
    for(int i=1;i<size;i++){
        leftArr[i]=leftArr[i-1]+arr[i-1];
    }

    //right side arr
    for(int i=size-2;i>=0;i--){
        rightArr[i] = rightArr[i+1]+arr[i+1];
    }

    for(int i=0;i<size;i++){
        if(leftArr[i]==rightArr[i]) return i;
    }
    return -1;
}

int main(){
    vector<int>arr={1,7,3,6,5,6};
    cout<<"middle index optimze solution :- "<<brouteForce(arr)<<endl;
    cout<<"middle index broute force :- "<<middleIndex(arr)<<endl;
    return 0;
}