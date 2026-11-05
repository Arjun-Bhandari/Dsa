#include <iostream>
using namespace std;

class TreeNode {
public:
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int value, TreeNode* left = nullptr, TreeNode* right = nullptr)
            : data(value), left(left), right(right) {
        }

        ~TreeNode(){
            delete left;
            delete right;
        }

        // Pre-order traversal: root, left subtree, right subtree.
        void preOrder(TreeNode* root) {
        if (root != nullptr) {
            cout << root->data << ' ';
            preOrder(root->left);
            preOrder(root->right);
        }
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right = new TreeNode(5);
    root->right->left = new TreeNode(8);

    root->preOrder(root);
    cout << '\n';

    delete root;
    return 0;
}