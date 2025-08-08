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

    //iterator
    cout<<"print iterator:: ";
    deque<int>::iterator it = dq.begin();
    while (it!=dq.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    //access like array
    cout<<"oprator dq[2]:: "<<dq[2]<<endl;
    cout<<"oprator using at:: "<<dq.at(1)<<endl;

    //insert
    it = dq.begin();
    dq.insert(it,200);
    cout<<"insert "<<dq.at(0)<<endl;

    // erase
    it = dq.begin();
    dq.erase(it);
    cout<<"insert "<<dq.at(0)<<endl;

    //clear
    dq.clear();
    cout<<"clear :: "<<dq.size()<<endl;

    //swap
    deque<int>dq1;
    dq1.push_back(1000);
    dq1.push_back(2000);
    dq1.push_back(3000);

    dq.swap(dq1);
    
    return 0;
}
