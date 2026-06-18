#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20] = "Pravin";
    char b[20] = {'P','r','a','v','i','n','\0'};
    char c[20];
    cout<<" Enter the string: "<<endl;
    gets(c);
    cout<<" Length of string a = "<<strlen(a) <<endl;
    cout<<" Length of string b = "<<strlen(b) <<endl;
    cout<<" Length of string c = "<<strlen(c) <<endl;
    return 0;
}