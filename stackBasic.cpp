// #include<iostream>
// using namespace std;

// class Stack{
//     public:
//         int *arr;
//         int top;
//         int size;

//     Stack(int size){
//         this ->size = size;
//         arr = new int[size];
//         top = -1;
//     }

//     void push(int element){
//         if(size - top > 1){
//             top ++;
//             arr[top] = element;
//         }
//         else{
//             cout<<"Stack Overflow"<<endl;
//         }
//     }

//     void pop(){
//         if(top >= 0){
//             top--;
//         }
//         else{
//             cout<<"Stack Underflow"<<endl;
//         }
//     }

//     int peek(){
//         if(top>=0){
//             return arr[top];
//         }
//         else{
//             cout<<"stack is empty"<<endl;
//             return -1;
//         }
//     }

//     bool empty(){
//         if(top == -1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

// int main(){

//     Stack st(5);
//     st.push(23);
//     st.push(45);
//     st.push(4);
//     st.pop();

//     cout<<st.peek()<<endl;
//     return 0;
// }



#include<iostream>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;

        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element){
            if(size-top >1){
                top ++;
                arr[top] = element;
            }
            else{
                cout<<"stack overflow"<<endl;
            }
        }
        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"stack underflow"<<endl;
            }
        }
        int peek(){
            if(top>=0){
                return arr[top];
            }
            else{
                cout<<"The stack is empty"<<endl;
            }
        }

        bool empty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
        }
};
int main(){

    Stack s1(5);
    s1.push(34);
    s1.push(55);
    s1.push(23);
    s1.pop();

    cout<<"Top is "<<s1.peek()<<endl;
    if(s1.empty()){
        cout<<"The stack is empty"<<endl;
    }
    else{
        cout<<"THe stack is not empty"<<endl;
    }
    return 0;
}