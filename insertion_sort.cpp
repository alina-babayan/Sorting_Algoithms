#include <iostream>

void insertionSort(int arr[], int n)
{
    for(int i = 1; i <= n; ++i) 
    {
        int tmp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > tmp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
    }
    for(int i = 1; i <= n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
    int n = 7;
    int arr[n]={4,9,8,6,2,7,3};
    insertionSort(arr,n);
    return 0;
}