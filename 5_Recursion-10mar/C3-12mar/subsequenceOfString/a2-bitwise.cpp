#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void getSubsequences(string str) {
  vector<string> ans;
  int n = str.size();
  int total = pow(2, n);

  for (int i = 0; i < total; i++) {
    string ans;
    int num = i;
    int cnt = 0;
    while (num) {
      int bit = num & 1;
      num = num >> 1;
      if (bit) {
        ans.push_back(str[cnt]);
      }
      cnt++;  //^ inc after push_back
    }
    cout << ans << endl;
  }
}
int main() {
  string str = "abc";
  getSubsequences(str);
  return 0;
}