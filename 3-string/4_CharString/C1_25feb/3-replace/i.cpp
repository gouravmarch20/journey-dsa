#include <iostream>
#include <vector>

using namespace std;

void replaceStr(string & s, char rep, char withChar) {
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == rep) {
      s[i] = withChar;//^ not string replace 
    }
  }
};

int main() {
  string s = "@it november @almost @7 month spend@ on dsa@ ";
  replaceStr(s, '@', '!');
  for(auto ch : s) cout << ch ;

  return 0;
}
