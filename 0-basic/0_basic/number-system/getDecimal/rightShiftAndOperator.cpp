#include <iostream>
#include <vector>
using namespace std;

int binaryToDecimal(int no) {
  int decimalNo = 0;
  int cnt = 0;
  while (no != 0) {
    int bit = no & 1; // Calculate the least significant bit
    decimalNo = bit * (1 << cnt) + decimalNo; // Use bit shifting for power of 2
    no = no >> 1; // Right-shift the number
    cnt++;
  }
  return decimalNo;
}

int main() {
  // int no = 1101; //! it not binary number :: write as stirng or 0b next
  int no = 0b1101; //
  cout << binaryToDecimal(no) << endl;
  return 0;
}
