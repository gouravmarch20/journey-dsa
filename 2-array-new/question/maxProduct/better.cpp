
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
   public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            int prod = nums[i];
            // !m1 ==> [-3,0,1,-2] not fail
            ans = max(prod, ans);

            for (int j = i + 1; j < n; j++) {
                prod *= nums[j];
                // !m2 ==> [2,3,-2,4] --> [2,3] alone for max product
                ans = max(prod, ans);
            }
            ans = max(prod, ans);
        }
        return ans;
    }
};