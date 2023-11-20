class Node {
  constructor(value) {
    this.value = value
    this.next = null
  }
}
const insertAtHead = (head, tail, data) => {
  const newNode = new Node(data)
  if (head === null) {
    head = newNode
    tail = newNode
    return { head, tail }
  }
  newNode.next = head
  head = newNode
  return { head, tail }
}
const print = (head)=>{
    //   curr = head;
    let temp = head;
    let output = ""
    while (head) {
        output +=`${head.value} `
        head = head.next;
    }
    console.log(output);
}

//
let head = null
let tail = null
//
// const list = new node()
//
const results1 = insertAtHead(head, tail, 20)
head = results1.head
tail = results1.tail
//
const results2 = insertAtHead(head, tail, 33)
head = results2.head
tail = results2.tail
//
const results3 = insertAtHead(head, tail, 89)
head = results3.head
tail = results3.tail

print(head)
