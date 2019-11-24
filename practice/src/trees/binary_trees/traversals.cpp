#include <iostream>
#include <queue>

using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node (int data) {
        this->data = data;
        left = right = NULL;
    }
};

void preOrder(struct Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << "\t";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(struct Node* root) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left);
    cout << root->data << "\t";
    inOrder(root->right);
}

void postOrder(struct Node* root) {
    if (root == NULL) {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << "\t";
}

void levelOrdeTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while(!q.empty()) {
        struct Node* temp = q.front();
        q.pop();
        cout << temp->data << "\t";
        if (temp->left) {
            q.push(temp->left);
        }
        if (temp->right) {
            q.push(temp->right);
        }
    }
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    preOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    levelOrdeTraversal(root);
    cout << endl;
    return 0;
}
