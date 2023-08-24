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
    let node = head
    let lastSmallerNode = null
    let firstBiggerNode = null
    let previousNode = null
    let count = 1
    while (node) {
        if (!node) return head
        let currentNode = node
        let nextNode = node.next
        if (count % 2 === 1) {
            if (previousNode) {
                previousNode.next = currentNode.next
                currentNode.next = firstBiggerNode
                lastSmallerNode ? lastSmallerNode.next = currentNode : head = currentNode
            }
            lastSmallerNode = currentNode
        } else {
            previousNode = node
            if (!firstBiggerNode) firstBiggerNode = currentNode
        }
        count++
        node = nextNode
    }
    return head
};
