#include<iostream>
#include <set>
using namespace std;

void printArr(vector<int>arr){
    for(int i=0;i<(int)arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

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

int main(){
    vector<int>a={1,5,10,20,40,80};
    vector<int>b={6,7,20,80,100};
    vector<int>c={3,4,15,20,30,70,80,100};
    vector<int>ans = commonElements(a,b,c);
    printArr(ans);
    return 0;
}