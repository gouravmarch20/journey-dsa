#include <iostream>
#include <vector>   
using namespace std;
class Solution {
public:
bool checkBloom(vector <int> & nums , int day ,int m , int noOfAdj){
  int noOfBloom = 0;
  int cnt = 0;
  for(int i = 0 ; i < nums.size() ; i++){
    // if(nums[i] / day <= 1 ){
 if (nums[i] <= day) {
      cnt++;
    }else{
      noOfBloom += (cnt/noOfAdj);
      cnt = 0;
    }
  }
  //!m2::: ending last cnt-  Add remaining flowers as a bouquet
        noOfBloom += (cnt / noOfAdj); 
        return noOfBloom >= m; 
}
  bool possible(vector<int> &nums, int day, int m, int k) {
        int n = nums.size(); 
        
        // Count of flowers bloomed
        int cnt = 0; 
        
        // Count of bouquets formed
        int noOfB = 0; 

        // Count number of bouquets that can be formed
        for (int i = 0; i < n; i++) {
            if (nums[i] <= day) {
                // Increment flower count
                cnt++; 
            } else {
                /* Calculate number of bouquets
                formed with flowers <= day */
                noOfB += (cnt / k);
                
                // Reset flower count
                cnt = 0; 
            }
        }
        // Add remaining flowers as a bouquet
        noOfB += (cnt / k); 

        /* Return true if enough 
        bouquets can be formed */
        return noOfB >= m; 
    }
int roseGarden(int n,vector<int> nums, int k, int m) {

    int low = *min_element(nums.begin() , nums.end());
    int high = *max_element(nums.begin() , nums.end());
    // 
    int ans = -1;
            long long val = m * 1ll * k * 1ll; 

     if (val > n) return -1; 
     while(low <= high){
      int mid = (low + high)/2;

      if(checkBloom(nums , mid ,m , k)){
        ans = mid;
        high = mid -1;
      }else{
        low = mid +1;
      }
    }
  
    return ans;

  }
};