#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to insert a node into the BST
Node* insertIntoBST(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insertIntoBST(root->left, data);
    } else {
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}

// Function to search for a value in BST
bool searchInBST(Node* root, int x) {
    // Base case
    if (root == NULL) {
        return false;
    }

    if (root->data == x) {
        return true;
    }

    if (root->data > x) {
        return searchInBST(root->left, x);
    } else {
        return searchInBST(root->right, x);
    }
}

int main() {
    Node* root = NULL;

    // Inserting nodes into the BST
    root = insertIntoBST(root, 50);
    root = insertIntoBST(root, 30);
    root = insertIntoBST(root, 70);
    root = insertIntoBST(root, 20);
    root = insertIntoBST(root, 90);
    root = insertIntoBST(root, 60);
    root = insertIntoBST(root, 80);

    // Searching for values
    int key = 40;
    if (searchInBST(root, key)) {
        cout << key << " is present in the BST.\n";
    } else {
        cout << key << " is not found in the BST.\n";
    }

    key = 90;
    if (searchInBST(root, key)) {
        cout << key << " is present in the BST.\n";
    } else {
        cout << key << " is not found in the BST.\n";
    }

    return 0;
}



