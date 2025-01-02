#include <iostream>
#include <vector>   
using namespace std;
class Solution {
public:
    int calculateTotalHours(vector<int> &v, int hourly) {
        int totalH = 0;
        int n = v.size();
        
        // Calculate total hours required
        for (int i = 0; i < n; i++) {
            totalH += ceil((double)(v[i]) / (double)(hourly));
        }
        return totalH;
    }
int minimumRateToEatBananas(vector<int> nums, int h) {
 
        int high = *max_element(nums.begin(), nums.end());
        int l = 1;
        int minBananaPerH = INT_MAX;
        while(l <= high){
             int m = (l + high) / 2 ;
             
            int totalH = calculateTotalHours(nums , m);
             if(totalH <= h){
                minBananaPerH = min(minBananaPerH , m);
                //!m1 :: needc to look more smaller so not l = m + 1;
                high = m - 1;
               
            }else{
l = m + 1;
                

            }
        }

 
     return minBananaPerH;
    }
};
