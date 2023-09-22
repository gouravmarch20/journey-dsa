var numWays = function (s) {
    const n = s.length
  
    // 100101
    // 111223
    let totalOnes = 0
    const totalOnesCount = new Array(n + 1).fill(0)
    for (let e of s) {
      totalOnes += e === '1'
      totalOnesCount[totalOnes]++
    }
  
    if (totalOnes % 3 !== 0) {
      return 0
    }
  
    // 0000
    //
    if (totalOnes === 0) {
      return (n - 2) * (n - 2 + 1) / 2 % 1000000007
    }
  
    const targetOnes = totalOnes / 3
    return (
      totalOnesCount[targetOnes] * totalOnesCount[targetOnes * 2] % 1000000007
    )
  }
  