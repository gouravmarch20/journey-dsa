
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
   public:
    int search(vector<int> &nums, int k) {
        int s = 0, e = nums.size() - 1;
        while (s <= e) {
            int m = (s + e) / 2;
            // cout << s <<" " << e << " " << m << " "<<endl ;
            if (nums[m] == k) {
                return m;
            } else if (nums[m] < nums[e]) {
                //!m1 :: k < nums[e] ==> equal to sign needed
                if (nums[m] < k && k <= nums[e]) {
                    s = m + 1;
                } else {
                    e = m - 1;
                }
            } else {
                //!m2 :: nums[s] < k ==> equal to sign needed

                if (nums[s] <= k && k < nums[m]) {
                    e = m - 1;
                } else {
                    s = m + 1;
                }
            }
        }
        return -1;
    }
};