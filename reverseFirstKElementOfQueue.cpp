#include<iostream>
#include<stack>
#include<queue>
using namespace std;

// queue <int> rev(queue <int>q, int k){
//     // pop first k from queue into stack
//     stack<int>s;

//     for(int i=0; i<k; i++){
//         int val = q.front();
//         q.pop();
//         s.push(val);
//     }

//     //fetch from stack and push into a queue
//     while(!s.empty()){
//         int val = s.top();
//         s.pop();
//         q.push(val);
//     }

//     //fetch first (n-k) element from q and push back
//     int t= q.size()-k;

//     while(t--){
//         int val = q.front();
//         q.pop();
//         q.push(val);
//     }
//     return q;
// }

queue <int> rev(queue <int> q,int k){

    stack<int> s;

    for(int i = 0; i<k; i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }

    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }

    int t = q.size()-k;

    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}



int main(){

}