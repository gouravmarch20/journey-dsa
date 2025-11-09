class CircularQueue {
    constructor(size) {
      this.arr = new Array(size);
      this.size = size;
      this.front = -1;
      this.rear = -1;
    }
  
    isFull() {
      return (this.rear + 1) % this.size === this.front;
    }
  
    isEmpty() {
      return this.front === -1;
    }
  
    enqueue(data) {
      if (this.isFull()) {
        console.log("Queue overflow");
        return;
      }
  
      if (this.isEmpty()) {
        this.front = 0;
      }
  
      this.rear = (this.rear + 1) % this.size;
      this.arr[this.rear] = data;
    }
  
    dequeue() {
      if (this.isEmpty()) {
        console.log("Queue underflow");
        return;
      }
  
      if (this.front === this.rear) {
        // Queue becomes empty
        this.front = this.rear = -1;
      } else {
        this.front = (this.front + 1) % this.size;
      }
    }
  
    getFront() {
      if (this.isEmpty()) {
        console.log("Queue is empty");
        return null;
      }
      return this.arr[this.front];
    }
  
    display() {
      if (this.isEmpty()) {
        console.log("Queue is empty");
        return;
      }
  
      let i = this.front;
      let output = [];
  
      while (true) {
        output.push(this.arr[i]);
        if (i === this.rear) break;
        i = (i + 1) % this.size;
      }
  
      console.log("Queue contents:", output);
    }
  }
  
  // Example usage
  const q = new CircularQueue(3);
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);  // fills queue
  q.display();
  
  q.dequeue();
  q.enqueue(40);  // reuses space
  q.display();
  