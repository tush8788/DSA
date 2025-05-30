#include<iostream>
using namespace std;

//using + -
void swapValueUsingPlusMinus(int val1,int val2){
    val1 = val1+val2;
    val2 = val1-val2;
    val1 = val1-val2;

    cout<<"using + - :- "<<val1<<" "<<val2<<endl;
}

//using ^ (XOR)
void swapValueUsingXOR(int val1,int val2){
    val1=val1^val2;
    val2=val1^val2;
    val1=val1^val2;

    cout<<"using XOR :- "<<val1<<" "<<val2<<endl;
}

//using ^ (XOR)
void swapValueUsingTemp(int val1,int val2){
    int temp = val1;
    val1= val2;
    val2=temp;

    cout<<"using TEMP :- "<<val1<<" "<<val2<<endl;
}

//using swap method
void swapValueUsingSwap(int val1,int val2){
    swap(val1,val2);

    cout<<"using swap :- "<<val1<<" "<<val2<<endl;
}

int main(){
    swapValueUsingPlusMinus(3,5);
    swapValueUsingXOR(3,5);
    swapValueUsingTemp(3,5);
    swapValueUsingSwap(3,5);
    return 0;
}