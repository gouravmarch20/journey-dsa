class Stack {
    constructor(size) {
        this.arr = new Array(size);
        this.size = size;
        this.top = -1;
    }

    // Push
    push(data) {
        if (this.size - this.top > 1) {
            this.top++;
            this.arr[this.top] = data;
        } else {
            console.log("Stack overflow");
        }
    }

    // Pop
    pop() {
        if (this.top === -1) {
            console.log("Stack is empty");
        } else {
            this.top--;
        }
    }

    // Get top element
    getTop() {
        if (this.top === -1) {
            console.log("Stack is empty");
            return null;
        } else {
            return this.arr[this.top];
        }
    }

    // Get current stack size
    getSize() {
        return this.top + 1;
    }

    // Check if stack is empty
    isEmpty() {
        return this.top === -1;
    }
}

// Example usage
const s = new Stack(10);
s.push(10);
s.push(20);
s.push(30);
s.push(40);

console.log("\nSize of stack is", s.getSize());
console.log("Top of stack is", s.getTop());
console.log("Is stack empty?", s.isEmpty());
