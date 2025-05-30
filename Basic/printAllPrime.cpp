#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i =2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}

void printPrimeNum(int n){
    for(int i=1;i<=n;i++){
        if(isPrime(i)) cout<<i<<endl;
    }
}

int main(){
    printPrimeNum(10);
    return 0;
}