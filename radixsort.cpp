#include <iostream>
#include <vector>
#include <algorithm>

void countingsort(std::vector<int>& nums, int exp)
{
    int n = nums.size();
    int count[10] ={0};
    std::vector<int>output(n);
    for(int i = 0; i < n; ++i)
    {
        int digit = (nums[i]/exp)%10;
        count[digit]++;
    }
    for(int i = 1; i < 10; ++i)
    {
        count[i]+=count[i-1];
    }
    for(int i = n-1;i >=0; --i)
    {
        int digit = (nums[i]/exp)%10;
        output[count[digit]-1] = nums[i];
        count[digit]--;
    }
    for(int i = 0; i < n; i++)
    {
        nums[i]= output[i];
    }
}
void radixsort(std::vector<int> & nums)
{
    if(nums.empty()) return;
    int max = *std::max_element(nums.begin(),nums.end());
    int exp = 1;
    while(max/exp > 0)
    {
        countingsort(nums,exp);
        exp *= 10.;
    }
}
