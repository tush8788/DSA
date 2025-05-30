#include<iostream>
using namespace std;

int main(){
    int n = 0,val;
    int v = (-5)>>1;
    cout<<v;
    do{
        cin>>val;
        n=n*10+val;
        cout<<"NUmber is:-"<<n<<endl;
    }while(val);
}