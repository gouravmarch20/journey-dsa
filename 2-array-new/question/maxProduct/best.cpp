
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prefix = 1;
        int suffix = 1;
        int maxi = INT_MIN;

          for (int i = 0; i < n; i++) {
            //! m3:: 
            //  if(nums[i] == 0){   prefix = 1 ; suffix = 1}
            if (prefix == 0) prefix = 1;
            if (suffix == 0) suffix = 1;
            
            prefix *= nums[i];
            suffix *= nums[n - i - 1];
            //!m1,m2
            //  maxi = max(prefix , suffix);
            // maxi = max(prefix , suffix , maxi);
            maxi = max({prefix, suffix, maxi});
        }
        return maxi;
        
    }
};