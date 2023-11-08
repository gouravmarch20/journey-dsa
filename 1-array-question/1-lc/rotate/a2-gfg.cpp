void rotateArr(int arr[], int d, int n) {
  d = d % n;

  // Create a temporary array to store the first 'd' elements
  int temp[d];
  for (int i = 0; i < d; i++) {
    temp[i] = arr[i];
  }

  // Shift the remaining elements to the left by 'd' positions
  for (int i = 0; i < n - d; i++) {
    arr[i] = arr[i + d];
  }

  // Copy the temporary array back to the original array at the end
  for (int i = n - d, j = 0; i < n; i++, j++) {
    arr[i] = temp[j];
  }
}
