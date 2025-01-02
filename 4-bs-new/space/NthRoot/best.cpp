#include <iostream>
#include <vector>   
using namespace std;
class Solution {
public:
    int func(int mid, int n, int m) {
        long long ans = 1;
        for (int i = 1; i <= n; i++) {
            ans *= mid;
            if (ans > m) return 2;
        }
        if (ans == m) return 1;
        return 0;
    }
  int NthRoot(int N, int M) {
    int low = 1 , high = M ;
    while(low <= high){
      int mid = (low + high)/2;
      int midN = func(mid , N , M);
        if (midN == 1) {
                // Return mid if mid^N== M
                return mid;
            } 
            else if (midN == 0) {
                // Move to the right half if mid^N < M
                low = mid + 1;
            } 
            else {
                // Move to the left half if mid^N > M
                high = mid - 1;
            }
    }
               return -1;

    }
};
