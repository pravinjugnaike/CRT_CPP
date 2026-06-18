#include<iostream>
using namespace std;
int main()
{
    int i = 65;
    char ch = 'B';
    switch(ch, i)
    {
        case 65:
        cout<<"Integer";
        break;
        case 'B':
        cout<<"Char";
        break;
    }
    return 0;
}