#include<iostream>
using namespace std;
int main()
{
    int num=0;
    if(num++,num--,++num)
    switch(num)
    {
        case 1:
        cout<<"case 1";
        break;
        case 2:
        cout<<"case 2";
        break;
        default:
        cout<<"default block";
        break;
    }
    return 0;
}