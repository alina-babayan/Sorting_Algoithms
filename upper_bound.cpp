#include <iostream>

int upper_bound(int arr[], int n, int val)
{
    int l = 0;
    int r = n;
    while(l < r)
    {
        int mid = l + (r-l)/2;
        if(arr[mid] <= val)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    return l;
}
