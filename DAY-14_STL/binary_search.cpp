#include<iostream>
#include<algorithm>
using namespace std;

void show(int a[], int arraysize)
{
    for(int i = 0; i < arraysize;i++)
    {
        cout<< a[i]<<" ";
    }
}
int main()
{
    int a[] = {1,5,8,9,6,7,3,4,2,0};
    int asize = sizeof(a) / sizeof(a[0]);
    cout<<"\n Original array is: \n";
    show(a, asize); //1
    // lets say we want to search for 2 in the array so, we first sort the array
    sort(a, a+asize);
    // now we do the binary search
    if (binary_search(a, a+10, 2))
    cout<<"\n element found in the array";
    else
    cout<<"\n element not found in the array";
    return 0;
}