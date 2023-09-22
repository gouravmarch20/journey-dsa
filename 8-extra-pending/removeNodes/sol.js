var removeNodes = function (h) {
    let stack = new Stack()
  
    let t = h
    while (t) {
      stack.push(t)
      t = t.next
    }
  
    let biggestAndFirstOfRightSideList = null
    while (!stack.isEmpty()) {
      if (
        stack.top.val >= biggestAndFirstOfRightSideList?.val ||
        biggestAndFirstOfRightSideList === null
      ) {
        let temp = stack.pop()
        temp.next = biggestAndFirstOfRightSideList
        biggestAndFirstOfRightSideList = temp
      } else {
        stack.pop()
      }
    }
    return biggestAndFirstOfRightSideList
  }
  
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
  