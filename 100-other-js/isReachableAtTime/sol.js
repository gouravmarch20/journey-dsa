var isReachableAtTime = function (sx, sy, fx, fy, t) {
    if (sx == fx && sy == fy && t === 1) return false
  
    const dist = (sx, sy, fx, fy) =>
      Math.max(Math.abs(fx - sx), Math.abs(fy - sy))
  
    return (dist(sx, sy, fx, fy) <= t)
  }
  