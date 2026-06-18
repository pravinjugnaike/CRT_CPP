// write a program to check if one string is rotation of another string.
// input: "waterbottle" and "erbottlewat"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "waterbottle";
    string s2 = "erbottlewat";

    if (s1.length() != s2.length())
    {
        cout << "Not Rotation";
    }
    else
    {
        string temp = s1 + s1;

        if (temp.find(s2) != string::npos)
            cout << "Rotation";
        else
            cout << "Not Rotation";
    }

    return 0;
}