#include<iostream>
#include<vector>
using namespace std;

int main(){
    //create
    //normal
    vector<int>mark;
    //create vector with size 10
    vector<int>mark1(10);
    //create vector with size 5 and fill with zero
    vector<int>mark3(5,0);

    vector<int>arr = {1,2,3,4,5};
    //membor func
    // 1) begin()
    cout<<" begin() -> "<< *(arr.begin() )<<endl;
    // 2) end()
    cout<<" end() -> "<< *(arr.end()-1)<<endl;
    // 3) push_back()
    arr.push_back(6);
    arr.push_back(7);
    // 4) pop_back()
    arr.pop_back();
    // 5) size()
    cout<<"size of vector :: "<<arr.size();
    return 0;
}