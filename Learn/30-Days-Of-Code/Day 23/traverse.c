#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *left;
    struct node *right;
    int data;
} Node;

typedef struct llnode {
    struct llnode *next;
    Node *data;
} LLnode;

Node *newNode(int data) {
    Node *node = malloc(sizeof(Node));
    node->left = NULL;
    node->right = NULL;
    node->data = data;
}

typedef struct queue {
    LLnode *front;
    LLnode *back;
} Queue;

LLnode *newLLnode(Node *data) {
    LLnode *node = malloc(sizeof(LLnode));
    node->next = NULL;
    node->data = data;
    return node;
}

int is_empty(Queue *q) {
    if (!q->front) {
        q->back = NULL;
        return 1;
    }
    return 0;
}

void enqueu(Queue *q, LLnode *curr) {
    if (is_empty(q)) {
        q->front = curr;
        q->back = curr;
    } else {
        q->back->next = curr;
        q->back = curr;
    }
}

LLnode * dequeue(Queue *q) {
    LLnode *t = q->front;
    q->front = q->front->next;
    return t;
}

void levelOrder(Node *root) {
    Queue *q = malloc(sizeof(Queue));
    q->front = NULL;
    q->back = NULL;
    if (root) {
        LLnode *r = newLLnode(root);
        enqueu(q, r);
    }
    while (!is_empty(q)) {
        LLnode *c = dequeue(q);
        if (c->data->left) {
            LLnode *l = newLLnode(c->data->left);
            enqueu(q, l);
        }
        if (c->data->right) {
            LLnode *r = newLLnode(c->data->right);
            enqueu(q, r);
        }
        printf("%d ", c->data->data);
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
    levelOrder(root);
    return 0;
}
