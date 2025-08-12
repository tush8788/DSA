#include <iostream>
#include<map>
#include <unordered_map>
using namespace std;

int main()
{
    // creation of unordered map
    unordered_map<string, string> unMap;

    // insertion
    unMap["in"] = "India";
    //or
    unMap.insert(make_pair("us","USA"));
    // or
    pair<string,string>p;
    p.first="br";
    p.second="Brazil";
    unMap.insert(p);

    //size
    cout<<"Size of unordered map :: "<<unMap.size()<<endl;

    //clear
    // unMap.clear();
    cout<<"Size after clear :: "<<unMap.size()<<endl;

    //empty
    cout<<"empty :: "<<(unMap.empty()?"true":"false")<<endl;

    //at
    cout<<"at "<<unMap.at("us")<<endl;
    unMap.at("us") = "usa1";
    cout<<"at "<<unMap.at("us")<<endl;

    // traverse using iterator
    unordered_map<string,string>::iterator it = unMap.begin();
    while (it!=unMap.end())
    {
        cout<<(*it).first;
        cout<<" : "<<(*it).second<<endl;
        it++;
    }
    cout<<"______using pair_____"<<endl;
    it = unMap.begin();
    // using pair
    while (it!=unMap.end())
    {
        pair<string,string>p = *it;
        cout<<p.first<<" : ";
        cout<<p.second<<endl;
        it++;
    }
    
    
    return 0;
}