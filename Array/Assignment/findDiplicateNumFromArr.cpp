#include<iostream>
using namespace std;

//tc o(n log n) sc o(n) because sort function 
int findDulicateBrouteForce(vector<int>arr){
    sort(arr.begin(),arr.end());
    for(int i=0;i<(int)arr.size()-1;i++){
        if(arr[i]==arr[i+1])
            return arr[i];
    }
    return -1;
}

//negative marking (visited node mark as negative)
//TC O(n) sc o(1)
int findDuplicateFromNegativeMarking(vector<int>arr){
    for(int i=0;i<(int)arr.size();i++){
        int indexVal = arr[i];

        //if value already negative then make it positive
        if(indexVal<0) indexVal = -(indexVal);
        //check current postion we already visited then retun
        if(arr[indexVal]<0) return indexVal;
        //if not just mark visited 
        else arr[indexVal] = -arr[indexVal];
    }
    return -1;
}
//better code
int findDuplicateFromNegativeMarkingBetterCode(vector<int>arr){
    int ans = -1;
    for(int i=0;i<(int)arr.size();i++){
        //this will give positive num abs is use for that perpose
        int indexVal = abs(arr[i]);

        //check current postion we already visited then retun
        if(arr[indexVal]<0) {
            ans = indexVal;
            break;
        }

        //if not just mark visited 
        arr[indexVal] *= -1;
    }
    return ans;
}

//using posiotioning
//tc o(n) sc o(1)
int findDupUsingPositioning(vector<int>arr){
    while(arr[0]!=arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
    }
    return arr[0];
}
int main(){
    //constant [1,n] <--- means value trit as index
    vector<int>arr={1,3,4,2,2};
    // cout<<"duplicate num "<<findDulicateBrouteForce(arr)<<endl;
     cout<<"duplicate num "<<findDuplicateFromNegativeMarking(arr)<<endl;
     cout<<"duplicate num "<<findDuplicateFromNegativeMarkingBetterCode(arr)<<endl;
     cout<<"duplicate num  using posiotioning "<<findDupUsingPositioning(arr)<<endl;
    return 0;
}