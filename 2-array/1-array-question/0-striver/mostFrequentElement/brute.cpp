#include <algorithm>  // For std::min
#include <climits>    // For INT_MAX
#include <iostream>
#include <vector>
using namespace std;
class Solution {
   public:
    int mostFrequentElement(vector<int> &nums) {
        int n = nums.size();
        int maxFeq = INT_MIN;
        int maxV = nums[0];
        vector<bool> visited(n, false);
        for (int i = 0; i < n; i++) {
            if (visited[i] == true) continue;
            int cnt = 0;
            for (int j = i; j < n; j++) {
                if (nums[i] == nums[j]) {
                    cnt++;
                }
            }
            if (maxFeq == cnt && maxV >= nums[i]) {
                maxV = nums[i];
            } else if (maxFeq < cnt) {
                maxV = nums[i];
                maxFeq = cnt;
            }
        }
        return maxV;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 3, 2, 1, 3, 1, 2};
    cout << "Most frequent element: " << solution.mostFrequentElement(nums)
         << endl;
    return 0;
}
