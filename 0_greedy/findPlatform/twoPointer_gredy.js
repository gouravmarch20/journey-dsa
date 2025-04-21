class Solution {
  findPlatform(arr, dep) {
    arr.sort((a, b) => a - b);
    dep.sort((a, b) => a - b);

    let platformNeeded = 0;
    let maxPlatforms = 0;
    let i = 0,
      j = 0;

    while (i < arr.length && j < dep.length) {
      if (arr[i] <= dep[j]) {
        platformNeeded++;
        i++;
      } else {
        platformNeeded--;
        j++;
      }
      maxPlatforms = Math.max(maxPlatforms, platformNeeded);
    }

    return maxPlatforms;
  }
}
