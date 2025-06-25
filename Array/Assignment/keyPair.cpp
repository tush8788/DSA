#include<iostream>
#include<vector>
#include<algorithm> //for sort function

using namespace std;

/*
    Input [1,24,5,6,9,8,7]
    target 30
    output : 1
*/

//TC O(n^2) SC O(1)
bool keyPair(vector<int>arr,int target){
    int size = arr.size();
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target) return true;
        }
    }
    return false;
}

//TC O(n) SC O(1)
bool twoPointerApporch(vector<int>& arr, int target) {
        // code here
        int low = 0;
        int high = arr.size()-1;
        std::sort(arr.begin(),arr.end());
        while(low<high){
            int currSum = arr[low]+arr[high];
            if(currSum == target) return true;
            else if(currSum>target) high--;
            else low++;
        }
        return false;
}

int main(){
    vector<int>arr = {1,24,5,6,9,8,7};
    cout<<keyPair(arr,40)<<endl;
    cout<<twoPointerApporch(arr,30)<<endl;
    return 0;
}