
 #include <iostream>
 
#include <vector>
 #include <map>
using namespace std;

class Solution {
 public:
  vector<int> majorityElement(vector<int>& nums) {
    vector<int> ans;
    unordered_map<int, int> mp;
    for (auto val : nums) {
      mp[val]++;
    }
    int moreThan = nums.size() / 3;

    for (auto it = mp.begin(); it != mp.end(); it++) {

      if (it->second > moreThan) {
        ans.push_back(it->first);//L: how to push
      }
    }
    return ans;
  }
};