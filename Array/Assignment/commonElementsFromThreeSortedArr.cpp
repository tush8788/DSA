#include<iostream>
#include <set>
using namespace std;

void printArr(vector<int>arr){
    for(int i=0;i<(int)arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//1. tc o(n1+n2+n3) sc o(n)
vector<int> commonElements(vector<int>arr1,vector<int>arr2,vector<int>arr3){
    vector<int>ans;
    int i=0,j=0,k=0;
    while(i<(int)arr1.size() && j<(int)arr2.size() && k<(int)arr3.size()){
        if((arr1[i]==arr2[j]) && (arr1[i]==arr3[k])){
            ans.push_back(arr1[i]);
            i++;
            j++;
            k++;
            continue;
        }

        int temp = min(arr1[i],arr2[j]);
        temp = min(temp,arr3[k]);
        if(temp == arr1[i]){
            i++;
        }else if(arr2[j] == temp){
            j++;
        }else{
            k++;
        }
    }

    //remove duplicate
    set<int> s(ans.begin(), ans.end());
    vector<int> result(s.begin(), s.end());
    return result;
}

// tc o(n1+n2+n3) sc o(n)
vector<int> findCommonSecond(vector<int>arr1,vector<int>arr2,vector<int>arr3){
    vector<int>ans;
    set<int>st;
    int i,j,k,n1=arr1.size(),n2=arr2.size(),n3=arr3.size();
    i=j=k=0;

    while(i<n1 && j<n2 && k<n3){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
            st.insert(arr1[i]);
            i++;
            j++;
            k++;
        }else if(arr1[i]<arr2[j]){ //jsut check arr1 value smaller then arr2 value 
            i++;
        }else if(arr2[j]<arr3[k]){ //jsut check arr2 value smaller then arr3 value 
            j++;
        }else{
            k++;
        }
    }

    //traverse set using forEach
    for(auto i:st){
        ans.push_back(i);
    }

    return ans;
}

int main(){
    vector<int>a={1,5,10,20,40,80};
    vector<int>b={6,7,20,80,100};
    vector<int>c={3,4,15,20,30,70,80,100};
    // vector<int>ans = commonElements(a,b,c);findCommonSecond
    vector<int>ans = findCommonSecond(a,b,c);

    printArr(ans);
    return 0;
}