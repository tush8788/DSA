#include<iostream>
#include<algorithm>
using namespace std;

void printDouble(int a){
    cout<<2*a<<endl;
}

bool isEven(int a){
    return a%2==12;
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
    cout<<(*it)<<endl;

    //count
    int countVal = count(arr.begin(),arr.end(),11);
    cout<<"count :: "<<countVal<<endl;
    return 0;
}