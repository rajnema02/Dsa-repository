#include<iostream>
using namespace std;

class Node{
    public:
        Node* left;
        Node* right;
        int data;

        Node(int val){
            this->left = NULL;
            this->right = NULL;
            this->data = val;
        }
};

class Solution{
    public:
        int countNodes(struct Node* root){
            //base case
            if(root == NULL){
                return 0;
            }
            int ans = 1 + countNodes(root->left) + countNodes(root->right);
            return ans;
        }
        bool isCBT(struct Node* root, int index, int cnt){
            if(root == NULL){
                return true;
            }
            if(index >= cnt){
                return false;
            }
            else{
                bool left= isCBT(root->left , 2*index +1, cnt);
                bool right = isCBT(root->right, 2*index + 2, cnt);
                return (left && right);
            }
        }

        bool isMaxOrder(struct Node* root){
            if(root->left == NULL && root->right == NULL){
                return true;
            }
            if(root->right == NULL){
                return (root->data > root->left->data);

            }
            else{
                bool left = isMaxOrder(root->left);
                bool right = isMaxOrder(root->right);
                return (left && right && (root->data > root->left->data && root->data > root->right->data));
            }
        }

        

        bool isHeap(struct Node* tree){
            int index = 0;
            int totalcount =countNodes(tree);

            return (isCBT(tree,index,totalcount) && isMaxOrder(tree));
        }
};

int main(){

    Node* root = new Node(10);
    root->left = new Node(9);
    root->right = new Node(8);
    root->left->left = new Node(7);
    root->left->right = new Node(6);
    // root->right->left = new Node(5);
    root->right->right = new Node(4);

    Solution sol;
    if(sol.isHeap(root)){
        cout<<"The given binary tree is heap."<<endl;
    }
    else{
        cout<<"The given binary tree is not heap"<<endl;
    }
    return 0;
}