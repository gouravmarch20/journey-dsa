#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

class Solution{	
public:		
    string largeOddNum(string& s){
        //your code goes here
        int start = 0;
        int end = s.length() - 1;
         while (end >= 0 && (s[end] & 1) == 0) {
            end--;
        }
        while(s[start] == '0'){
            start++;
        }
     
        string res  ; 
        for(int i = start ; i <= end ; i++){
             res.push_back(s[i]);
        }
        return res;
    }
};