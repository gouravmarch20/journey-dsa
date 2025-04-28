
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
   public:
    long long int numberOfInversions(vector<int> nums) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};