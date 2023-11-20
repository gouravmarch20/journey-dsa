#include <iostream>
#include <stack>
#include <string>

using namespace std;  // Add this line to use the std namespace throughout the
                      // code

class Solution {
 public:
  int maxDepth(string s) {
    stack<int> st;
    int maxi = 0;
    for (int i = 0; i < s.length(); i++) {
      char ch = s[i];
      if (st.empty() && ch == '(') {
        st.push(1);
      } else if (ch == '(') {
        st.push(st.top() + 1);
      } else if (ch == ')') {
        maxi = max(st.top(), maxi);  // NOTE: perform logic for maxi here
        st.pop();
      }
    }
    return maxi;
  }
};

int main() {
  Solution solution;
  string input = "(()(())())";
  int result = solution.maxDepth(input);
  cout << "Maximum depth of parentheses: " << result << endl;
  return 0;
}
