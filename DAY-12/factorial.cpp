#include<iostream>
using namespace std;

int factorial(int n) //1
{
    if (n == 0 || n == 1)
    return 1;

    return n * factorial(n - 1); //5*4*3*2*1 = 120 
}
int main()
{
    cout<<factorial(5);
    return 0;
}