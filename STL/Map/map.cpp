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

    //erase
    cout<<"Size :: "<<unMap.size()<<endl;
    // unMap.erase(unMap.begin(),unMap.end());
    // cout<<"after Erase :: "<<unMap.size()<<endl;

    //find
    cout<<(unMap.find("iN")!=unMap.end() ? "found":"not found")<<endl;

    //count
    cout<<"count "<<unMap.count("uS")<<endl;

    //order map
    cout<<"_____Ordermap_____"<<endl;
    map<int,string>omap;
    omap.insert(make_pair(3,"tushar3"));
    omap.insert(make_pair(1,"tushar1"));
    omap.insert(make_pair(2,"tushar2"));

    map<int,string>::iterator oIt = omap.begin();
    while (oIt!=omap.end())
    {
        cout<<(*oIt).first<<" : ";
        cout<<(*oIt).second<<endl;
        oIt++;
    }
    

    return 0;
}