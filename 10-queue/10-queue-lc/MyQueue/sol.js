function Stack() {
    let stack = []
  
    this.pushToTop = this.push = (e) => stack.push(e)
    this.popFromTop = this.pop = () => stack.pop()
    this.isEmpty = () => !stack.length
  
    this.print = () => console.log(stack)
    Object.defineProperties(this, {
      size: {
        get: () => stack.length,
      },
      top: {
        get: () => stack[stack.length - 1],
      },
      items: {
        get: () => stack,
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
  
  var MyQueue = function () {
    let leftStack = new Stack()
    let rightStack = new Stack()
  
    this.empty = () => leftStack.isEmpty() && rightStack.isEmpty()
    this.push = (e) => rightStack.pushToTop(e)
    this.transferRightToLeftUpsideDown = function () {
      while (!rightStack.isEmpty()) {
        leftStack.pushToTop(rightStack.popFromTop())
      }
    }
    this.pop = function () {
      if (leftStack.isEmpty()) this.transferRightToLeftUpsideDown()
      return leftStack.popFromTop()
    }
    this.peek = function () {
      if (leftStack.isEmpty()) this.transferRightToLeftUpsideDown()
      return leftStack.top
    }
  }