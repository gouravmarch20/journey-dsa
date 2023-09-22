var FreqStack = function () {
    const {
      MaxPriorityQueue: MaxPq,
    } = require('@datastructures-js/priority-queue')
  
    let f = {}
    let time = 0
    let pq = new MaxPq({ compare: (a, b) => b.freq - a.freq || b.time - a.time })
  
    this.push = function (e) {
      time++
      let freq = (f[e] = (f[e] || 0) + 1)
      pq.enqueue({ e, freq, time })
    }
  
    this.pop = function () {
      let { e } = pq.dequeue()
      f[e]--
      return e
    }
  }
  
  var FreqStack3 = function () {
    let f = {}
    let freqEleArr = []
  
    this.push = function (e) {
      f[e] = (f[e] || 0) + 1
      freqEleArr[f[e]] = freqEleArr[f[e]] || []
      freqEleArr[f[e]].push(e)
    }
  
    this.pop = function () {
      let e = freqEleArr[freqEleArr.length - 1].pop()
      f[e]--
      if (!freqEleArr[freqEleArr.length - 1].length) {
        freqEleArr.pop()
      }
      return e
    }
  }
  
  var FreqStack2 = function () {
    let f = {}
    let freqEleArr = []
    let maxFreq = 0
  
    this.push = function (e) {
      f[e] = (f[e] || 0) + 1
      freqEleArr[f[e]] = freqEleArr[f[e]] || []
      freqEleArr[f[e]].push(e)
      maxFreq = Math.max(maxFreq, f[e])
    }
  
    this.pop = function () {
      let e = freqEleArr[maxFreq].pop()
      f[e]--
      if (!freqEleArr[maxFreq].length) {
        maxFreq--
      }
      return e
    }
  }