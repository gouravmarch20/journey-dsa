
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
   public:
    int mergeArray(vector<int>& nums, int l, int m, int h) {
        int cnt = 0;
        int s = l;
        int e = m + 1;
        vector<int> ans;
        while (s <= m && e <= h) {
            if (nums[s] <= nums[e]) {
                ans.push_back(nums[s]);
                s++;
            } else {
                // cnt += 1; //! m1  Count inversions (all elements from nums[s]
                // to nums[m])

                cnt += (m - s + 1);
                ans.push_back(nums[e]);
                e++;
            }
        }

        while (s <= m) {
            ans.push_back(nums[s]);
            s++;
        }
        while (e <= h) {
            ans.push_back(nums[e]);
            e++;
        }

        for (int i = 0; i < ans.size(); i++) {
            nums[l + i] = ans[i];
        }
        return cnt;
    }
    int mergeSort(vector<int>& nums, int s, int e) {
        if (s >= e) return 0;

        int m = (s + e) / 2;
        int cnt = 0;
        cnt += mergeSort(nums, s, m);
        cnt += mergeSort(nums, m + 1, e);
        cnt += mergeArray(nums, s, m, e);
        return cnt;
    }
    long long int numberOfInversions(vector<int> nums) {
        int n = nums.size();
        return mergeSort(nums, 0, n - 1);
    }
};