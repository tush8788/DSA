#include<iostream>
using namespace std;

//TC O(N) SC O(N)
int main(){
    int n, sum=0; // issue is here initlize sum with zero
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        cin >> input[i]; //input[0] every time they add value inside 0 only
    }
    for(int i=0; i<n; i++){
        sum = sum + input[i];
    }
    cout << sum << endl;
    return 0;
}