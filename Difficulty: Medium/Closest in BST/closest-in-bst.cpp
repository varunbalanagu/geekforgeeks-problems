class Solution {
public:
    int inorder(Node *root, int m, int k) {
        if (root == nullptr) {
            return m;
        }

        m = inorder(root->left, m, k);

        m = min(m, abs(root->data - k));

        m = inorder(root->right, m, k);

        return m;
    }

    int minDiff(Node *root, int k) {
        int m = INT_MAX;
        return inorder(root, m, k);
    }
};