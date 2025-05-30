#include<iostream>
using namespace std;

bool checkSameSign(int x,int y){
    return !((x*y)<0);
}

int main(){
    cout<<checkSameSign(1,2);
    return 0;
}