#include <iostream>
#include <set>
using namespace std;

int main() {
    int l1[] = {1, 2, 3};
    int l2[] = {3, 4, 5};

    set<int> s;

    for (int x : l1)
        s.insert(x);

    for (int x : l2)
        s.insert(x);

    cout << "Union: ";
    for (int x : s)
        cout << x << " ";

    return 0;
}