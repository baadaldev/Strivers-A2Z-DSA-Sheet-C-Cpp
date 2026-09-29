#include <stdio.h>
#include <stdlib.h>

struct Node { int val; struct Node* next; };

struct Node* middleNode(struct Node* head) {
    struct Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main() {
    struct Node* h = (struct Node*)malloc(sizeof(struct Node)); h->val = 1;
    h->next = (struct Node*)malloc(sizeof(struct Node)); h->next->val = 2;
    h->next->next = (struct Node*)malloc(sizeof(struct Node)); h->next->next->val = 3;
    h->next->next->next = NULL;
    printf("Middle: %d\n", middleNode(h)->val);
    return 0;
}
