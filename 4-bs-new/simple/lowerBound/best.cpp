
 #include <iostream>
 
#include <vector>
 #include <map>
 using namespace std;

class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int s = 0 ; 
        int n = nums.size();
        int e = n - 1;
        int ans = n ;

        while(s <= e){
            int m = (s + e) /2 ;
            if(nums[m] < x){
                s = m + 1;
            }else{
                ans = m;
                e = m - 1;
            }
        }
        return  ans;
    }
};