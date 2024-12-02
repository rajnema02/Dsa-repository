#include<iostream>
using namespace std;

bool isPalindrome(string str,int i,int j){
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        return isPalindrome(str,i+1,j-1);
    }
}

int main(){
    string str = "abbccbba";

    bool checkPalindrome = isPalindrome(str,0,str.length()-1);

    if(checkPalindrome){
        cout<<"The string is palindrome"<<endl;
    }
    else{
        cout<<"The string is not palindrome"<<endl;
    }
}