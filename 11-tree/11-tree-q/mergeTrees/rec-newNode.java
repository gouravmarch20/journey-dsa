// /**
//  * Definition for a binary tree node.
//  * public class TreeNode {
//  *     int val;
//  *     TreeNode left;
//  *     TreeNode right;
//  *     TreeNode() {}
//  *     TreeNode(int val) { this.val = val; }
//  *     TreeNode(int val, TreeNode left, TreeNode right) {
//  *         this.val = val;
//  *         this.left = left;
//  *         this.right = right;
//  *     }
//  * }
//  */
// class Solution {
//     public TreeNode mergeTrees(TreeNode root1, TreeNode root2) {
//         if(root1==null && root2==null) return null;
//         int sum=0;
//         if(root1!=null)sum+=root1.val;
//         if(root2!=null)sum+=root2.val;
//         TreeNode root=new TreeNode(sum);
        
//         if(root1!=null && root2!=null) root.left=mergeTrees(root1.left,root2.left);
//         else if(root1==null ) root.left=mergeTrees(root1,root2.left);
//         else root.left=mergeTrees(root1.left,root2);

//         if(root1!=null && root2!=null) root.right=mergeTrees(root1.right,root2.right);
//         else if(root1==null ) root.right=mergeTrees(root1,root2.right);
//         else root.right=mergeTrees(root1.right,root2);
//         return root;

//     }
// }