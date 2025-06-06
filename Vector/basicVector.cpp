#include<iostream>
#include<vector>
using namespace std;

void basicVector(){
    //create vector
    vector<int> arr;

    //push value in vector at last
    arr.push_back(1);
    arr.push_back(2);

    //size of vector
    cout<<arr.size()<<endl;

    //capacity of vector
    cout<<arr.capacity()<<endl;

    //pop last value form vector
    arr.pop_back();

    //clear vector
    arr.clear();

    // declear vector with data 
    vector<int>arr1(5,0); //<- here 5 is size fill with 0 
    vector<int>temp(10); //<- here 5 is size

    vector<int>arr2={1,2,3,4,5};

    //copy one vector to onther
    vector<int>arr3(arr2);

    //in vector check staring element
    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;

    //end element
    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;

    //print vector (using forEach loop)
    for(auto it:arr3){
        cout<<it<<endl;
    }

}

int main(){
    basicVector();
    return 0;
}