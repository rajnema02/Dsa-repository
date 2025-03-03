#include<iostream>
#include<queue>
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

void levelOrderTraversal(Node* root) {
    if (root == NULL) return;
    
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}
void inorder(Node* root){
    //base case
    if(root == NULL){
        return ;
    }

    inorder(root->left);
    cout<< root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    //base case
    if(root == NULL){
        return ;
    }

    cout<< root->data <<" ";
    preorder(root->left);
    preorder(root->right);
}       

void postOrder(Node* root){
    //base case
    if(root == NULL){
        return ;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

Node* insertIntoBST(Node* root, int d) {
    if (root == NULL) {
        return new Node(d);
    }
    if (d > root->data) {
        root->right = insertIntoBST(root->right, d);
    } else {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

Node* takeInput() {
    int data;
    cin >> data;

    Node* root = NULL;
    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
    return root;
}

int main() {
    cout << "Enter data to create BST (-1 to stop):" << endl;
    Node* root = takeInput();

    cout << "Printing the BST:" << endl;
    levelOrderTraversal(root);

    cout<<"Printing the Inorder: "<<endl;
    inorder(root);

    cout<<"Printing the Preorder: "<<endl;
    preorder(root);

    cout<<"Printing the Postorder: "<<endl;
    postOrder(root);

    return 0;
}
