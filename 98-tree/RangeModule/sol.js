var RangeModule = function () {
    let ranges = []
    let cl = console.log
    // cl(ranges)
  
    this.addRange = function (left, right) {
      let L = lower_bound_eg(ranges, left)
      let R = UPPER_BOUND_G(ranges, right)
      if (R != L)
        ranges.splice(L, R - L)
  
      let sub_range = []
      if (L == R) {
        // if (L % 2 == 0 || R % 2 == 0) {
          // if (L % 2 == 0) ranges.splice(L, 0, left)
          // if (R % 2 == 0) ranges.splice(L+1, 0, right)
          if (L % 2 == 0) sub_range.push(left)
          if (R % 2 == 0) sub_range.push(right)
          ranges.splice(L, 0, ...sub_range)
          // ranges.splice(L, 0, left)
          // ranges.splice(L+1, 0, right)
          cl("111", L % 2 == 0, R % 2 == 0, sub_range)
        // }
      } else {
        // if (L % 2 == 0 || R % 2 == 0) {
          // if (L % 2 == 0) ranges.splice(L, 0, left)
          // if (R % 2 == 0) ranges.splice(L, 0, right)
          if (L % 2 == 0) sub_range.push(left)
          if (R % 2 == 0) sub_range.push(right)
          ranges.splice(L, 0, ...sub_range)
          cl("222", L % 2 == 0, R % 2 == 0, sub_range)
        // }
      }
      // cl(' add ', left, right, ' at ', L, R, 'sub_range', sub_range, ' = ', ranges)
    }
  
    this.removeRange = function (left, right) {
      let L = lower_bound_eg(ranges, left)
      let R = UPPER_BOUND_G(ranges, right)
  
      let sub_range = []
      if (L % 2 == 1) sub_range.push(left)
      if (R % 2 == 1) sub_range.push(right)
  
      ranges.splice(L, R - L, ...sub_range)
    }
  
    this.queryRange = function (left, right) {
      let L = UPPER_BOUND_G(ranges, left)
      let R = lower_bound_eg(ranges, right)
      return L == R && L % 2 == 1
    }
  }
  
  function lower_bound_eg(arr, target, L = 0, R = arr.length) {
    while (L < R) {
      let mid = ~~(L / 2 + R / 2)
      arr[mid] < target
        ? L = mid + 1
        : R = mid
    }
    return L
  }
  function UPPER_BOUND_G(arr, target, L = 0, R = arr.length) {
    while (L < R) {
      let mid = ~~(L / 2 + R / 2)
      arr[mid] <= target
        ? L = mid + 1
        : R = mid
    }
    return L
  }
  // let i = -1
  // if (++i === 1) return
  