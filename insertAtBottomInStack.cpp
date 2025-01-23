#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int>& s, int x){

    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();

    solve(s,x);
    s.push(num);
}

stack<int> pushInBottom(stack<int> & myStack,int x){
    solve(myStack,x);
    return myStack;
}
int main(){
    return 0;
}