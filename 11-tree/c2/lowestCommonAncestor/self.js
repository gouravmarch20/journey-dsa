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
    if (root == null) return -1;
    const leftFound = traversal(root.left);
    const rightFound = traversal(root.right);

    // !m1 :: currNode ___ can be answer case
    const currNode = root.val == p.val || root.val == q.val;
    if (
      (leftFound != -1 && rightFound != -1) ||
      (leftFound != -1 && currNode) ||
      (rightFound != -1 && currNode)
    ) {
      commonNode = root;
    }
    if (currNode) {
      return root.val;
    }
    // !m2 :: need to preserver for further
    // !m3 :: -1 is flag
    return leftFound != -1 ? leftFound : rightFound != -1 ? rightFound : -1;
  }
  traversal(root);
  return commonNode;
};
