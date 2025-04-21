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
var oddEvenList = function(head) {
    if (!head || !head.next) return head;

    let oddVals = [];
    let evenVals = [];

    let curr = head;
    let index = 1;

    while (curr) {
        if (index % 2 !== 0) {
            oddVals.push(curr.val);
        } else {
            evenVals.push(curr.val);
        }
        curr = curr.next;
        index++;
    }

    // Reassign values from arrays
    curr = head;
    let combined = oddVals.concat(evenVals);
    let i = 0;

    while (curr) {
        curr.val = combined[i++];
        curr = curr.next;
    }

    return head;
};
