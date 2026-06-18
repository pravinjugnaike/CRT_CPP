#include<iostream>
using namespace std;
int main()
{
    int i = 65;
    switch(i)
    {
        case 65:
        cout<<"integer 65"; 
        break;
        case 'A':
        cout<<"Char 65";
        break;
    }
    return 0;
}
// output: error: duplicate case value because it passes ASCII value internally 