#include <algorithm>
#include <climits>
#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  string s = "gourav";
  unordered_map<char, int> freq;
  for (int i = 0; i < s.length(); i++) {
    // freq[s[i]] = freq[s[i]] + 1;//^ avoid
    char ch = s[i];
    freq[ch]++;  //^ 0 auto set
  }

  for (auto i : freq) {
    cout << i.first << " --> " << i.second << endl;
  }
  return 0;
}
