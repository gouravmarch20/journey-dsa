const arr = [10, 20, 30, 40]
const tar = 80
const findTriplet = (arr, target) => {
  for (let i = 0; i < arr.length; i++) {
    const e1 = arr[i]
    for (let j = i + 1; j < arr.length; j++) {
      //^ j further iteration auto stop => if k cross it's limit

      const e2 = arr[j]
      for (let k = j + 1; k < arr.length; k++) {
        //^ k further iteration auto stop => if k cross it's limit
        const e3 = arr[k]
        //
        if (e1 + e2 + e3 === target) {
          console.log(e1, e2, e3)
        }
      }
    }
  }
}
findTriplet(arr, tar)
