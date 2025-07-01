#include<iostream>
#include<algorithm>
using namespace std;

//TC O(n log n) sc o(1)
int brouteForceApproch(vector<int>arr){
    int size = arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<size;i++){
        if(arr[i]!=i) return i;
    }
    return size;
}

// using bitwise oprater
int usingBitwise(vector<int> arr){
    int size = arr.size();
    int ans = 0; // zero because o xor with with num ans is num that's why zero
    for(int i=0;i<size;i++){
        ans^=arr[i];
    }

    for(int i=0;i<=size;i++){
        ans^=i;
    }
    return ans;
}

int main(){
    vector<int> arr={9,6,4,2,3,5,7,0,1};
    // vector<int> arr={3,0,1};
    // vector<int> arr={1,0};
    cout<<brouteForceApproch(arr)<<endl;
    return 0;
}