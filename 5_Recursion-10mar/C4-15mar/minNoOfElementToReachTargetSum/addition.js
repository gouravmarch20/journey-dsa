const minCoinNeed = (arr, target, output) => {
  // function body
  if (target == output) {
    return 0
  }
  if (target < output) {
    return Number.MAX_SAFE_INTEGER
  }
  let mini = Number.MAX_SAFE_INTEGER

  for (let i = 0; i < arr.length; i++) {
    const ans = minCoinNeed(arr, target , output + arr[i])
    mini = Math.min(ans + 1, mini)
  }
  return mini
}
const arr = [1, 1, 1 ,1]
const target = 5
const output = 0
console.log(minCoinNeed(arr, target, output))
