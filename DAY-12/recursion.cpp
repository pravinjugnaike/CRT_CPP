//recursion uses stack memory while calling itself again and again
// print no. 1 to N
#include<iostream>
using namespace std;

void printNumbers(int n)
{
    if(n == 0) // base condition
    {
        return;
    }
    printNumbers(n - 1);
    cout<<n<<"";
}
int main()
{
    int n =5;
    printNumbers(5);
    return 0;

}