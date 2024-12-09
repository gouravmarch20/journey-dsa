#include <algorithm>  // For std::min
#include <climits>    // For INT_MAX
#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        int maxV = INT_MIN;
        int minV = INT_MAX;
        int maxFreq = 0;
        int minFreq = INT_MAX;
        int n = nums.size();

        int arrayMaxValue = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (arrayMaxValue < nums[i]) {
                arrayMaxValue = nums[i];
            }
        }
         vector<int> memo(arrayMaxValue + 1, 0);

        for (int i = 0; i < n; i++) {
            memo[nums[i]] = memo[nums[i]] + 1;
         }

         

        for (int i = 0; i < memo.size(); i++) {
            if (maxFreq < memo[i]) {
                maxFreq = memo[i];
                maxV = i;
            }
            if (minFreq > memo[i] && memo[i] != 0) {
                cout << "itachi" << memo[i] << endl;
                minFreq = memo[i];
                minV = i;
            }
        }
         // return maxFreq + minFreq == INT_MAX ? 0 : minFreq ;
         return maxFreq + minFreq;
    }
};
int main() {
    Solution solution;
    vector<int> nums = {1, 2, 2, 3, 3, 3};
    cout << "Most frequent element: "
         << solution.sumHighestAndLowestFrequency(nums) << endl;
    return 0;
}
