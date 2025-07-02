#include <iostream>
#include <vector>

void Merge(std::vector<int>& arr, int s, int mid, int e)
{
    std::vector<int> tmp;
    int i = s;
    int j = mid + 1;
    while(i <= mid && j<= e)
    {
        if(arr[i] <= arr[j])
        {
            tmp.push_back(arr[i++]);
        }
        else
        {
            tmp.push_back(arr[j++]);
        }
    }
    while(i <= mid)
    {
        tmp.push_back(arr[i++]);
    }
    while(j <= e)
    {
        tmp.push_back(arr[j++]);
    }
    for(int i = 0; i < tmp.size(); ++i)
    {
        arr[s + i] = tmp[i];
    }

}

void mergesort(std::vector<int>&arr, int s, int e)
{
    if(s >= e) return;
    int mid = s + (e - s)/2;
    mergesort(arr, s, mid);
    mergesort(arr, mid+1, e);
    Merge(arr, s, mid, e);
}

int main() {
    std::vector<int> arr = {5, 2, 8, 1, 3};

    mergesort(arr, 0, arr.size() - 1);

    std::cout << "Sorted array: ";
    for (int val : arr)
        std::cout << val << " ";
    std::cout << "\n";

    return 0;
}