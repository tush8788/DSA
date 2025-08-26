#include<iostream>
#include<algorithm>
using namespace std;

void printDouble(int a){
    cout<<2*a<<endl;
}

void printArr(vector<int>arr){
    for(auto a : arr){
        cout<<a<<" ";
    }
    cout<<endl;
}

bool isEven(int a){
    return a%2==0;
}

int main(){
    vector<int>arr(5);
    arr[0]=11;
    arr[1]=20;
    arr[2]=30;
    arr[3]=11;
    arr[4]=11;
    
    //for_each
    for_each(arr.begin(),arr.end(),printDouble);
    
    //find
    int target=10;
    // vector<int>::iterator it = find(arr.begin(),arr.end(),target);
    //also use auto keyword
    auto itAuto = find(arr.begin(),arr.end(),target);
    cout<<"elem ::"<<(*itAuto)<<endl;
    
    //find_if
    auto it = find_if(arr.begin(),arr.end(),isEven);
    cout<<"Find if :: "<<(*it)<<endl;

    //count (this will give how many time given elem found in vector any container)
    int countVal = count(arr.begin(),arr.end(),11);
    cout<<"count :: "<<countVal<<endl;

    //count_if
    int countValIF = count_if(arr.begin(),arr.end(),isEven);
    cout<<"count_if :: "<<countValIF<<endl;

    //sort
    sort(arr.begin(),arr.end());
    cout<<"sort :: "<<endl;
    printArr(arr);

    //reverse
    reverse(arr.begin(),arr.end());
    cout<<"reverse :: "<<endl;
    printArr(arr);

    // rotate
    vector<int>arr1={10,20,30,40,50,60};
    cout<<"______"<<endl<<"before rotate :: ";
    printArr(arr1);
    rotate(arr1.begin(),arr1.begin()+2,arr1.end());
    cout<<"after rotate :: ";
    printArr(arr1);

    //unique
    vector<int>arr2={1,2,2,3,3,4};
    auto it1 = unique(arr2.begin(),arr2.end());
    arr2.erase(it1,arr2.end());
    printArr(arr2);

    return 0;
}