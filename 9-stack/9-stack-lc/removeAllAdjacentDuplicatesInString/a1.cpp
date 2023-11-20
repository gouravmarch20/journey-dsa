#include <iostream>
using namespace std;
//  R: FORGOT PUSH_BACK METHORD IN CPP




 string first(string s) {
        string ans = "";
        for(char c : s){
          if(ans.size() > 0 && ans.back() == c){
            ans.pop_back();
          }else{
            ans.push_back(c);
          }
        }
        return ans;
    }
string clean(string s) {
  string ans = "";
  int i = 0;
  while (i < s.length()) {
    if (ans.length() > 0 && s[i] == ans[ans.length() - 1]) {
      ans.pop_back();
    } else {
      ans.push_back(s[i]);
    }
    i++;
  }

  return ans;
}
string removeDuplicates(string s) {
  first(s);
  clean(s);
}
