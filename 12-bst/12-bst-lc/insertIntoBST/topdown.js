var insertIntoBST = function (root, val) {
  if (root === null) return new TreeNode(val);

  const travel = (node, val) => {
    if (val < node.val) {
      if (node.left === null) {
        node.left = new TreeNode(val);
        return;
      }
      travel(node.left, val);
    } else {
      if (node.right === null) {
        node.right = new TreeNode(val);
        return;
      }
      travel(node.right, val);
    }
  };

  travel(root, val);
  return root;
};
