#include <iostream>
using namespace std;

// leetcode
//conver temp to celsius to kelvin and fahrenheit
void convertTemp(double c)
{
    double k = c + 273.15;
    double f = c * 1.80 + 32.00;
    cout<<"kelvin:-"<<k<<endl;
    cout<<"fahrenheit:-"<<f<<endl;
}

int main()
{
    convertTemp(36.50);
    return 0;
}