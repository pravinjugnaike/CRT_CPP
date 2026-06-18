#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    i++;
    switch(i--)
    {
        case 1:
        cout<<"case 1 executed";
        break;
        case 2:
        cout<<"case 2 executed";
        break;
        default:
        cout<<"default executed";
    }
    return 0;
}