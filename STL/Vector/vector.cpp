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
    cout<<"size of vector :: "<<arr.size()<<endl;
    // 6) fornt()
    cout<<"front :: "<<arr.front()<<endl;
    // 7) back()
    cout<<"back :: "<<arr.back()<<endl;
    // 8) empty()
    cout<<"empty :: "<<arr.empty()<<endl;
    // 9) at()
    cout<<"at :: "<<arr.at(1)<<endl;
    // 10) capacity()
    cout<<"capacity :: "<<arr.capacity()<<endl;
    // 11) reserve()
    arr.reserve(20);
    cout<<"reserve :: "<<arr.capacity()<<endl;

    // 12) insert
    arr.insert(arr.begin(),99);
    cout<<" insert 0:: "<<arr[0]<<"\n 1 ::"<<arr[1]<<endl;

    // 13) max_size
    cout<<" max size :: "<< arr.max_size() <<endl;

    // 14) clear
    arr.clear();
    cout<<"after clear "<<arr.size()<<endl;

    arr.push_back(10);
    arr.push_back(11);
    arr.push_back(12);
    arr.push_back(13);
     
    //15 erase
    arr.erase(arr.begin());
    cout<<"erase "<<arr[0]<<endl;

    //for each loop
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}