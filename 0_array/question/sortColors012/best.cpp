#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int lowP = 0;
        int midP = 0 ; 
        int highP = nums.size() - 1 ;
        // for(int i = 0 ; i < nums.size() ; i++){
        //     if(nums[i] == 0){
        //         swap(nums[lowP] , nums[i]);
        //         lowP++;
        //     }else if(nums[i] == 2){
        //         swap(nums[highP] , nums[i]);
        //         highP--;
        //     }else{

        //     }
        // }
        //! m2 :: equal to sign missed
        while(midP <= highP){
            if(nums[midP] == 0){
                swap(nums[lowP] , nums[midP]);
                lowP++;
                midP++;
            }else if(nums[midP] == 1){
                swap(nums[lowP] , nums[midP]);
                midP++;
            }else{
                 swap(nums[highP] , nums[midP]);
                 highP--;
                //  ! m1 :: no gareed what is highP need to do test
                //  midP++;
            }
        }
    }
};