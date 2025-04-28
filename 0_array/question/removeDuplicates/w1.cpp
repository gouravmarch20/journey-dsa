#include <climits>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
 #include <map>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            nums[j] = nums[i];
            j++;
            while(i <  n  && nums[i] == nums[i+1] ){
                i++;
            }
        }
        return j;
    }
};