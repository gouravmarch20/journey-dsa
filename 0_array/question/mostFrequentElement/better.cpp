#include <algorithm>  // For std::min
#include <climits>    // For INT_MAX
#include <iostream>
#include <vector>
using namespace std;

int mostFrequentElement(vector<int> &nums) {
    int maxV = INT_MIN;
    int n = nums.size();
    int freq = INT_MIN;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (maxV < nums[i]) {
            maxV = nums[i];
        }
    }
     vector<int> memo(maxV + 1, 0);
    for (int i = 0; i < n; i++) {
        memo[nums[i]] = memo[nums[i]] + 1;
    }
    

    for (int i = 0; i < memo.size(); i++) {
        if (freq < memo[i]) {
            freq = memo[i];
            ans = i;
        } else if (freq == memo[i]) {
            ans = min(i, ans);
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {3, 5, 3, 6, 9, 3, 5, 3, 1, 8, 3, 5, 4, 3, 9, 10, 6};

    cout << "the ans " << mostFrequentElement(nums);
     return 0;
}
