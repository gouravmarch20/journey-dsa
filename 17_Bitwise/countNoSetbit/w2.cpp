#include <iostream>
#include <vector>

using namespace std;

int countSetBit(int num) {
  int cnt = 0;
  while (num != 0) {
    num = num & num - 1;
    cnt++;
  }
  return cnt;
};

int main() {
  cout << "total no of bits  " << countSetBit(15)<<endl;
  cout << "total no of bits  " << countSetBit(9)<<endl;
  return 0;
}
