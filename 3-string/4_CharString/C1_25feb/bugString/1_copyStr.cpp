#include <climits>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
  string s = "abcde";
  string ans;
  int i = 0;
  while (i < s.length()) {
    ans[i] = s[i];  // M it's work because string to string assignment  but
                    // avoid -->  modify characters in the ans string using an
                    // index (ans[i]) that doesn't exist yet
    // IMPROVED: --> push_back , string concat
    i++;
  }

  i = 0;
  while (i < s.length()) {
    cout << ans[i];
    i++;
  }

  return 0;
}
