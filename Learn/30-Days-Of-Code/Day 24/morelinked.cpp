#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node *next;
        Node (int d) {
            data = d;
            next = NULL;
        }
};

class Solution {
    public:
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
            Node *p = new Node(data);
            Node **curr = &head;
            while (*curr) {
                curr = &(*curr)->next;
            }
            *curr = p;
            return head;
        }
        void display(Node *head) {
            Node *curr = head;
            while (curr) {
                cout << curr->data << " ";
                curr = curr->next;
            }
        }
};

int main() {
    Node *head = NULL;
    Solution mylist;
    int T, data;
    cin >> T;
    while (T-- > 0) {
        cin >> data;
        head = mylist.insert(head, data);
    }
    head = mylist.removeDuplicates(head);
    mylist.display(head);
    return 0;
}
