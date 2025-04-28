/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function (head) {
  let curr = head;

  if (head == null) return head;

  let newHead = null;

  while (curr != null) {
    let newNode = new ListNode(curr.val);
    newNode.next = newHead;
    newHead = newNode;
    curr = curr.next;
  }

  return newHead;
};
