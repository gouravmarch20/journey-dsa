
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int k)  {
         int s = 0 , e = nums.size() -1 ;
        while(s <= e){
            //!m1 ::  s < e  ==>  [-13,-13] ==> need to stop e to go below s ... else no search space
            while(  s < e && nums[s] == nums[e]){
                e--;
            }
         int m = (s + e) / 2;
                
            // cout << s <<" " << e << " " << m << " "<<endl ;
            if(nums[m] == k){
                return true;
            }else if(nums[m] < nums[e]){
                if(   nums[m] < k  && k <= nums[e]){
                     s = m + 1;
                }else{
                             e = m-1;
                }
            }else{
                if( nums[s] <= k && k < nums[m]){
                    e = m -1;
                }else{
                      s = m +1;
                }

            }
        }
        return false;
      
    }
};