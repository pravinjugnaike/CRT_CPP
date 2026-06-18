// find the non repeating element in the list
// input: [1,2,3,2,1,4,5]
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 2, 1, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    // Count frequencies
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // Find first non-repeating element
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 1)
        {
            cout << "First non-repeating element: " << arr[i];
            return 0;
        }
    }

    cout << "No non-repeating element found.";

    return 0;
}