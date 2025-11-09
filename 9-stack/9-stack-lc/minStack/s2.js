var MinStack = function () {
  this.stack = [];
};

/**
 * @param {number} val
 * @return {void}
 */
MinStack.prototype.push = function (val) {
  if (this.stack.length == 0) {
    return this.stack.push([val, val]);
  }
  // !m1::: [this.stack.length - 1][1] ==> to get min in stack
  this.stack.push([val, Math.min(val, this.stack[this.stack.length - 1][1])]);
};

/**
 * @return {void}
 */
MinStack.prototype.pop = function () {
  this.stack.pop();
};

/**
 * @return {number}
 */
MinStack.prototype.top = function () {
  let top = this.stack[this.stack.length - 1];
  return top[0];
};

/**
 * @return {number}
 */
MinStack.prototype.getMin = function () {
  console.log("debug", this.stack[this.stack.length - 1]);
  let top = this.stack[this.stack.length - 1];
  return top[1];
};

/**
 * Your MinStack object will be instantiated and called as such:
 * var obj = new MinStack()
 * obj.push(val)
 * obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.getMin()
 */
