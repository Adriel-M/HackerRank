#include <stdio.h>
#include <stdlib.h>
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

typedef struct node {
    struct node *left;
    struct node *right;
    int data;
} Node;

Node * newNode(int data) {
    Node *node = calloc(1, sizeof(Node));
    node->left = NULL;
    node->right = NULL;
    node->data = data;
    return node;
}

int getHeight(Node *root) {
    if (!root) {
        return -1;
    } else {
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        return MAX(left, right) + 1;
    }
}

Node * insert(Node *root, int data) {
    if (!root) {
        return newNode(data);
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

int main() {
    Node *root = NULL;
    int T, data;
    scanf("%d", &T);
    while (T-- > 0) {
        scanf("%d", &data);
        root = insert(root, data);
    }
    int height = getHeight(root);
    printf("%d\n", height);
    return 0;
}
