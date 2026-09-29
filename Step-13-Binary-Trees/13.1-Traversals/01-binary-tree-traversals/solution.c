#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *left, *right; };
struct Node* create(int val) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = val; n->left = n->right = NULL; return n;
}
void inorder(struct Node* root) {
    if (!root) return;
    inorder(root->left); printf("%d ", root->data); inorder(root->right);
}
int main() {
    struct Node* root = create(1);
    root->left = create(2); root->right = create(3);
    printf("Inorder: "); inorder(root); printf("\n");
    return 0;
}
