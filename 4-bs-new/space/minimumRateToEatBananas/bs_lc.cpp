#include <iostream>
#include <vector>   
using namespace std;
class Solution {
public:
    // Function to calculate total hours needed for a given speed
    //!m2: return type 
    long long calculateTotalHours(vector<int> &piles, int hourly) {
        // !m1:: long long 10^10 range long sum 
        long long totalH = 0;  
        for (int i = 0; i < piles.size(); i++) {
        
                               totalH+=ceil( double(piles[i])/double(hourly));

        }
        
        return totalH;   
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;  // Minimum possible eating speed
        int high = *max_element(piles.begin(), piles.end());  // Maximum possible eating speed
        int minBananaPerH = high;  // Start with the largest possible speed as the result

        // Binary search for the minimum speed
        while (l <= high) {
            int m=(l+high)/2;

            long totalH = calculateTotalHours(piles, m);
            if (totalH <= h) {
                // If we can eat all bananas in <= h hours, try a smaller speed
                minBananaPerH = m;
                high = m - 1;
            } else {
                // If we can't eat all bananas in <= h hours, increase the speed
                l = m + 1;
            }
        }

        return minBananaPerH;
    }
};
