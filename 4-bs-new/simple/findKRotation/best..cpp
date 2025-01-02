
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int h = nums.size() - 1;
        int l = 0;
        int index = -1 , ans = INT_MAX ;
        
        while(l <= h){
              int m = (l + h)/2;
              if(nums[l] < nums[m] && nums[m] < nums[h]){
                if (nums[l] < ans) {
                index = l;
                break;
              }
            }
            if (nums[l] <= nums[m]) {
              if (nums[l] < ans) {
                    index = l;
                    ans = nums[l];
                }
                 l = m + 1;

            }else{
             if (nums[m] < ans) {
                    index = m;
                    ans = nums[m];
                }
                h = m -1;
            }
        }
        return index;
    }
};