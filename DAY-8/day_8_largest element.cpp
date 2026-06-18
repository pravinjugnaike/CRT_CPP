#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5, 9, 2, 7, 3, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest Element = " << largest << endl;

    return 0;
}