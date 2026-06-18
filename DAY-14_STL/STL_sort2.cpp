#include<iostream>
#include<algorithm>
using namespace std;

void show(int arr[], int array_size)
{
    for(int i= 0; i < array_size; ++i)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int a[]= {1,5,8,9,6,7,3,4,2,0};
    //size of the array
    int asize = sizeof(a) / sizeof(a[0]);
    cout<<"the array before sorting is: \n";
    // print array
    show(a, asize);
    // sort the array
    sort(a, a + asize);
    // sort(a, a + asize, greater<int>());
    cout<<"\n\nThe array after sorting is: \n";
    // print the array after sorting
    show(a, asize);
    return 0;
}