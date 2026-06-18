#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {3 ,5,1,2,4};

    //sort the arry in ascending order
    //std::sort(std::begin(arr), std::end(arr));
    sort(begin(arr), end(arr));
    // print the sorted arry
    for (int i : arr)//i = 5
    {
        cout<< i <<" ";
    }
    return 0;
}