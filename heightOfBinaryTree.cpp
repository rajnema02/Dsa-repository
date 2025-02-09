// #include<iostream>
// using namespace std;

// class Node{
//     public:
//         //function to find the height of binary tree
//         int height(struct Node* node){
//             //base case
//             if(node == NULL){
//                 return 0;
//             }
            
//             int left = height(node->left);
//             int right = height(node->right);

//             int ans = max(left,right)+1;
//             return ans;
//         }
// };

// int main(){
//     return 0;
// }



#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    
    Node(int val){
        this->data= val;
        this->left = NULL;
        this->right = NULL;
    }

    int hightOfTree(Node* root){
        if(root == NULL){
            return 0;
        }

        int left = hightOfTree(root->left);
        int right = hightOfTree(root->right);

        int ans = max(left,right)+1;
    }
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->left->right = new Node(5);

    cout<<"The height of the binary tree: "<<root->hightOfTree(root)<<endl;
}