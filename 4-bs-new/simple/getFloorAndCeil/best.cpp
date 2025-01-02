
 #include <iostream>
 
#include <vector>
 #include <map>
using namespace std;
class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int s = 0 ; int n = nums.size(); int e = n -1 ; int floor = -1;

        while(s <= e){
            int m = (s + e) / 2 ;
            if(nums[m] == x){
                floor = nums[m];
                break;
            }else if(nums[m] < x){
                floor = nums[m];
                s = m + 1;
            }else {
                e = m - 1;
            }
        }
        s = 0 ;  n = nums.size();  e = n -1 ; int ceil = -1;

         while(s <= e){
            int m = (s + e) / 2 ;
            if(nums[m] == x){
                 ceil = nums[m];
                break;
            }else if(nums[m] < x){
               
                s = m + 1;
            }else {
                  ceil = nums[m];
                e = m - 1;
            }
        }
        return {floor , ceil};
    }
};