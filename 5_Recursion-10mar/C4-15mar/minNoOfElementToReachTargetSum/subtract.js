const minCoinNeed = (arr, target) => {
  // function body
  if (target == 0) {
    return 0
  }
  if (target < 0) {
    return Number.MAX_SAFE_INTEGER
  }
  let mini = Number.MAX_SAFE_INTEGER//? initial max value so that return value sai take min value , 
  for (let i = 0; i < arr.length; i++) {
    //^  mini = ans + 1 value  --> another fun return ans then (ans + 1, mini )who is min
    //? + 1 means if target is 0 on case possible , return it to next fun he will do +1 so on time function not end

    const ans = minCoinNeed(arr, target - arr[i])
    mini = Math.min(ans + 1, mini)
  }
}
const arr = [1, 2]
const target = 5
minCoinNeed(arr, target)
