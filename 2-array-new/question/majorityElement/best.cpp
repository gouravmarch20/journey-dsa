
 #include <iostream>
 
#include <vector>
 #include <map>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majE = nums[0];
        int cnt = 1 ;
        for(int i = 1 ; i < nums.size() ; i++){
             if(cnt == 0){
                majE = nums[i];
            }
            if(majE == nums[i]){
                cnt++;
            }else{
                cnt--;
            }
            
        }
        return majE;
    }
};