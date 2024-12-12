#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int end = num.length() - 1;
//! & , == operator priority ==> () need to use --> & have low priority so == comparison before bit comparison
        while (end >= 0 && (num[end] & 1) == 0) {
            end--;
        }
        // cout <<end << " th log" << endl;
//       !m2:: in cpp need to define size || else push_back use
        // string res;
        string res(end + 1, ' '); 
        for(int i = 0 ; i <= end ; i++){
            res[i] = num[i];
        }
        return res;
    }
};