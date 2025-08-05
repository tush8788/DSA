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


    myList.clear();
    cout<<"Size :: "<<myList.size()<<endl;;

    cout<<"List is Empty:: "<<myList.empty();

    //swap method 
    list<int>myList1;
    list<int>myList2;

    myList1.push_back(10);
    myList1.push_back(20);
    myList1.push_back(30);

    myList2.push_back(100);
    myList2.push_back(200);
    myList2.push_back(300);

    list<int>::iterator it1 = myList1.begin();
    cout<<endl<<"before swap :: ";
    while (it1!=myList1.end())
    {
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;    
    myList1.swap(myList2);
    cout<<"after swap :: ";
    it1 = myList1.begin();
    while (it1!=myList1.end())
    {
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;

    //insert 
    cout<<"insert ::";
    myList1.insert(myList1.begin(),1000);

    it1 = myList1.begin();
    while (it1!=myList1.end())
    {
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;

    //erase
    cout<<"erase before:: "<<myList1.size()<<endl;

    myList1.erase(myList1.begin(),myList1.end());

    cout<<"erase after:: "<<myList1.size()<<endl;

    
    return 0;
}