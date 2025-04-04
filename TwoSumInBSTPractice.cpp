#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class BinaryTreeNode{
    public:
        T data;
        BinaryTreeNode<T>* left;
        BinaryTreeNode<T>* right;

        BinaryTreeNode(T data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};


void inorder(BinaryTreeNode<int>* root, vector<int>& in){
    if(root == NULL){
        return ;
    }

    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right, in);

}

bool sumInBST(BinaryTreeNode<int>* root, int target){
    vector<int> inorderVal;

    inorder(root,inorderVal);

    int i = 0, j= inorderVal.size()-1;

    while(i<j){
        int sum = inorderVal[i] + inorderVal[j];
        
        if(sum > target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;

}

BinaryTreeNode<int>* insertBST(BinaryTreeNode<int>* root,int data){
    if(root == NULL){
        return new BinaryTreeNode<int>(data);
    }
    if(data < root->data){
        root->left = insertBST(root->left,data);
    }
    else{
        root->right = insertBST(root->right,data);
    }
}

int main(){
    BinaryTreeNode<int>* root = NULL;

    root = insertBST(root,5);
    insertBST(root,8);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,5);
    insertBST(root,6);
    insertBST(root,2);

    int target = 9;

    if(sumInBST(root,target)){
        cout<<"Pair found with sum "<<target<<endl;
    }
    else{
        cout<<"Pair not found with sum "<<target<<endl;
    }
    return 0;
}

