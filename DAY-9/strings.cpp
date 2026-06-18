#include<iostream>
using namespace std;
int main()
{
    char name[10], ch;
    int i = 0;
    cout<<" Enter Name: "<<endl;
    while(i<10)
    {
        ch = getchar();
        name[i] = ch;
        i++;
    }
    name[i] = '\0';
    cout<<" Name: "<< name <<endl;
    return 0;
}