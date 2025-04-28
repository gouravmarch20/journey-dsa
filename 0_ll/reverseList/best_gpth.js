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
  let prev = null;

  if (head == null) return head;

  while (curr !== null) {
    let nextTemp = curr.next; // Save next node
    curr.next = prev; // Reverse the link
    prev = curr; // Move prev forward
    curr = nextTemp; // Move curr forward
  }

  return head;
};
