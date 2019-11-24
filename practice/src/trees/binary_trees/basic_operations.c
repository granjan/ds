#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

int main() {
    struct node* root = (struct node*)malloc(sizeof(struct node));
    root->data = 10;
    root->left = NULL;
    root->right = NULL;
    printf("%d\n", root->data);
    return 0;
}
