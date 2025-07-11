#include<iostream>
using namespace std;


void printArr(vector<int>arr){
    for(int i=0;i<(int)arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//tc o(n^2) sp o(1)
int brouteForce(vector<int>arr){
    for(int i=0;i<(int)arr.size();i++){
        for(int j=i+1;j<(int)arr.size();j++){
            if(arr[i]==arr[j]){
                return i+1;
            }
        }
    }
    return -1;
}

//optimze solution tc o(n) sc o(1)
//like we store element how many time element occure in arr
int optimize(vector<int>arr){
    int size = arr.size();
    vector<int>temp(size,0);
    for(int i=0;i<size;i++){
        int index = arr[i];
        temp[index] = temp[index]+1;
    }
    printArr(temp);
    for(int i=0;i<size;i++){
        int index = arr[i];
        if(temp[index]>1){
            return i+1;
        }
    }
    return -1;
}


//third time
int thirdSolution(vector<int> arr)
{
    int size = arr.size();
    unordered_map<int, int> hash;
    for (int i = 0; i < size; i++)
    {
        int index = arr[i];
        hash[index]++;
    }

    for (int i = 0; i < size; i++)
    {
        int index = hash[arr[i]];
        if (index > 1)
            return i + 1;
    }
    return -1;
}

int main(){
    // vector<int> arr= {1,5,3,4,3,5,6};
    // vector<int> arr= {1,2,3,4};
    vector<int> arr= {7,4,0,9,4,8,8,2,4,5,5,1};

    // cout<<"repeting element "<<brouteForce(arr)<<endl;
    // cout<<"repeting element "<<optimize(arr)<<endl;
    cout<<"repeting element "<<thirdSolution(arr)<<endl;

    return 0;
}