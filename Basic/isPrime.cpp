#include<iostream>
using namespace std;

//TC -> 0(sqrt(n)) SC -> 0(1)
bool isPrimeOptimize(int n){
    if(n<=1) return false;
    int limit = sqrt(n);
    for(int i=2;i<=limit;i++){
        if(n%i==0) return false;
    }
    return true;
}

//time complexity 0(n)
bool isPrime(int num){
    for(int i=2;i<num;i++){
        if(num % i==0)
            return false;
    }
    return true;
}

int main(){
    // bool isPrimeOrNot = isPrime(7);
    bool isPrimeOrNot = isPrimeOptimize(6); 
    cout<<isPrimeOrNot;
}