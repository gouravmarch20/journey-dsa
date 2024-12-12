#include <iostream>
#include <vector>
#include <climits>
#include <stack>
 

using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i = 0 ; i < s.length() ; i++){
            // ! not needed -1 in substr ==> no of char to delete
            string rotateS = (s.substr(i , s.length() ) + s.substr(0, i));
            cout << rotateS << " "<< endl;
            if(rotateS == goal){
                return true;
            }
        }
        return false;
    }
};