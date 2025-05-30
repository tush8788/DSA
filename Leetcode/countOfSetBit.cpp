#include <iostream>
using namespace std;

// setBit mean 1 exist in binary
int countOfSetBit(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n & 1)
            count++;
        n=n>>1;
    }

    return count;
}

int main()
{
    cout<<countOfSetBit(10);
    return 0;
}