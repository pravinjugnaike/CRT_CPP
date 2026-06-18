#include<iostream>
using namespace std;

void reverseString(char str[], int start, int end)
{
    if(start >= end)// base cond = 0>=4
    return;

    char temp = str[start];// temp = H
    str[start] = str[end]; //[0,0,0,0,H]
    str[end] = temp;

    reverseString(str, start + 1, end - 1);
}
int main()
{
    char str[] = "HELLO"; // OELLH
    reverseString(str, 0 ,4);
    cout<<str;
    return 0;

}