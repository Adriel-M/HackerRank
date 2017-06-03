#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node * insert(Node *head, int data) {
    Node **curr = &head;
    while (*curr) {
        curr = &((*curr)->next);
    }
    Node *n = calloc(1, sizeof(Node));
    n->data = data;
    n->next = NULL;
    *curr = n;
    return head;
}

void display(Node *head) {
    Node *start = head;
    while (start) {
        printf("%d ", start->data);
        start = start->next;
    }
}

int main() {
    int T, data;
    scanf("%d", &T);
    Node *head = NULL;
    while (T-- > 0) {
        scanf("%d", &data);
        head = insert(head, data);
    }
    display(head);
}
