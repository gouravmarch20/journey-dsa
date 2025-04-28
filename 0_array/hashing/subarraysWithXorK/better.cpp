#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
         int res = 0;
         int n = nums.size();
          for (int i = 0; i < n; i++) {
            int xr = 0;
            for (int j = i; j < n; j++) {
                xr = xr ^ nums[j];
               

                if(k == xr){
                    res++;
                }
            }
          }
          return res;
    }
};