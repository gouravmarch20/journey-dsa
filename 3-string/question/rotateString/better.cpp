#include <iostream>
#include <vector>
#include <string>
#include <stack>
 using namespace std;


class Solution {
public:
    bool rotateString(string s, string goal) {
       if (s.length() != goal.length()) {
            return false; // If lengths differ, it's impossible for one to be a rotation of the other
        }
        string comp = s + s; // Concatenate s with itself
        return comp.find(goal) != string::npos; 
    }
};