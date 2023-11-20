#include <iostream>
#include <vector>
using namespace std;

int decimalToBinary(int no) {
  int ans = 0;
  int cnt = 0;
  while (no != 0) {
    int bit = no & 1; // Calculate the least significant bit
    ans = ans + (bit * pow(10, cnt)); // Convert the bit to binary and add it to ans
    no = no >> 1; // Right-shift the number
    cnt++;
  }
  return ans;
}

int main() {
  int no = 13;
  cout << decimalToBinary(no) << endl;
  return 0;
}
