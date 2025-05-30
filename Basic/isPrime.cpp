#include<iostream>
using namespace std;

bool isPrime(int num){
    for(int i=2;i<num;i++){
        if(num % i==0)
            return false;
    }
    return true;
}

int main(){
    // int num =1;
    cout<<(isPrime(7)==1 ? "true" : "false")<<endl;
}