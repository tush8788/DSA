#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinary(int num)
{

    int i = 0, ans = 0;
    while (num > 0)
    {
        int temp = num % 2; // base 2
        ans = temp * pow(10,i++)+ans;
        num=num/2;
    }
    return ans;
}

int main()
{
    cout<<decimalToBinary(5)<<endl;
    return 0;
}