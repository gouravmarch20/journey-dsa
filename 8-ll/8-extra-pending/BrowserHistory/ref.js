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

var BrowserHistory = function (homepage) {
  let stackLeft = new Stack()
  let stackRight = new Stack()
  stackLeft.push(homepage)

  this.visit = function (url) {
    stackLeft.push(url)
    stackRight = new Stack()
  }
  this.back = function (steps) {
    while (steps-- && stackLeft.size > 1) {
      stackRight.push(stackLeft.pop())
    }
    return stackLeft.top
  }
  this.forward = function (steps) {
    while (steps-- && stackRight.size > 0) {
      stackLeft.push(stackRight.pop())
    }
    return stackLeft.top
  }
}
