#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int>st;
    st.insert(1);
    st.insert(23);
    st.insert(3);
    st.insert(4);
    unordered_set<int>::iterator it = st.begin();
    while (it!=st.end())
    {
        cout<<(*it)<<" ";
        it++;
    }
    cout<<endl;

    //order set
    set<int>orset;
    orset.insert(12);
    orset.insert(1);
    orset.insert(22);
    orset.insert(13);

    set<int>::iterator orit = orset.begin();
    while (orit!=orset.end())
    {
        cout<<*orit<<" ";
        orit++;
    }
    cout<<endl;

    //size
    cout<<"size:: "<<orset.size()<<endl;

    //clear
    // orset.clear();

    cout<<"after clear size:: "<<orset.size()<<endl;

    cout<<"isEmpty :: "<<(orset.empty()?"true":"false")<<endl;
    
    // erase
    // orset.erase(orset.begin(),orset.end());
    // cout<<"isEmpty after erase :: "<<(orset.empty()?"true":"false")<<endl;

    //find
    cout<<"find :: "<<(orset.find(22)!=orset.end()?"found":"not found")<<endl;
    //count
    cout<<"count :: "<<(orset.count(12)?"key found ":"not found ");
    
    return 0;
}