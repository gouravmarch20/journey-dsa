#include <climits>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

class Solution {
   public:
    bool anagramStrings(string& s, string t) {
        // your code goes here
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t) return true;
        return false;
    }
};