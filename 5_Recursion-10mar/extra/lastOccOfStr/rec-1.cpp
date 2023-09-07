#include <algorithm>
#include <climits>
#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;
void solve(string& s, char p, int i, int& ans) {

  if (i >= s.length()) return;//^ use = , instead of s.length -1

  if (s[i] == p) {
    ans = i;
  }

  solve(s, p, i + 1, ans);
}
int LastIndex(string s, char p) {
  int ans = -1;
  int i = 0;
  solve(s, p, i, ans);
  cout << ans << " the index found" << endl;
  if (ans == -1) return -1;

  return ans;
}

int main() {
  string s = "greek";
  char p = 'l';
  LastIndex(s, p);
  return 0;
}
