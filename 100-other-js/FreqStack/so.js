// var FreqStack = function () {
//     const { MaxPriorityQueue: MaxPq } = require('@datastructures-js/priority-queue')
  
//     let f = {}
//     let time = 0
//     let pq = new MaxPq({ compare: (a, b) => b.freq - a.freq || b.time - a.time })
  
//     FreqStack.prototype.push = function (e) {
//       let freq = (f[e] = (f[e] || 0) + 1)
//       time++
//       pq.enqueue({ e, freq, time })
//     }
  
//     FreqStack.prototype.pop = function () {
//       let { e } = pq.dequeue()
//       f[e]--
//       return e
//     }
//   }
  
//   var FreqStack = function () {
//     let f = {}
//     let feA = []
  
//     FreqStack.prototype.push = function (e) {
//       f[e] = (f[e] || 0) + 1
  
//       feA[f[e]] = feA[f[e]] || []
//       feA[f[e]].push(e)
//     }
  
//     FreqStack.prototype.pop = function () {
//       let e = feA[feA.length - 1].pop()
//       if (!feA[feA.length - 1].length) feA.pop() // feA.length--
//       f[e]--
//       return e
//     }
//   };
  
//   var FreqStack = function () {
//     let f = {}
//     let feArr = []
//     let fMax = 0
  
//     FreqStack.prototype.push = function (e) {
//       f[e] = (f[e] || 0) + 1
//       fMax = Math.max(fMax, f[e])
  
//       feArr[f[e]] = feArr[f[e]] || []
//       feArr[f[e]].push(e)
//     }
  
//     FreqStack.prototype.pop = function () {
//       let e = feArr[fMax].pop()
//       if (!feArr[fMax].length) fMax--
//       f[e]--
//       return e
//     }
//   };