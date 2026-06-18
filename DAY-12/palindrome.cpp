#include<iostream>
using namespace std;
bool isPalindrome(char str[], int start, int end)
{
    if(start >= end)
    return true;

    if(str[start] != str[end])
    return false;

    return isPalindrome(str, start + 1, end - 1);
}
int main()
{
    char str[]= "MADAM";
    if(isPalindrome(str, 0 ,4))
    cout<<"Palindrome";
    else
    cout<<"Not Palimndrome";
    return 0;
}