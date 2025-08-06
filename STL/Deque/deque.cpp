#include<iostream>
#include<queue>
using namespace std;

int main(){
    //create
    deque<int>dq;
    //push_back
    dq.push_back(10);
    //10
    dq.push_back(20);
    // 10,20
    dq.push_back(30);
    // 10,20,30
    
    // push_front
    dq.push_front(100);
    // 100,10,20,30
    dq.push_front(200);
    // 200,100,10,20,30

    //pop_back
    dq.pop_back();
    // 200,100,10,20
    //pop_front
    dq.pop_front();
    // 100,10,20

    //size
    cout<<"size :: "<<dq.size()<<endl;

    //front
    cout<<"front "<<dq.front()<<endl;
    //back
    cout<<"back "<<dq.back()<<endl;

    //empty
    cout<<"empty :: "<<(dq.empty()?"true":"false")<<endl;
    
    return 0;
}
