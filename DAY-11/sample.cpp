#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;

    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }

    cout << str;

    return 0;
}