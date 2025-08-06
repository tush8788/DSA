#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    //push
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<"size :: "<<st.size()<<endl;
    //pop
    st.pop();
    //top
    cout<<"top "<<st.top()<<endl;
    //size
    cout<<"size :: "<<st.size()<<endl;
    //empty
    cout<<"empty :: "<<(st.empty()?"True":"False")<<endl;
    //swap
    stack<int>st1;
    st1.push(100);
    st1.push(200);
    st.swap(st1);
    cout<<"top st :: "<<st.top()<<endl;
    cout<<"top st1 :: "<<st1.top()<<endl;
    return 0;
}