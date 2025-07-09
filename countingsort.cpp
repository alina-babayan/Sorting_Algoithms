#include <iostream>
#include <vector>
#include <algorithm>

void counting(std::vector<int> & num)
{
    if(num.empty()) return ;
    
    int max = *std::max_element(num.begin(),num.end());
    std::vector<int> count(max+1,0);
    std::vector<int> output(num.size());

    for(int i: num)
    {
        count[i] ++;
    }
    for(int i = 1; i <=max; ++i)
    {
        count[i] += count[i-1];
    }
    for(int i = num.size()-1; i>=0; --i)
    {
        output[count[num[i]]-1]= num[i];
        count[num[i]]--;
    }
   for(int i = 0; i < output.size(); ++i)
   {
         num[i] = output[i];
   }
}