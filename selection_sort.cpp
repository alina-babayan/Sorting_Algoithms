#include <iostream>

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        int min = i;
        for(int j = i+1; j < n; ++j)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
  
    for(int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}