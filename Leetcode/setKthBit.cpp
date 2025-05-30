#include<iostream>
using namespace std;

//gfg

//menas add 1 to give bit positon like 2
/*
    ex: n=10 kth =2 so and is 14 
*/

int setKthBit(int n,int bit){
    //this one set it given postion inside bit
    int temp = 1 << bit;
    //here | (or) bitwise oprater is use because because i want add 1 at given postion if i use & they will not work
    return n | temp;
}

int main(){
    cout<<setKthBit(10,2)<<endl;
    return 0;
}