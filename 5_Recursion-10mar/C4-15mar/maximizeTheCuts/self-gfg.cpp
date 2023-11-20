// int rec(int n, int x, int y, int z) {
//   if (n < 0) return INT_MIN;
//   if (n == 0) return 0;

//   int cut1 = rec(n - x, x, y, z);
//   int cut2 = rec(n - y, x, y, z);
//   int cut3 = rec(n - z, x, y, z);

//M1 int res = max(cut1 , cut2 , cut3) ;//max only take 2 compare , nesting
//   int res = max(cut1, max(cut2, cut3));//L: max nexting if 2 more

//   if (res != INT_MIN) {
//     res += 1;
//   }
//   return res;
// }
// int maximizeTheCuts(int n, int x, int y, int z) {
//   // Your code here
//   int res = rec(n, x, y, z);
//   if (res == INT_MIN) {
//     return 0;
//   }
//   return res;
// }