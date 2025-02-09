// #include<iostream>
// #include<queue>
// using namespace std;

// class node{
//     public:
//         int data;
//         node* left;
//         node* right;

//     node(int d){
//         this ->data = d;
//         this ->left = NULL;
//         this ->right = NULL;
//     }
// };

// node* buildTree(node* root){
//     cout<<"Enter the data: "<<endl;
//     int data;
//     cin>>data;

//     root = new node(data);

//     if(data == -1){
//         return NULL;
//     }

//     cout<<"Enter the data for inserting in left of "<<data<<endl;
//     root->left = buildTree(root->left);
//     cout<<"Enter the data for inserting in right of "<<data<<endl;
//     root->right = buildTree(root->right);

//     return root;
// };

// void levelOrderTraversal(node* root){
//     queue<node*> q;
//     q.push(root);

//     while(!q.empty()){
//         node* temp = q.front();
//         q.pop();

//         if(temp == NULL){
//             //purana level complete traverse ho chuka h
//             cout<<endl;
            
//             if(!q.empty()){
//                 //queue still has some child nodes
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout<<temp->data<<endl;
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }

//         }

//     }

// }

// int main(){
//     node* root = NULL;

//     root = buildTree(root);

//     // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
//     cout<<"Printing the level of traversal: "<<endl;
//     levelOrderTraversal(root);
// }


#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
    node* buildTree(node* root){
        cout<<"Enter the data: "<<endl;
        int data;
        cin>>data;

        root = new node(data);

        if(data == -1){
            return NULL;
        }
        else{
            cout<<"Enter the data inserting left of: "<<endl;
            root->left = buildTree(root->left);
            cout<<"Enter the data inserting right of: "<<endl;
            root->right = buildTree(root->right);

            return root;
        }
};

void levelOrderTreaversal(node* root){
    queue <node*>q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data <<endl;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void InOrder(node* root){
    //base case
    if(root == NULL){
        return ;
    }
    
    InOrder(root->left);
    cout<<root->data<<" "<<endl;
    InOrder(root->right);
}

void preorder(node* root){
    //base case
    if(root == NULL){
        return;
    }

    cout<<root->data<<" "<<endl;
    preorder(root->left);
    preorder(root->right);
}

void postOrder(node* root){
    //base case
    if(root== NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" "<<endl;
}
void buildFromLevelOrder(node* &root){
    queue<node*>q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp ->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right data for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }

}

int main(){

    node* root = NULL;

    // root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    // cout<<"Printing the levelOrderTraversal: "<<endl;
    // levelOrderTreaversal(root);

    // cout<<"Inorder Traversal is: "<<endl;
    // InOrder(root);

    // cout<<"Preorder Traversal is: "<<endl;
    // preorder(root);

    // cout<<"Postorder Traversal is: "<<endl;
    // postOrder(root);

    buildFromLevelOrder(root);
    levelOrderTreaversal(root);

}