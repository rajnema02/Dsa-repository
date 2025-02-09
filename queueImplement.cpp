#include<iostream>
using namespace std;

class queue{
    int *arr;
    int qfront;
    int rear;
    int size;

    public:
        queue(){
            size = 100001;
            arr = new int[size];
            qfront = 0;
            rear = 0;
        }

        bool isEmpty(){
            if(qfront == rear){
                return true;
            }
            else{
                return false;
            }
        }

        void enqueue(int data){
            if(rear == size){
                cout<<"The queue is full";
            }
            else{
                arr[rear] = data;
                rear++;
            }
        }

        int dequeue(){
            if(qfront == rear){
                return -1;
            }
            else{
                int ans = arr[qfront];
                arr[qfront]= -1;
                qfront++;
                if(qfront == rear){
                    qfront =0;
                    rear =0;
                }
                return ans;
            }
        }

        int front(){
            if(qfront == rear){
                return -1;
            }
            else{
                return arr[qfront];
            }
        }
        ~queue(){
            delete[] arr;
        }
};

int main(){

    queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.front() << endl; // Should print 10

    cout << "Dequeued: " << q.dequeue() << endl;   // Should print 10
    cout << "Dequeued: " << q.dequeue() << endl;   // Should print 20

    cout << "Front element: " << q.front() << endl; // Should print 30

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl; // Should print No

    cout << "Dequeued: " << q.dequeue() << endl;   // Should print 30
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl; // Should print Yes

    return 0;

}