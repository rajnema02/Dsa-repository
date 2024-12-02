#include<iostream>
using namespace std;

void reverseString(string &arr,int s, int e){

    if(s>e){
        return ;
    }

    swap(arr[s],arr[e]);
    s++;
    e--;
    reverseString(arr,s,e);

}

int main(){
    string arr="Babbar";

    reverseString(arr,0,arr.length()-1);

    cout<<"The string is "<<arr;

}