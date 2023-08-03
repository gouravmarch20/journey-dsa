//* O( n )
const subsetOfArray = (arr, i, temp) => {
  //
  if (i >= arr.length) {
    console.log(temp)
    return
  }
  //! m1 think achieved by looping
  temp.push(arr[i])
  subsetOfArray(arr, i + 1, temp)
  temp.pop()
  subsetOfArray(arr, i + 1, temp)

}

const arr = [1, 2, 3]
const temp = []
console.log(subsetOfArray(arr, 0, temp))
