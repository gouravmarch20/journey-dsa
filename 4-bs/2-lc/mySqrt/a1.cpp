class Solution {
 public:
  int ref(int x) {
    int s = 0;
    int e = x;
    int ans = -1;
    while (s <= e) {
      long long int m = s + (e - s) / 2;  //^ change this avoid storing result
      if (m * m == x) {
        return m;
      } else if (m * m < x) {
        ans = m;
        s = m + 1;
      } else {
        e = m - 1;
      }
    }
    return ans;
  }

  int selfMySqrt(int x) {
    int s = 0;
    int e = x;
    int ans = -1;
    while (s <= e) {
      int m = s + (e - s) / 2;
      // long long int sq = m * m;//! overflow 
      long long sq = static_cast<long long>(m) *
                     m;  // Cast m to long long to avoid integer overflow

      if (sq == x) {
        return m;
      } else if (sq < x) {
        ans = m;
        s = m + 1;
      } else {
        e = m - 1;
      }
    }
    return ans;
  }

  int mySqrt(int x) {
    selfMySqrt(x);
    ref(x);
  }
};