#include <iostream>

template <typename I, typename T>
I lower_bound(I first, I last, T value)
{
    while( first != last)
    {
        I mid = first + (last - first)/2;
        if(*mid < value)
        {
            first = mid + 1;
        }
        else{
            last = mid;
        }
    }
    return first;
}
