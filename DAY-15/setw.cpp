#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a = 200;
    cout<<setw(8)<<a<<endl;
    cout<<setw(5)<<a<<setw(6)<<a<<endl;
    cout<<setw(3)<<a<<setw(10)<<a<<endl;
    return 0;
}