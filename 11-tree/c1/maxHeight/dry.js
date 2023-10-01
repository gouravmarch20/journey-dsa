class TreeNode {
    constructor(data) {
      this.data = data;
      this.left = null;
      this.right = null;
    }
  }
  
  let index = 0;
  
  function buildTree(arr) {
    // If current element is -1 or end of array is reached, return null
    if (index >= arr.length || arr[index] === -1) {
      index++;
      return null;
    }
  
    // Create a new node with the current element and move to the next index
    let root = new TreeNode(arr[index]);
    index++;
  
    // Recursively build left and right subtrees
    root.left = buildTree(arr);
    root.right = buildTree(arr);
  
    return root;
  }
  
  function maxHeight(root) {
    // Base case: if root is null, height is 0
    if (root === null) {
      return 0;
    }
  
    // Recursively find the maximum height of left and right subtrees
    let leftNodeHeight = maxHeight(root.left);
    let rightNodeHeight = maxHeight(root.right);
  
    // maximum height of current node is the maximum of left and right heights + 1
    let ans = Math.max(leftNodeHeight, rightNodeHeight) + 1;
  
    return ans;
  }
  
  function diameter(root) {
    // Base case: if root is null, diameter is 0
    if (root === null) {
      return 0;
    }
  
    // Recursively find the diameters of left and right subtrees
    let op1 = diameter(root.left);
    let op2 = diameter(root.right);
  
    // Calculate diameter passing through the current node
    let op3 = maxHeight(root.left) + 1+ maxHeight(root.right);
  
    // maximum diameter is the maximum of the three options
    let ans = Math.max(op1, Math.max(op2, op3));
  
    return ans;
  }
  
  // Input array representing the binary tree
  let arr = [10, 20, 40, -1, -1, 50, -1, -1, 30, -1, 60, 70, -1, -1, -1];
  
  // Construct the binary tree from the input array
  let root = buildTree(arr);
  
  // Calculate the diameter of the tree
  let maxDepth = diameter(root) - 1;
  
  // Print the maximum depth of the tree
  console.log("The maximum depth of the tree is: " + maxDepth);