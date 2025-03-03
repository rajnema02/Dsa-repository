#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int val){
        this->data = val;
        this->left =NULL;
        this->right = NULL;
    }
};

class Solution{
    public:

        void createMapping(int in[],map<int,int> &nodeToIndex,int n){
            for(int i= 0; i<n; i++){
                nodeToIndex[in[i]] = i;
            }
        }

        Node* solve(int in[],int pre[],int &index, int inorderStart, int inorderEnd,int n, map<int,int> &nodeToIndex){
            
            if(index<0 || inorderStart > inorderEnd){
                return NULL;
            }

            int element = pre[index--];
            Node* root = new Node(element);

            int position = nodeToIndex[element];

            root->left = solve(in,pre,index,inorderStart,position-1,n,nodeToIndex);
            root->right = solve(in, pre,index,position+1,inorderEnd,n,nodeToIndex);

        }

        Node* buildTree(int pre[],int in[],int n){
            int preOrderIndex = 0;
            map<int,int> nodeToIndex;
            createMapping(in,nodeToIndex,n);
            Node* ans = solve(in, pre, preOrderIndex, 0, n-1, n, nodeToIndex);
            return ans;

        }
};