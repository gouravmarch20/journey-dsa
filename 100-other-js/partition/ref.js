/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} x
 * @return {ListNode}
 */
var partition = function(head, x) {
    let node = head
    let lastSmallerNode = null
    let firstBiggerNode = null
    let previousNode = null
    while (node) {
        if (!node) return head
        let currentNode = node
        let nextNode = node.next
        if (currentNode.val < x) {
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
        node = nextNode
    }
    return head
};