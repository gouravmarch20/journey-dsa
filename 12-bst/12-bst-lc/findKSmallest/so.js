/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} k
 * @return {number}
 */
var kthSmallest = function (root, k) {
  if (root == null) return null;
  let ans = null;
  let cnt = 0;
  function findKSmallest(root) {
    if (root == null) return;
    if (ans) return;
    findKSmallest(root.left);
    // console.log("debug__" , root.val)
    cnt += 1;
    if (cnt == k) {
      ans = root.val;
    }
    findKSmallest(root.right);

    //  console.log("debug_" , cnt , k , root.val )

    // console.log("debug__" , root.val)
  }
  findKSmallest(root, 0);
  return ans;
};
