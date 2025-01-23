// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void InsertAtHead(Node* &head, int t){
//     Node* temp = new Node(t);
//     temp->next = head;
//     head = temp;
// }

// void InsertAtTail(Node* &tail, int t){
//     Node* temp = new Node(t);
//     tail->next = temp;
//     tail = temp;
// }

// void InsertAtPosition(Node* &tail, Node* &head, int position, int d){
//     if(position == 1){
//         InsertAtHead(head, d);
//         return;
//     }

//     Node* temp = head;
//     int cnt = 1;

//     while(cnt < position - 1){
//         temp = temp->next;
//         cnt++;
//     }

//     // Insert at the last position
//     if(temp->next == NULL){
//         InsertAtTail(tail, d);
//         return;
//     }

//     Node* nodeToInsert = new Node(d);
//     nodeToInsert->next = temp->next;
//     temp->next = nodeToInsert;
// }

// void print(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main(){
//     Node* node1 = new Node(10);

//     Node* head = node1;
//     Node* tail = node1;

//     print(head);
//     InsertAtTail(tail, 13);

//     print(head);
//     InsertAtTail(tail, 15);
//     print(head);

//     InsertAtPosition(tail, head, 2, 5);
//     print(head);

//     return 0;
// }



#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node* &head, Node* &tail, int position, int d){

    if(position == 1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return ;
    }
    Node* nodeToStart = new Node(d);
    nodeToStart->next = temp->next;
    temp->next = nodeToStart;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node = new Node(10);
    Node* head = node;
    Node* tail = node;

    print(head);
    InsertAtTail(tail,12);
    print(head);
    InsertAtTail(tail,14);

    print(head);
    InsertAtPosition(head,tail,3,5);
    print(head);
}