#include <iostream>

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n-i-1; ++j)
        {
            if(arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = tmp;
            }
        }
    }
  
    for(int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


