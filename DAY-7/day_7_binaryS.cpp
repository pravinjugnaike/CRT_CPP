// binary search is faster than linear search

#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int target)
{
    int low = 0;
    int high = size-1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
int  main()
{
    int arr[]={10, 20, 30 ,40 ,50, 60, 70};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int target = 50;

    int result = binarySearch(arr, size, target);
    if (result != -1)
    cout<<"element found at index: "<<result<<endl;
    else
    cout<<"element not found"<<endl;
    return 0;
}