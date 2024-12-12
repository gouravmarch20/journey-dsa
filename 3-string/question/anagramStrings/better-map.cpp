#include <climits>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
 #include <map>
using namespace std;

class Solution {
   public:
    bool anagramStrings(string& s, string t) {
        // your code goes here
        if (s.length() != t.length()) {
            return false;
        }
        map<char, int> mp1;
        map<char, int> mp2;

        for (int i = 0; i < s.length(); i++) {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }

        for (auto it : mp1) {
            // ! m1 . is the methord
            // char key = it->first();
            // int val = it->second();
            char key = it.first;
            int val = it.second;
            if (mp2[key] != val) {
                return false;
            }
        }
        return true;
    }
};