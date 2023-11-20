// int rec(int n, int x, int y, int z) {
//   if (n < 0) return INT_MIN;
//   if (n == 0) return 0;

//   int op1 = rec(n - x, x, y, z) + 1;
//   int op2 = rec(n - y, x, y, z) + 1;
//   int op3 = rec(n - z, x, y, z) + 1;

//   return = max(cut1, max(cut2, cut3));
// }
// int maximizeTheCuts(int n, int x, int y, int z) {
//   // Your code here
//   int res = rec(n, x, y, z);
//   if (res == INT_MIN) {
//     return 0;
//   }
//   return res;
// }