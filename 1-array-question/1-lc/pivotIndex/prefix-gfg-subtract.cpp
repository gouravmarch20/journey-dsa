int findEquilibrium(int A[], int n) {
  // Your code here
  int sum = 0;      // initialize sum of whole array
  int leftsum = 0;  // initialize leftSum

  for (int i = 0; i < n; ++i) sum += A[i];

  for (int i = 0; i < n; ++i) {
    sum -= A[i];  //? sum is now ::: right sum for index i

    if (leftsum == sum) return i;

    leftsum += A[i];//? left sum for i index
  }
  return -1;
}