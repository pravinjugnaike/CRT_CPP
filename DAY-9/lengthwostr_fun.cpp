//Find length of string without using string function using pointer
#include<iostream>
#include<string.h>
using namespace std;
void mystrlen(char *);
int main()
{
    char str1[20];
    cout<<"Enter any string: "<<endl;
    gets(str1);
    mystrlen(str1);
    return 0;
}
void mystrlen(char *s1)
{
    int length = 0;
    while(*s1!='\n')
    {
        length++;
        s1++;
    }
    cout<<"Length is:"<<length<<endl;
}