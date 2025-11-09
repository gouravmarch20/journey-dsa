var MyQueue = function () {
  //! m1 --> attach to myqueue proto
  this.st = [];
};

/**
 * @param {number} x
 * @return {void}
 */
MyQueue.prototype.push = function (x) {
  this.st.push(x);
};

/**
 * @return {number}
 */
MyQueue.prototype.pop = function () {
  let n = this.st.length - 1;
  for (let i = 0; i < n; i++) {
    let remove = this.st.pop();
    this.st.unshift(remove);
  }
  let top = this.st.pop();
  return top;
};

/**
 * @return {number}
 */
MyQueue.prototype.peek = function () {
  //! m2:: debug stack not itterate till last
  let n = this.st.length - 1;
  for (let i = 0; i < n; i++) {
    let remove = this.st.pop();
    // console.log("debug_stack", remove)

    this.st.unshift(remove);
  }
  // console.log("debug_stack", this.st)
  let top = this.st.pop();
  this.st.unshift(top);

  return top;
};

/**
 * @return {boolean}
 */
MyQueue.prototype.empty = function () {
  return this.st.length == 0;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * var obj = new MyQueue()
 * obj.push(x)
 * var param_2 = obj.pop()
 * var param_3 = obj.peek()
 * var param_4 = obj.empty()
 */
