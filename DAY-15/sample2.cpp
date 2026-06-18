// write a function to remove a specific element from a list by its value
// input: list : [1,2,3,4,5] and element : 3

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lst = {1, 2, 3, 4, 5};
    int element = 3;

    lst.remove(element);

    cout << "List after removing " << element << ": ";

    for (int x : lst)
    {
        cout << x << " ";
    }

    return 0;
}