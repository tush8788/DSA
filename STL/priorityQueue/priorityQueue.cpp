#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // create
    priority_queue<int> pq;
    pq.push(10);
    // 10
    pq.push(25);
    // 25,10
    pq.push(55);
    // 55,25,10
    pq.push(11);
    // 55,25,11,10

    // top
    cout << "top :: " << pq.top() << endl; // print 55 because default is max-heap means give max elem to highest priority

    // pop
    pq.pop();
    cout << "top :: " << pq.top() << endl;

    // size
    cout << "size :: " << pq.size() << endl;

    // empty
    cout << "empty :: " << (pq.empty()?"True" : "False")<< endl;

    return 0;
}