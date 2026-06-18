#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[200];
    int count = 0, i;
    cout<<" Enter the string :"<<endl;
    cin.getline(s, 200);
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
        count++;
    }
    cout<<"Number of words in given string are: "<<count<<endl;
    cout<< count+1;
    return 0;
}