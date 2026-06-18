#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[50], str2[50];
    cout<<" Enter the first string: "<<endl;
    cin>> str1;
    cout<<" Enter the second string: "<<endl;
    cin>> str2;
    if(strcmp(str1, str2) == 0)
    {
        cout<<" Strings are equal\n"<<endl;
    }
    else
    {
        cout<<" Strings are not equal\n"<<endl;
    }
    return 0;
}