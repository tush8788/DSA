#include<iostream>
#include<algorithm>
using namespace std;

int brouteForceApproch(vector<int>arr){
    int size = arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<size;i++){
        if(arr[i]!=i) return i;
    }
    return size;
}

int main(){
    // vector<int> arr={9,6,4,2,3,5,7,0,1};
    // vector<int> arr={3,0,1};
    vector<int> arr={1,0};
    cout<<brouteForceApproch(arr)<<endl;
    return 0;
}