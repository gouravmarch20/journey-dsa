class Node {
  constructor(value) {
    this.value = value
    this.next = null
  }
}
class LinkedList {
  constructor() {
    this.head = null
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
    } else {
      node.next = this.head
      this.head = node
    }
    this.size++
  }
  insert(index, val) {
    if (!this.head) {
      return
    }
    if ((index === 0)) {
      this.insertAtHead(val)
      return ;
    }
    if (index > this.getSize()) {
      return
    }
    //?  last case also handle -->   node.next = prev.next ==> null
  
    // middle case
    const node = new Node(val)

    let prev = this.head
    let i = 0
    while (i < index - 1) {
      prev = prev.next
      i++
    }

    node.next = prev.next
    prev.next = node
    this.size++

  }
  insertAtTail(val) {
    const node = new Node(val)
    if (this.isEmpty()) {
      this.head = node
    } else {
      let prev = this.head
      while (prev.next) {
        prev = prev.next
      }
      prev.next = node
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
//
list.insertAtHead(10)
list.insertAtTail(20)


list.insert(2, 33)
//   console.log("list ", list.isEmpty())
list.print()
