#include<iostream>
using namespace std;

int main(){
    string str, reversed = "";
    cout<<"Enter the string";
    cin>>str;

    for(int i = str.length()-1; i>=0; i--){
        reversed += str[i];
    }

    cout<<"reversed string is "<<reversed;
}