#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3, -2, 7, -1, 0, 5, -4};
    int size = sizeof(arr)/sizeof(arr[0]);

    int pos = 0, neg = 0, zero = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
        else
            zero++;
    }

    cout << "Positive = " << pos << endl;
    cout << "Negative = " << neg << endl;
    cout << "Zero = " << zero << endl;

    return 0;
}