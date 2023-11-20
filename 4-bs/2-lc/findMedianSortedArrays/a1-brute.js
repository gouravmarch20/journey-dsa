/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function (nums1, nums2) {
  // let ans;//! m3:to make array before push
  let ans = []
  for (let i = 0; i < nums1.length; i++) {
    ans.push(nums1[i])
  }
  for (let i = 0; i < nums2.length; i++) {
    ans.push(nums2[i])
  }
  // ans.sort();//!m2 :: only for positive number
  ans.sort((nums1, nums2) => nums1 - nums2)
  const n = ans.length
  console.log(ans)
  //! m1 : n & 1 :: not used ()
  if ((n & 1) == 0) {
    return (ans[n / 2] + ans[n / 2 - 1]) / 2
  }
  return ans[Math.floor(n / 2)]
}
