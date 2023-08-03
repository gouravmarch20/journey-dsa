const cutIntoSegmentMaxPossible = (arr, target) => {
  // function body
  if (target == 0) {
    return 0
  }
  if (target < 0) {
    return Number.MIN_SAFE_INTEGER
  }
  let maxi = Number.MIN_SAFE_INTEGER
  for (let i = 0; i < arr.length; i++) {
    const ans = cutIntoSegmentMaxPossible(arr, target - arr[i])
    //^ if case to avoid maxi --> mai assign min value -> may min + 1 ==> overflow to positive number  
    if (ans != Number.MIN_SAFE_INTEGER) {
     maxi = Math.max(ans + 1 , maxi)
    }
  }
  return maxi
}
const arr = [2, 4 , 5]
const target = 6
console.log(cutIntoSegmentMaxPossible(arr, target))
