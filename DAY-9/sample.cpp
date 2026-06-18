#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char username[50];
    char password[50];

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if(strlen(username) == strlen(password))
        cout << "Login Successfully";
    else
        cout << "Invalid Credential";

    return 0;
}