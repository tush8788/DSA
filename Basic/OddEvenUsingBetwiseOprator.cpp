#include <iostream>
using namespace std;

void oddEven(int num)
{
    if(num&1) cout<<"ODD";
    else cout<<"Even";

}

int main()
{
    oddEven(5);
    return 0;
}