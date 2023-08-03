const cutIntoSegmentMaxPossible = (target, n1, n2, n3) => {
  // function body
  if (target === 0) {
    return 0
  }
  if (target < 0) {
    return Number.MIN_SAFE_INTEGER
    // return 5
  }
  const ans1 = cutIntoSegmentMaxPossible(target - n1, n1, n2, n3) + 1
  const ans2 = cutIntoSegmentMaxPossible(target - n2, n1, n2, n3) + 1
  const ans3 = cutIntoSegmentMaxPossible(target - n3, n1, n2, n3) + 1
  // console.log(ans1)
  const ans = Math.max(ans1 , ans2 , ans3)
  return ans
}
const n1 = 3
const n2 = 2
const n3 = 2
const target = 7
console.log(cutIntoSegmentMaxPossible(target, n1, n2, n3))
