var numberOfPoints = function (a) {
    let o = {}
    for (let [s, e] of a) {
      for (let i = s; i <= e; i++) {
        o[i] = 1
      }
    }
    return Object.keys(o).length
  }
  