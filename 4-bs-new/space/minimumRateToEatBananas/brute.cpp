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
 
        int maxE = *max_element(nums.begin(), nums.end());

     int n = nums.size();
    //! m1:: = to maxE
     for(int i = 1 ; i <= maxE ; i++){
          int reqTime = calculateTotalHours(nums, i);
        // ! not only equal to [238,838,453,264] ==> 3 banana per hour to end all 

            if (reqTime <= h) {
                return i;
            }
 
     }
     return -1;
    }
};
