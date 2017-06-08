#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node (int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
        Node *insert(Node *root, int data) {
            if (!root) {
                return new Node(data);
            } else {
                Node *curr;
                if (root->data >= data) {
                    curr = insert(root->left, data);
                    root->left = curr;
                } else {
                    curr = insert(root->right, data);
                    root->right = curr;
                }
            }
            return root;
        }

        int getHeight(Node *root) {
            if (!root) {
                return -1;
            } else {
                int left = getHeight(root->left);
                int right = getHeight(root->right);
                return (left > right ? left : right) + 1;
            }
        }
};

int main() {
    Solution myTree;
    Node *root = NULL;
    int t, data;
    cin >> t;

    while (t-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height << endl;

    return 0;
}
