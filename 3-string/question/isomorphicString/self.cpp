#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <map>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> sTmap;
          map<char, char> tSmap;
        for(int i = 0 ; i < s.length() ; i++){
            if(sTmap[s[i]] && sTmap[s[i]] != t[i]  ){
                 return false;
            }
             if(tSmap[t[i]] && tSmap[t[i]] != s[i]  ){
                 return false;
            }
            sTmap[s[i]] = t[i];
            tSmap[t[i]] = s[i];

        }  
        
        return true ;
    }
};