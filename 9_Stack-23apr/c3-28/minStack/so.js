var MinStack = function () {
    let a = []
    MinStack.prototype.push = function (e) {
      let minTillHere = e
      if (a.length) minTillHere = Math.min(a[a.length - 1].minTillHere, e)
      a.push({ e, minTillHere })
    }
    MinStack.prototype.pop = function () {
      return a.pop().e
    }
    MinStack.prototype.top = function () {
      return a[a.length - 1].e
    }
    MinStack.prototype.getMin = function () {
      return a[a.length - 1].minTillHere
    }
  }
  