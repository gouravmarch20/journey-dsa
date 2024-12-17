#include <iostream>
#include <vector>
#include <map> 
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }
        
        int maxFreq = 0;
        int ans = INT_MAX;
        for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
            int key = it->first;
            int value = it->second;
            if (value > maxFreq) {
                maxFreq = value;
                ans = key;
            } else if (value == maxFreq) {
                ans = min(ans, key);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 2, 2, 1, 3, 3};
    cout << "Most Frequent Element: " << sol.mostFrequentElement(nums) << endl;
    return 0;
}
