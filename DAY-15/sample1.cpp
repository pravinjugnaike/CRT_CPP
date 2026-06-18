//add an element at the begining of list
// use list slicing or the insert() method
// sample input: list : [2,3,4] and element 1

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lst = {2, 3, 4};
    int element = 1;

    lst.insert(lst.begin(), element);

    cout << "List after insertion: ";

    for (int x : lst)
    {
        cout << x << " ";
    }

    return 0;
}