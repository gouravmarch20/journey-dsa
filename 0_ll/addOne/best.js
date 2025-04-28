/*Definition of singly linked list:
class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
}
*/

class Solution {
  helper(head) {
    if (head != null && head.next == null) {
      const val1 = head.val;
      const sum = val1 + 1;
      const digit = sum % 10;
      const carry = Math.floor(sum / 10);
      head.val = digit;
      return carry;
    }
    const carry = this.helper(head.next);
    const val1 = head.val;
    const sum = val1 + carry;
    const digit = sum % 10;
    const carryNew = Math.floor(sum / 10);
    head.val = digit;
    return carryNew;
  }
  addOne(head) {
    const carry = this.helper(head);
    if (carry) {
      const newNode = new ListNode(carry);
      newNode.next = head;
      return newNode;
    }
    return head;
  }
}
