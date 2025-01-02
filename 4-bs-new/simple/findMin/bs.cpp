
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    int findMin(vector<int> &arr)  {
        int s = 0 , e = arr.size() - 1 ;
        int smallest = INT_MAX;
      while(s <= e){    
        int m = (s+e)/2;
        
        if(arr[m] <= arr[e]){
            smallest = min(smallest , arr[m]);
            e = m - 1;
        }else {
            s = m +1;
        }

      }
      return smallest;
    }
};