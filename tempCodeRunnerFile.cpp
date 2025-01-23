#include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this ->data = data;
//         this ->next = NULL;
//     }
// };

// int InsertAtHead(Node* &head, int t){
//     Node* temp = new Node(12);
//     temp->next = head;
//     head = temp;
// }

// int InsertAtTail(Node* &tail, int t){
//     Node* temp = new Node(14);
//     tail->next = temp;
//     tail = temp;
// }
// int print(Node* &head){
//     Node* temp = head;

//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     Node* node1 = new Node(10);
//     // cout<<node1->data<<endl;
//     // cout<<node1->next<<endl;

//     Node* head = node1;
//     Node* tail = node1;

//     print(head);
//     InsertAtTail(tail,13);

//     print(head);
//     InsertAtTail(tail,15);
//     print(head);
//     return 0;
// }