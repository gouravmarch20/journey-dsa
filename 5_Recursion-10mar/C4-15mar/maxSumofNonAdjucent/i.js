const maxSumAdjacent = (arr, i, s, maxi) => {
  if (i >= arr.length) {
    return Math.max(maxi, s)
  }
  //
  const ans = maxSumAdjacent(arr, i + 2, s + arr[i], maxi)
  maxi = Math.max(maxi, ans)


  const ans1 = maxSumAdjacent(arr, i + 1, s, maxi)
  maxi = Math.max(maxi, ans1)
  console.log(maxi)

  return maxi
}
const arr = [5,0 , 3 , 9 , 4]
const i = 0
const s = 0
const maxi = 0
console.log(maxSumAdjacent(arr, i, s, maxi))
