/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {TreeNode}
 */
var lowestCommonAncestor = function (root, p, q) {
  let commonNode = null;
  function traversal(root) {
    let cnt = 0;
    if (root == null) return 0;
    const leftFound = traversal(root.left);
    const rightFound = traversal(root.right);
    if (root.val == p.val || root.val == q.val) {
      cnt = cnt + 1;
    }
    cnt = cnt + leftFound + rightFound;
    console.log("debug__", root.val, cnt);
    // !m1 ::: least so avoid upper to asign this commonNode
    if (cnt == 2 && !commonNode) {
      commonNode = root;
    }
    return cnt;
  }
  traversal(root);
  return commonNode;
};
