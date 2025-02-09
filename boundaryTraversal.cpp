#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    
    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution{
    public:
        void TraversalLeft(Node* root,vector<int>& ans){
            if((root==NULL) || (root->left ==NULL && root->right == NULL)){
                return ;
            }
            ans.push_back(root->left);

            if(root->left){
                TraversalLeft(root->left,ans);
            }
            else{
                TraversalLeft(root->right,ans);
            }
        }

        void TraverseLeaf(Node* root,vector<int>& ans){
            if(root==NULL){
                return ;
            }

            if(root->left == NULL && root->right== NULL){
                ans.push_back(root->data);
                return ;
            }
            TraverseLeaf(root->left,ans);
            TraverseLeaf(root->right,ans);
        }

        void TraverseRight(Node* root,vector<int>&ans){
            if((root == NULL) || (root->left == NULL && root->right == NULL)){
                return ;
            }

            if(root->right){
                TraverseRight(root->right,ans);
            }
            else{
                TraverseRight(root->left,ans);
            }
            ans.push_back(root->data);
        }

        vector<int> boundary(Node* root){
            vector<int> ans;
            if(root == NULL){
                return ans;
            }

            ans.push_back(root->data);


            TraversalLeft(root->left,ans);

            //travers leaf
            TraverseLeaf(root->left,ans);

            TraverseLeaf(root->right,ans);

            TraverseRight(root->right,ans);

            return ans;
        }
};

int main(){

}