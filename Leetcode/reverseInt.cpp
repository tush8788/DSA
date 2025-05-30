#include <iostream>
using namespace std;

// leetcode
int reverseInt(int n)
{
    int reverseValue = 0;
    bool isNeg = false;
    // if value is less then and equal to int min
    if (n <= INT_MIN)
        return 0;

    // if value is negative convert int postive
    if (n < 0)
    {
        isNeg = true;
        n = -n;
    }

    while (n > 0)
    {
        // value is greter then int capacity
        if (n > INT_MAX / 10)
        {
            return 0;
        }
        int temp = n % 10;
        reverseValue = reverseValue * 10 + temp;
        n = n / 10;
    }

    return isNeg ? -reverseValue : reverseValue;
}

int main()
{
    cout << reverseInt(-1234) << endl;
    return 0;
}