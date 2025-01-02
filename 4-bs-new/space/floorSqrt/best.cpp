#include <iostream>
#include <vector>   
using namespace std;
class Solution {
public:
    long long floorSqrt(long long n)  {
      int l = 0 , h = n/2 ;
        long long ans = INT_MIN;
        if(n == 1) return 1;
      while(l <= h){
        long long m = (l+h)/2;
        long long val = m * m ;
        if( val > n){
            h = m -1;
        }else{
            ans = max(ans , m);
            l = m + 1;
        }
      }
      return ans;
    }
};