while (!st.empty()) {
            // Get the top element from the stack
            auto [node, state] = st.top();
            st.pop();

            // Process the node based on its state
            if (state == 1) {
                // Preorder: Add node data
                pre.push_back(node->data);
                // Change state to 2 (inorder) for this node
                st.push({ node, 2 });

                // Push left child onto the stack for processing
                if (node->left != nullptr) {
                    st.push({ node->left, 1 });
                }
            } else if (state == 2) {
                // Inorder: Add node data
                in.push_back(node->data);
                // Change state to 3 (postorder) for this node
                st.push({ node, 3 });

                // Push right child onto the stack for processing
                if (node->right != nullptr) {
                    st.push({ node->right, 1 });
                }
            } else {
                // Postorder: Add node data
                post.push_back(node->data);
            }
        }