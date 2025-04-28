#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
 
        int n = nums.size();
        set<vector<int> > st;
        for(int i = 0 ; i <  n ; i++){
             for(int j = i+1 ; j <  n ; j++){
                set<int> hash ;
                 for(int k = j+1 ; k <  n ; k++){
                    //m1 :: (sai wrap else - diff ans)
                    // int fourth = target - nums[i] + nums[j] + nums[k];
                    int fourth = target -(nums[i] + nums[j] + nums[k]);

                    if(hash.find(fourth) != hash.end()){
                        vector<int> curr = {nums[i] , nums[j] , nums[k] , fourth};
                        sort(curr.begin() , curr.end());
                        st.insert(curr);
                    }
                    hash.insert(nums[k]);
                 }
             }
        }

          vector<vector<int> > res(st.begin() , st.end());
 
          return res;
    }
};