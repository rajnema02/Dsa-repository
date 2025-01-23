#include<iostream>
#include<stack>
using namespace std; 

void sortInserted(stack<int>& s,int n){
    //base case
    if(s.empty() || (!s.empty() && s.top()> n)){
        s.push(n);
        return;
    }

    int num = s.top();
    s.pop();

    sortInserted(s,n);
    s.push(num);
}

void sortStack(stack<int>& s){
    //base case
    if(s.empty()){
        return;
    }

    int num = s.top();
    s.pop();

    sortStack(s);

    sortInserted(s,num);
}

int main(){

}