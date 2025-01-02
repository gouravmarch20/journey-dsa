
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;

            // Check if the middle element is the target
            if (nums[m] == target) {
                return true;
            }

            // Handle duplicates: shrink the search space deterministically
            while (s < m && nums[s] == nums[m]) s++;
            while (e > m && nums[e] == nums[m]) e--;

            // Determine which side is sorted
            if (nums[s] <= nums[m]) { // Left side is sorted
                if (nums[s] <= target && target < nums[m]) {
                    e = m - 1; // Target is in the left sorted part
                } else {
                    s = m + 1; // Target is in the right part
                }
            } else { // Right side is sorted
                if (nums[m] < target && target <= nums[e]) {
                    s = m + 1; // Target is in the right sorted part
                } else {
                    e = m - 1; // Target is in the left part
                }
            }
        }
        return false;
    }
};
