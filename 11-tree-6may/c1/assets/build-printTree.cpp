#include <iostream>
#include <queue>

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

TreeNode* constructTreeFromArray(const std::vector<int>& arr, int& index) {
    if (index >= arr.size() || arr[index] == -1) {
        index++;
        return nullptr;
    }

    TreeNode* node = new TreeNode(arr[index]);
    index++;
    node->left = constructTreeFromArray(arr, index);
    node->right = constructTreeFromArray(arr, index);

    return node;
}

void level_order_traversal(TreeNode* root) {
    if (root == nullptr)
        return;

    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        std::cout << current->value << " ";

        if (current->left)
            q.push(current->left);
        if (current->right)
            q.push(current->right);
    }
}

int main() {
    std::vector<int> arr = {10, 20, 40, -1, -1, 50, -1, -1, 30, -1, -1};
    int index = 0;

    TreeNode* root = constructTreeFromArray(arr, index);

    std::cout << "Level Order Traversal:" << std::endl;
    level_order_traversal(root);
    std::cout << std::endl;

    // Clean up memory
    // You should properly free memory in a real application to avoid memory leaks
    // Here, we're just demonstrating the traversal
    delete root->right->right;
    delete root->right->left;
    delete root->right;
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root;

    return 0;
}
