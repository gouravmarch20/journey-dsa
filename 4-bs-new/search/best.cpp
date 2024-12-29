
 #include <iostream>
 
#include <vector>
 #include <map>
using namespace std;
class Solution{
public:
    int search(vector<int> &nums, int target){
        int s = 0 ; 
        int e = nums.size() - 1 ;
        while(s <= e){
            int m =( s + e) / 2 ;
            if(nums[m] < target){
                s++;
            }else if(nums[m] > target){
                e--;
            }else{
                return m;
            }
        }
        return -1;
    }
};