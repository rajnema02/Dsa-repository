// #include<iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;

//     Node(int val){
//         this->data = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// class Solution{
    
//     private:
//         int heightOfTree(Node* root){
//             if(root== NULL){
//                 return 0;
//             }

//             int leftHeight = heightOfTree(root->left);
//             int rightHeight = heightOfTree(root->right);

//             int answer = max(leftHeight,rightHeight);
//             return answer;
//         }
//     public:
//         int diameter(Node* root){
//             //base Case
//             if(root == NULL){
//                 return 0;
//             }

//             int opt1 = diameter(root->left);
//             int opt2 = diameter(root->right);

//             int opt3 = heightOfTree(root->left) + heightOfTree(root->right) + 1;

//             int ans = max(opt1, max(opt2, opt3));

//             return ans;
//         }
// };

// int main(){

//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     Solution sol;
//     cout<<"Diameter of the binary Tree is: "<<sol.diameter(root)<<endl;


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
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution{
    public:
        pair<bool,int> isBalancedFast(Node* root){
            if(root == NULL){
                pair<bool,int> p = make_pair(true,0);
                return p;
            }
            pair<bool, int> left= isBalancedFast(root-> left);
            pair<bool, int> right = isBalancedFast(root->right);


            bool leftAns = left.first;
            bool rightAns = right.first;

            bool diff = abs(left.second - right.second) <=1;

            pair<bool ,int > ans;
            ans.second = max(left.second, right.second) + 1;

            if(leftAns && rightAns && diff){
                ans.first = true;
            }
            else{
                ans.first = false;
            }
            return ans;
        }

        bool isBalanced(Node* root){
            return isBalancedFast(root).first;
        }
   
};

int main(){
 // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);
    root->left->right->left = new Node(7);

    Solution sol;
    if (sol.isBalanced(root)) {
        cout << "The tree is balanced." << endl;
    } else {
        cout << "The tree is not balanced." << endl;
    }

    return 0;
}