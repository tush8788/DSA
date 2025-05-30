#include<iostream>
using namespace std;

int setBitCount(int num){
    int count = 0;
    while (num)
    {
        num=num&(num-1);
        count++;
    }

    return count;
    
}


int main(){
    cout<<"count of setbit :- "<<setBitCount(0)<<endl;
    return 0;
}