// split a list into chunks of given size
// input: list: [1,2,3,4,5,6,7,8] ,chunk size 3
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int chunkSize = 3;

    for (int i = 0; i < n; i += chunkSize)
    {
        cout << "[";

        for (int j = i; j < i + chunkSize && j < n; j++)
        {
            cout << arr[j];

            if (j < i + chunkSize - 1 && j < n - 1)
                cout << ", ";
        }

        cout << "]" << endl;
    }

    return 0;
}