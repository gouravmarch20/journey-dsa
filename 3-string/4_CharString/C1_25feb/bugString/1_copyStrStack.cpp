#include <climits>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
  stack<char> st;
  string ans;
  st.push('a');
  st.push('b');
  int i = 0;
  while (!st.empty()) {
    char ch = st.top();
    st.pop();
    // ans[i] = ch;//M NOT WORK --> avoid this no dynamic allocation
    // ans += ch;//IMPROVED ==> THIS WORKS
    i++;
  }
  cout << ans.length() << endl;
  while (i < ans.length()) {
    cout << ans[i];

    i++;
  }

  return 0;
}
