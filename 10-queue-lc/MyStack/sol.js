var MyStack = function() {
    this.arr1 = new Array()
};

/** 
 * @param {number} x
 * @return {void}
 */
MyStack.prototype.push = function(x) {
    this.arr1.push(x)
};

/**
 * @return {number}
 */
MyStack.prototype.pop = function() {
    for (let i = 0; i < this.arr1.length - 1; i++) this.arr1.push(this.arr1.shift())
    return this.arr1.shift()
};

/**
 * @return {number}
 */
MyStack.prototype.top = function() {
   return this.arr1[this.arr1.length-1] 
};

/**
 * @return {boolean}
 */
MyStack.prototype.empty = function() {
    return this.arr1.length === 0
};

/** 
 * Your MyStack object will be instantiated and called as such:
 * var obj = new MyStack()
 * obj.push(x)
 * var param_2 = obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.empty()
 */