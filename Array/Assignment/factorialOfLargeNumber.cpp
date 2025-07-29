#include<iostream>
using namespace std;

void printVector(vector<int>arr){
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

vector<int>factorialOfLargeNum(int num){
    vector<int>ans;
    ans.push_back(1);
    int carry=0;
    for(int i=2;i<=num;i++){
        // cout<<"print ";
        for(int j=0;j<(int)ans.size();j++){
            int temp = (ans[j]*i)+carry;
            ans[j]= temp%10;
            carry=temp/10;
        }
        //because in large num carry come in two or digit like 10 or 23 thats way insted of if we use while
        while (carry){
            ans.push_back(carry%10);
            carry = carry/10;
        }     
        // if(carry){
        //     ans.push_back(carry);
        //     carry=0;
        // }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int fact=7;
    vector<int> ans = factorialOfLargeNum(fact);
    printVector(ans);
    return 0;
}