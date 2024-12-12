#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			//! m1 :: edge case
			if (str.empty()) return "";  

			int i = 0;
			string ans;

			while(true){
				// !m2 :: () require in length
				if (str[0].length() <= i) {
						return ans;
				}
				char curr = str[0][i];
				// !m3:: array have not length methord

			    for (int j = 1; j < str.size(); j++) {

					string s = str[j];
					if(s.length() <= i){
						return ans;
					}else if(curr != s[i]){
						return ans;
					}
				  // if (str[j].length() <= i || curr != str[j][i]) {

				}
				i++;
				ans.push_back(curr);
			}
		}
};