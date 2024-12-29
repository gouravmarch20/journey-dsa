
 #include <iostream>
 
#include <vector>
 #include <map>
using namespace std;
class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0 ;
        int el1 = INT_MIN;
        int el2 = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            //!m --> avoid 2  el2 != nums[i]
            if(cnt1 == 0 && el2 != nums[i]){
                cnt1 = 1;
                el1 = nums[i];
            }else if(cnt2 == 0 && el1 != nums[i]){
                cnt2 = 1;
                el2 = nums[i];
            }else if(el1 == nums[i]){
                cnt1++;
            }else if(el2 == nums[i]){
                cnt2++;
            }else{
                cnt1--;
                 cnt2--;
            }
        }

        // 
        int verifyC1 = 0;
        int verifyC2 = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == el1){
                verifyC1++;
            }
             if(nums[i] == el2){
                verifyC2++;
            }
        }
        // 
        int minR = (nums.size() / 3) + 1;
        vector<int>res;
        if(verifyC1 >= minR) res.push_back(el1);
        if(verifyC2 >= minR) res.push_back(el2);
            return res;
    }
};