// var minimumPossibleSum = function (n, target) {
//     let a = []
//     let dontTakeSet = new Set()
  
//     for (let i = 1; i <= 5 * n; i++) {
//       if (a.length === n) break
//       if (dontTakeSet.has(i)) continue
  
//       dontTakeSet.add(target - i)
//       a.push(i)
//     }
  
//     return a.reduce((s, e) => s + e)
//   }
  
//   var minimumPossibleSum = function (n, target) {
//     let a = []
//     let dontTakeSet = new Set()
  
//     for (let i = 1; a.length !== n; i++) {
//       if (dontTakeSet.has(i)) continue
  
//       dontTakeSet.add(target - i)
//       a.push(i)
//     }
  
//     return a.reduce((s, e) => s + e)
//   }
  
//   var minimumPossibleSum = function (n, target) {
//     let a = []
//     let dontTakeSet = new Set()
  
//     for (let i = 1; a.length !== n; i++) {
//       if (!dontTakeSet.has(i)) {
//         dontTakeSet.add(target - i)
//         a.push(i)
//       }
//     }
  
//     return a.reduce((s, e) => s + e)
//   }