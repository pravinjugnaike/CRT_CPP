#include<iostream>
using namespace std;
int main()
{
    switch(3/2)
    {
        case 1:
        cout<<"case 1 executed"<<endl;
        case 2:
        cout<<"case 2 executed";
        break;
        default:
        cout<<"default executed";
    }
    return 0;
}