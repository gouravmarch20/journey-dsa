
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    bool linearSearch(vector<int>& a, int num) {
        int n = a.size(); 
        // Traverse through the array 
        for (int i = 0; i < n; i++) {
            if (a[i] == num)
                return true;
        }
        return false;
    }
    int longestConsecutive(vector<int>& nums) {
           if (nums.size() == 0) {
            return 0;
        }
        int n = nums.size();
        int longest = 1; 
        for (int i = 0; i < n; i++) {
               int x = nums[i]; 
                int cnt = 1; 
           while (linearSearch(nums, x + 1) == true) {
                //!:: unable to think Move to the next number in the sequence
                x += 1; 
                cnt += 1; 
            }
            longest = max(longest, cnt);

        }
        return longest;

    }
};