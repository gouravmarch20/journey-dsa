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
            for (int j = i; j < n; j++) {
                int xorVal = 0;
                for(int k = i ; k <= j ; k++ ){
                    xorVal = xorVal ^ nums[k];
                }
                if(k == xorVal){
                    res++;
                }
            }
          }
          return res;
    }
};