class Node {
  constructor(value) {
    this.value = value
    this.next = null
  }
}
class LinkedList {
  constructor() {
    this.head = null
    this.tail = null
    this.size = 0
  }
  isEmpty() {
    return this.size === 0
  }
  getSize() {
    return this.size
  }
  insertAtHead(val) {
    const node = new Node(val)
    if (this.isEmpty()) {
      this.head = node
      this.tail = node
    } else {
      node.next = this.head
      this.head = node
    }
    this.size++
  }
  insertAtTail(val) {
    const node = new Node(val)
    if (this.isEmpty()) {
      this.head = node
      this.tail = node
    } else {
      this.tail.next = node
      this.tail = node
    }
    this.size++
  }
  print() {
    if (this.isEmpty()) {
      console.log("the ll is already empty")
    } else {
      let output = ""
      let curr = this.head
      while (curr) {
        output += `${curr.value} ` //? to give space
        curr = curr.next
      }
      console.log(output)
    }
  }
}

const list = new LinkedList()

// 
list.insertAtTail(10)
list.insertAtTail(20)
list.insertAtTail(30 )

//   console.log("list ", list.isEmpty())
list.print()
