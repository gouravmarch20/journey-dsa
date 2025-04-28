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
const helper = (head, prev) => {
    if (head == null) {
        return prev;
    }
    const forward = head.next;
    head.next = prev;
    return helper(forward, head);
};

var reverseList = function(head) {
    return helper(head, null);
};
