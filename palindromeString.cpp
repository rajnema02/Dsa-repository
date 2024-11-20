#include<iostream>
using namespace std;

bool palindromeOrNot(char name[],int n){
    int s= 0;
    int e = n-1;

    while(s<e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;

}
int getLength(char name[]){
    int count =0;
    for(int i =0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];

    cout<<"Enter the name you want palindrome"<<endl;
    cin>>name;

    int len = getLength(name);
    cout<<"The length of the string is: "<<len<<endl;

    
    cout<<"Palindrome or not: "<<palindromeOrNot(name,len)<<endl;
}