#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    switch(num++ ==5)
    {
        case 1:
        cout<<"true";
        break;
        case 0:
        cout<<"False";
        break;
        default:
        cout<<"inside default";
    }
    return 0;
}