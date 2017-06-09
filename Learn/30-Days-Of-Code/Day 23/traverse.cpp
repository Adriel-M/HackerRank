#include <iostream>
#include <queue>

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
        Node * insert(Node *root, int data) {
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

        void levelOrder(Node *root) {
            queue<Node *> q;
            if (root) {
                q.push(root);
            }
            while (!q.empty()) {
                Node *curr = q.front();
                q.pop();
                cout << curr->data << " ";
                if (curr->left) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }
            }
        }
};

int main() {
    Solution myTree;
    Node *root = NULL;
    int T, data;
    cin >> T;
    while (T-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    myTree.levelOrder(root);
    return 0;
}
