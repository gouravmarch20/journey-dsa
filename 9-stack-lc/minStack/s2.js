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
  
  var MinStack = function () {
    let stack = new Stack()
  
    this.push = function (e) {
      let minTillHere
      if (stack.isEmpty()) {
        minTillHere = e
      } else {
        minTillHere = Math.min(stack.top.minTillHere, e)
      }
      return stack.push({ e, minTillHere })
    }
    this.top = function () {
      return stack.top.e
    }
    this.getMin = function () {
      return stack.top.minTillHere
    }
    this.pop = function () {
      return stack.pop().e
    }
  }