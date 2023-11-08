#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int romanToInt(string s) {
  //^ m1 syntax forgot { 'I' : 1} this --> map is AOO
  // ^ m2 syntax :<char , int> m =  () --> asignment operator not need
  //^ m3 syntax.  { 'I' : 1}. ==>  { 'I' , 1} -> comma need
  unordered_map<char, int> m{
      {'I', 1},   {'V', 5},   {'X', 10},   {'L', 50},
      {'C', 100}, {'D', 500}, {'M', 1000},
  };
  int sum = 0;
  // M4 not m[i]==> m[s[i]]
  //  NOTE: if map mai not found --> 0 it return
  for (int i = 0; i < s.length(); i++) {
    cout << "--- "<<s[i+1] << endl;
    if (i + 1 < s.length() && m[s[i]] < m[s[i + 1]]) {
      sum -= m[s[i]];
    } else {
      sum += m[s[i]];
    }
  }
  return sum;
}

int main() {
  string roman = "III";  // Example input
  int result = romanToInt(roman);
  cout << "Roman to Integer: " << result << endl;

  return 0;
}
