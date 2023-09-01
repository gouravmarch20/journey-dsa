#include <iostream>
#include <vector>

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root)
            return nullptr;

        if (root->val == p->val || root->val == q->val)
            return root;

        TreeNode* leftLCA = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightLCA = lowestCommonAncestor(root->right, p, q);

        if (leftLCA && rightLCA)
            return root;

        return leftLCA ? leftLCA : rightLCA;
    }
};

// Helper function to build a binary tree from a vector-like structure
TreeNode* buildTree(const std::vector<int>& nodes, int index) {
    if (index >= nodes.size() || nodes[index] == -1) {
        return nullptr;
    }

    TreeNode* root = new TreeNode(nodes[index]);
    root->left = buildTree(nodes, 2 * index + 1);
    root->right = buildTree(nodes, 2 * index + 2);

    return root;
}

int main() {
    // Example usage
    std::vector<int> nodes = {3, 5, 1, 6, 2, 0, 8, -1, -1, 7, 4}; // Use -1 for null nodes , //? level order type 
    TreeNode* root = buildTree(nodes, 0);

    Solution solution;
    TreeNode* p = root->left; // For example, node with value 5
    TreeNode* q = root->left->right->right; // For example, node with value 4

    TreeNode* lca = solution.lowestCommonAncestor(root, p, q);
    std::cout << "Lowest Common Ancestor: " << lca->val << std::endl;

    return 0;
}
