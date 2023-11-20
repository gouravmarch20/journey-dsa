#include <iostream>
#include <vector>

using namespace std;

void reverseStr(string & s) {
  int start = 0;
  int e = s.size() - 1;
  while (start < e) {
    swap(s[start++] , s[e--]);
  }
};

int main() {
  string s = "gourav";
  reverseStr(s);
  for(auto ch : s){
    cout << ch ;
  }
  return 0;
}
