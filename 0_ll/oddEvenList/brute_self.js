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
var oddEvenList = function (head) {
  if (head == null || head.next == null) return head;
  let curr = head;

  // //
  let oddArr = [];
  let evenArr = [];

  while (curr != null) {
    if (curr) oddArr.push(curr.val);
    if (curr.next) evenArr.push(curr.next.val);
    if (curr.next && curr.next.next) {
      curr = curr.next.next;
    //   ! m1 ::: what if curr not just 2 case 
    } else {
      break;
    }
    // else{
    //       curr = curr.next
    // }
  }
  console.log("debug", evenArr, oddArr);
  curr = head;
  let cntOdd = 0;
  let cntEven = 0;
  let cnt = 0;

  while (curr != null) {
    curr.val = cntOdd < oddArr?.length ? oddArr[cntOdd++] : evenArr[cntEven++];
    cnt++;
    curr = curr.next;
  }

  return head;
};
