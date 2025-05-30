#include<iostream>
using namespace std;

int setOneToGivenPostion(int n,int pos){
    return n | (1<<pos);
}

int main(){
    cout<<setOneToGivenPostion(5,2);
    return 0;
}