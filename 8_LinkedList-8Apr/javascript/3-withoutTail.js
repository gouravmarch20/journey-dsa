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
  list.insertAtHead(10)
  list.insertAtTail(20)
  list.insertAtTail(30)
  list.insertAtTail(40)
  
//   list.insert(4, 33)
  //   console.log("list ", list.isEmpty())
  list.print()
  