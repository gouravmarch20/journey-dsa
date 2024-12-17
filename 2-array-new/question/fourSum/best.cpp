#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        sort(nums.begin() , nums.end());

        int n = nums.size();
        set<vector<int> > st;
        for(int i = 0 ; i <  n ; i++){
             for(int j = i+1 ; j <  n ; j++){
                int k = j + 1;
                int l = n - 1;
                while(k < l){
                    int found =  target - (nums[i] + nums[j] + nums[k] + nums[l]);
                    if(found > 0){
                            k++;
                    }else if(found < 0){
                           l--;
                    }else{
                        st.insert({nums[i] , nums[j] , nums[k] , nums[l]});
                        while(l>0 && nums[l] == nums[l-1]){
                            l--;
                        }
                        while(k < n - 1 && nums[k] == nums[k+1]){
                            k++;
                        }
                        k++;
                        l--;
                    }
                }
             }
                
        }

          vector<vector<int> > res(st.begin() , st.end());
 
          return res;
    }
};