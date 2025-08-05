#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    // push
    q.push(10);
    q.push(20);
    q.push(30);
    // size
    cout << q.size() << endl;
    // pop
    q.pop();
    cout << "after pop :: "<<q.size() << endl;
    //empty
    cout<<"empty:: "<<(q.empty() ? "True":"false")<<endl;
    //font
    cout<<"fornt:: "<<q.front()<<endl;
    //font
    cout<<"back:: "<<q.back()<<endl;

    //swap
    queue<int>first;
    queue<int>second;
    first.push(10);
    first.push(20);
    first.push(30);
    
    second.push(100);
    second.push(200);
    second.push(300);
    first.swap(second);

    cout<<"swap "<<first.front()<<endl;
    return 0;
}