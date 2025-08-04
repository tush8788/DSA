#include<iostream>
#include<list>
using namespace std;

int main(){
    //create
    list<int>myList;

    //push elem from front
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);

    //push elem by front
    myList.push_front(11);
    myList.push_front(20);

    //pop
    myList.pop_back();
    myList.pop_front();

    cout<<myList.size()<<endl;

    //front elem
    cout<<"front "<<myList.front()<<endl;

    //back 
    cout<<"last "<<myList.back()<<endl;

    myList.push_back(11);

    //trevse
    list<int>::iterator it = myList.begin();
    
    while (it != myList.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    
    //remove element 
    myList.remove(11);
     list<int>::iterator it2 = myList.begin();
    
    while (it2 != myList.end())
    {
        cout<<*it2<<" ";
        it2++;
    }


    // myList.clear();
    // cout<<"Size :: "<<myList.size()<<endl;;

    // cout<<"List is Empty:: "<<myList.empty();
    
    return 0;
}