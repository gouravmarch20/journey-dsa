#include <iostream>
#include <vector>   
using namespace std;
class Solution {
public:
  int getMax(vector<int> &nums){
    int maxi = INT_MIN;
    for(auto it : nums){
      maxi = max(it , maxi);
    }
    return maxi;
  }
  int getSum(vector<int> &nums, int m){
      int sum = 0;
        for(auto it : nums){
      //  sum += (it / m) ;
    // !m2 int / int => int ===> but need decimal with divide
            sum += ceil((double)it / (double)m);

    }
    return sum;
  }
  int smallestDivisor(vector<int> &nums, int limit) {
    int l = 1; //!m1 Start from 1, as divisor cannot be 0
     int h =  *max_element(nums.begin() , nums.end());
     int minDivisor = INT_MIN;

     while(l <= h){
      int m = (l + h ) / 2 ;
      int divisorSum = getSum(nums , m );

      if(divisorSum <= limit){
        minDivisor = m;
        
        h = m - 1;
      }else{
        l = m + 1;
      }
       
     }
     return minDivisor;
       
    }
};