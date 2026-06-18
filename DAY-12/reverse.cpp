#include<iostream>
using namespace std;

void printReverse(int n)
{
    if (n == 0)
    return;

    cout<< n << " ";
    printReverse(n -1);
}
int main()
{
    printReverse(5);
    return 0;
}