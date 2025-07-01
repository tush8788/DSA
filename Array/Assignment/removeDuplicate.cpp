#include<iostream>
using namespace std;

void printArr(vector<int>arr){
    int size=arr.size();
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//TC o(n) SC o(n)
void removeDuplicate(vector<int>arr){
    int size = arr.size();
    vector<int> ansArr;
    int i=0;
    while (i<size)
    {
        if((i==size-1) || (arr[i]!=arr[i+1])) ansArr.push_back(arr[i]);
        i++;
    }

    printArr(ansArr);
    
}

// using twoPointer techinque
int twoPointer(vector<int>arr){
    int size = arr.size();
    int i=0,j=0;
    while(j<size){
        if((j==size-1) || (arr[j]!=arr[j+1])){
            arr[i]=arr[j];
            i++;
            j++;
        }else{
            j++;
        }
    }
    // cout<<"i"<<i;

    for(int tempi=0;tempi<i;tempi++){
        cout<<arr[tempi]<<" ";
    }
    return i;
}

int main(){
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    // removeDuplicate(arr);
    twoPointer(arr);
    return 0;
}