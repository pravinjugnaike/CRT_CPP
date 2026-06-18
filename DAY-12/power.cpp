#include <iostream>
using namespace std;

int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    return base * power(base, exp - 1); //2*2*2*2*2 = 32
}
int main()
{
    cout<<power(2, 5);
    return 0;
}