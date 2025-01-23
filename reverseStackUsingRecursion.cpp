#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s, int num){
    //base case
    if(s.empty()){
        s.push(num);
        return;
    }

    int num1 = s.top();
    s.pop();

    s.push(num1);

}

void reverseStack(stack<int>&s){
    //base case
    if(s.empty()){
        return;
    }

    int num = s.top();
    s.pop();

    //recursive call
    reverseStack(s);

    insertAtBottom(s,num);

}
int main(){

    string str = "babbar";

    stack<char>s;

    reverseStack(s,str.size());


}