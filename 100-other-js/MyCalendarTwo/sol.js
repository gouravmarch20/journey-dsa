var MyCalendarTwo = function () {
    let doubledRanges = []
    let singleRanges = []
  
    this.book = function (new_start, new_end) {
      // Fail if already doubledRanges
      for (let { start, end } of doubledRanges) {
        if (new_end > start && new_start < end) {
          return false
        }
      }
      // create single, and also if it is doubled
      for (let { start, end } of singleRanges) {
        // Create a doubledRanges object
        if (new_end > start && new_start < end) {
          doubledRanges.push({
            start: Math.max(start, new_start),
            end: Math.min(end, new_end),
          })
        }
      }
      singleRanges.push({ start: new_start, end: new_end })
      return true
    }
  }
  