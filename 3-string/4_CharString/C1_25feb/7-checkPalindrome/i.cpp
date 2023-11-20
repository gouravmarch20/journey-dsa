//* time => O(n)
#include <string.h>

#include <iostream>

using namespace std;
bool checkPalindrome(string word) {
  int i = 0;
  int j = word.size() - 1;

  while (i <= j) {
    if (word[i] != word[j]) {
      return false;
    } else {
      i++;
      j--;
    }
  }
  return true;
}

int main() {
  string word = "gitig";

  cout << "checkPalindrome " << checkPalindrome(word) << endl;

  return 0;
}