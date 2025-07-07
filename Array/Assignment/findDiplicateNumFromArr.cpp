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

int main(){
    vector<int>arr={1,3,4,2,2};
    // cout<<"duplicate num "<<findDulicateBrouteForce(arr)<<endl;
     cout<<"duplicate num "<<findDuplicateFromNegativeMarking(arr)<<endl;
    return 0;
}