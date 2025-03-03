#include<iostream>
#include<map>
using namespace std;


class Node{
    public:
        int data;
        Node*left, *right;

        Node(int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }
};

class Solution{
    public:

    // int findPosition(int in[],int element ,int n){
    //     for(int i=0; i<n; i++){
    //         if(in[i] == element){
    //             return i;
    //         }
    //     }
    //     return -1;
    // }

    void createMapping(int in[], map<int,int> &nodeToIndex, int n){
        for(int i = 0; i<n; i++){
            nodeToIndex[in[i]] = i;
        }
    }



    Node* solve(int in[],int pre[],int &index, int inorderStart,int inorderEnd, int n, map<int,int> &nodeToIndex){
        //base case
        if(index>=n || inorderStart > inorderEnd){
            return NULL;
        }

        int element = pre[index++];
        Node* root = new Node(element);
        // int position = findPosition(in ,element, n);
        int position = nodeToIndex[element];

        //recursive call
        root->left = solve(in, pre, index, inorderStart, position-1,n, nodeToIndex);
        root->right = solve(in, pre, index, position+1, inorderEnd,n, nodeToIndex);
        return root;
    }

    Node* buildTree(int in[],int pre[], int n){
        int preOrderIndex = 0;
        map<int,int> nodeToIndex;
        createMapping(in, nodeToIndex, n);
        Node* ans = solve(in, pre, preOrderIndex,0,n-1,n, nodeToIndex);
        return ans;
    }
};

void printInorder(Node* root){
    if(root == NULL){
        return ;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main(){
    int in[] = {4,2,5,1,6,3,7};
    int pre[] = {1,2,4,5,3,6,7};

    int n = sizeof(in) / sizeof(in[0]);

    Solution obj;
    Node* root = obj.buildTree(in, pre,n);

    cout<<"Inorder Traversal of the constructed tree: ";
    printInorder(root);
    cout<<endl;

    return 0;
}



