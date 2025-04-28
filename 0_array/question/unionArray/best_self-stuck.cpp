
#include <climits>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
 #include <map>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int minSize = min(n , m );
        int maxSize = max(n , m );
        vector <int> res;
        // 
        int valFPointer = 0 ;
        int valSPointer = 0;

        while(valFPointer < n && valSPointer < m){
            int valFirst = nums1[valFPointer];
            int valSecond = nums2[valSPointer];

 
            if(valFirst < valSecond){
                res.push_back(valFirst);
                while(valFPointer < n - 1 && nums1[valFPointer] == nums1[valFPointer+1]){
                    valFPointer++;
                }
                  valFPointer++;
            }else if(valFirst > valSecond){
                res.push_back(valSecond);
                while(valSPointer < m - 1 && nums2[valSPointer] == nums2[valSPointer+1]){
                    valSPointer++;
                }
                  valSPointer++;
            }else{
                  res.push_back(valSecond);
                while(valFPointer < n - 1 && nums1[valFPointer] == nums1[valFPointer+1]){
                    valFPointer++;
                }
            
                 while(valSPointer < m - 1 && nums2[valSPointer] == nums2[valSPointer+1]){
                    valSPointer++;
                }
                    valFPointer++;
                    valSPointer++;

            }



        }

             while(valFPointer < maxSize || valSPointer < maxSize   ){
                if(valFPointer < n){
                     res.push_back(nums1[valFPointer]);

                      while(valFPointer < n - 1 && nums1[valFPointer] == nums1[valFPointer+1]){
                         valFPointer++;
                         }
                 }

                   if(valSPointer < m){
                     res.push_back(nums2[valSPointer]);

                      while(valSPointer < m - 1 && nums2[valSPointer] == nums2[valSPointer+1]){
                         valSPointer++;
                         }
                 }
                                        valFPointer++;
                                        valSPointer++;

            }  

                
        return res; 
    }
};