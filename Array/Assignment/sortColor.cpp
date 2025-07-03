#include<iostream>
using namespace std;

void printArr(vector<int>arr){
    for(int i=0;i<(int)arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//tc o(n). sc n(1)
void inPlaceSort(vector<int>arr){
    int low=0,temp=0,size=arr.size();
    //just take zero at first indexes
    while(low<size){
        if(arr[low]==0){
            swap(arr[low],arr[temp]);
            low++;
            temp++;
        }else{
            low++;
        }
    }
    //after zero just add one after zero
    int midd=temp;
    while(midd<size){
        if(arr[midd]==1){
            swap(arr[temp],arr[midd]);
            temp++;
            midd++;
        }else{
            midd++;
        }
    }
    printArr(arr);

}

//best solution tc o(n) sc o(1)
void threePointerApproch(vector<int>arr){
    int low=0,midd=0,high=arr.size()-1;
    while(midd<=high){
        if(arr[midd]==0){
            swap(arr[low],arr[midd]);
            low++;
            midd++;
        }
        else if(arr[midd]==1){
            midd++;
        }
        else{
            swap(arr[midd],arr[high]);
            high--;
        }
    }

    printArr(arr);
}

int main(){
    vector<int>arr={2,0,2,2,1,1,0,1};
    // inPlaceSort(arr);
    threePointerApproch(arr);
    return 0;
}