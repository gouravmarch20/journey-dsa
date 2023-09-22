function Stack() {
    let stack = []
  
    this.push = (e) => stack.push(e)
    this.pop = () => stack.pop()
    this.isEmpty = () => !stack.length
  
    this.print = () => console.log(stack)
    Object.defineProperties(this, {
      size: {
        get: () => stack.length,
      },
      top: {
        get: function () {
          return stack[stack.length - 1]
        },
      },
      items: {
        get: function () {
          return stack
        },
      },
    })
  
    this.test = () => {
      let stack = new Stack()
      stack.push()
      while (!stack.isEmpty()) {
        let x = stack.size
        let y = stack.top
        let z = stack.items
        let a = stack.pop()
        let b = stack.print()
      }
    }
  }
  
  var BottomKIncrementStack = function (maxSize) {
    let stack = new Stack()
    let increments = new Array(maxSize).fill(0)
  
    this.push = function (x) {
      if (stack.size === maxSize) return
      stack.push(x)
    }
  
    this.pop = function () {
      if (stack.isEmpty()) return -1
  
      const currIndex = stack.size - 1
      let ans = stack.pop()
  
      if (increments[currIndex]) {
        ans += increments[currIndex]
        if (currIndex > 0) {
          increments[currIndex - 1] += increments[currIndex]
        }
        increments[currIndex] = 0
      }
  
      return ans
    }
  
    this.increment = function (k, val) {
      k = Math.min(stack.size, k)
      increments[k - 1] += val
    }
  }
  
  var CustomStack = BottomKIncrementStack