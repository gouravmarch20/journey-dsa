#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size(); 
        int maxLength = 0;
        unordered_map<int, int> mpPrefixSum; // Stores prefix sums and their first occurrences
        int sum = 0;

        for (int i = 0; i < n; i++) { 
            sum += nums[i];

            // If the running sum equals k, the subarray from the start to the current index is valid
            if (sum == k) {
                maxLength = max(maxLength, i + 1);
            }

            // Check if there exists a prefix sum such that the subarray equals k
            int rem = sum - k;
            if (mpPrefixSum.find(rem) != mpPrefixSum.end()) {
                int len = i - mpPrefixSum[rem]; // Calculate the length of the subarray
                maxLength = max(maxLength, len);
            }

            // Only store the first occurrence of a prefix sum
            if (mpPrefixSum.find(sum) == mpPrefixSum.end()) {
                mpPrefixSum[sum] = i;
            }
        }

        return maxLength;
    }
};
