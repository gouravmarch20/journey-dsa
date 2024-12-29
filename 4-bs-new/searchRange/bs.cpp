
 #include <iostream>
 
#include <vector>
 #include <map>
using namespace std;
class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int s = 0 ; int n = nums.size(); int e = n - 1; int startI = -1; 

        while(s <= e){
            int m = (s+e)/2;
            if(nums[m] == target){
                startI = m;
                e = m - 1;
            }else if(nums[m] < target){
                s = m + 1;
            }else{
                e = m - 1;
            }
        }
         s = 0 ; n = nums.size();  e = n - 1; int endI = -1; 


        while(s <= e){
            int m = (s+e)/2;
            if(nums[m] == target){
                endI = m;
                s = m + 1;
            }else if(nums[m] < target){
                s = m + 1;
            }else{
                e = m - 1;
            }
        }
        return {startI ,endI};
    }
};