#include<iostream>
using namespace std;
int main()
{
    char ch = 65;
    switch(ch)
    {
        case 'A':
        cout<<"Apple";
        break;

        case 'B':
        cout<<"Bing";
        break;

        default:
        cout<<"Bye";
    }
    return 0;
}