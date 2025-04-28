
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
   public:
    int maxProduct(vector<int>& nums) {
        // Initialize result to minimum possible integer
        int result = INT_MIN;

        // Iterate through all subarrays
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int prod = 1;

                // Calculate product of subarray
                for (int k = i; k <= j; k++) {
                    prod *= nums[k];
                }

                // Update the result with maximum product found
                result = max(result, prod);
            }
        }

        // Return the maximum product found
        return result;
    }
};

