//* O( n )
const subsetOfArray = (arr, i, temp) => {
    //
    if (i >= arr.length) {
      console.log(temp)
      return
    }
    subsetOfArray(arr, i + 1, temp)

    temp.push(arr[i])
    subsetOfArray(arr, i + 1, temp)
  
  }
  
  const arr = [1, 2, 3]
  const temp = []
  console.log(subsetOfArray(arr, 0, temp))
  