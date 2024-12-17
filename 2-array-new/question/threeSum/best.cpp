#include <iostream>
#include <vector>
#include <set>
 
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
             sort(nums.begin(), nums.end());

          vector<vector<int>> res;
          for(int i = 0 ; i < nums.size() ; i++){
             //!m2::  Skip duplicate values for the first number
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int j = nums.size() - 1 ;
            int k = i + 1 ;
            while (k < j) {
                int target = nums[i] + nums[j] + nums[k];

                if(target > 0 ){
                    j--;
                }else if(target < 0){
                    k++;
                }else{
                            res.push_back({nums[i], nums[k], nums[j]});
                       while(k < nums.size() - 1 && nums[k] == nums[k+1]){
                        k++;
                      }
                     while(j > 0 && nums[j] == nums[j-1]){
                        j--;
                      }
 
                    k++;
                    j--;
                }
                }
          }
     

        return res;
    }
};

      