#include<iostream>
using namespace std;

void printArr(vector<int>arr){
    int size=arr.size();
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//1 approch
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

// 2 apporch using twoPointer techinque
//tc o(n) sc o(1)
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

//3 approch two pointer but diffirent 
//TC o(n) SC o(1)
int twoPointerSecond(vector<int>arr){
    int size = arr.size();
    int i=0,j=0;
    while(j<size){
        if(arr[i]==arr[j]) j++;
        else arr[++i] = arr[j++];
        // if(arr[i]!=arr[j]){
        //     i++;
        //     arr[i] = arr[j];
        //     j++;
        // }else{
        //     j++;
        // }
    }
    i++; //because they give 4 because 0 - 4 is equal to 5
    cout<<i<<endl;
    for(int tempi=0;tempi<i;tempi++){
        cout<<arr[tempi]<<" ";
    }
    return i;
}

int main(){
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    // removeDuplicate(arr);
    // twoPointer(arr);
    twoPointerSecond(arr);

    return 0;
}