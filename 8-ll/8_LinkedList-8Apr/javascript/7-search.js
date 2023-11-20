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
        output += `${curr.value} `
        curr = curr.next
      }
      console.log(output)
    }
  }
  search(value) {
    if (this.size === 0) {
      return
    }
    let curr = this.head
    // while (curr.next) {
    //   if (curr.value === value) {
    //     console.log("true founded ")
    //     return
    //   }
    //   curr = curr.next
    // }
    // if (curr.value === value) {
    //   console.log("true founded ")
    //   return
    // }else{
    //     console.log("not found");
    // }

    //IMPROVED : 
    // ? 
    while (curr) {
      if (curr.value === value) {
        console.log("true founded ")
        return
      }
      curr = curr.next
    }
    console.log("not found");
  }
}

const list = new LinkedList()

//
list.insertAtTail(10)
list.insertAtTail(20)
list.insertAtTail(30)
list.insertAtTail(40)

list.search(50)

// list.print()
