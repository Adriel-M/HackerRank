#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node * removeDuplicates(Node *head) {
    Node **curr = &head;
    while (*curr && (*curr)->next) {
        if ((*curr)->data == (*curr)->next->data) {
                Node *t = (*curr)->next;
                (*curr)->next = (*curr)->next->next;
                free(t);
                continue;
        }
        curr = &(*curr)->next;
    }
    return head;
}

Node * insert(Node *head, int data) {
    Node *p = malloc(sizeof(Node));
    p->data = data;
    p->next = NULL;
    Node **curr = &head;
    while (*curr) {
        curr = &(*curr)->next;
    }
    *curr = p;
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
    head = removeDuplicates(head);
    display(head);
    return 0;
}
