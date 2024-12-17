#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> res;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        //!m ::: without sort pushing
                        // s.insert( { nums[i] , nums[j] , nums[k]} );
                        vector<int> triplet = {nums[i], nums[j], nums[k]};
                        // sort(triplet.begin(), triplet.end());
                        s.insert(triplet);
                    }
                }
            }
        }

        for (auto it : s) {
            res.push_back(it);
        }
        return res;
    }
};