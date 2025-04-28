 
#include <iostream>
 
#include <vector>
 
using namespace std;
class Solution {
   public:
    vector<vector<int>> pascalTriangle(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});

        if (numRows == 1) {
            return res;
        }
        res.push_back({1, 1});
        if (numRows == 2) {
            //! m1
            // return {[1] , [1,1]};
            return res;
        }
        // ! m2:: not []

        for (int i = 2; i < numRows; i++) {
            //! m3
            // vector<int> curr(numRows  , 0) ;
            vector<int> curr(i + 1, 0);
            curr[0] = 1;
            //! m4
            // curr[numRows - 1 ] = 1;
            curr[i] = 1;

            for (int j = 1; j < i; j++) {
                //! m5
                // curr[i] = res[i][j-1] + res[i][j];
                curr[j] = res[i - 1][j - 1] + res[i - 1][j];
            }
            res.push_back(curr);
        }
        return res;
    }
};