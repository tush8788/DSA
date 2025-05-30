#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(int num)
{
    int i = 0, result = 0;
    while (num > 0)
    {
        int temp = num % 10; // base 10
        result = temp * pow(2, i++) + result;
        num = num / 10;
    }

    return result;
}

int main()
{
    cout << binaryToDecimal(101);
    return 0;
}