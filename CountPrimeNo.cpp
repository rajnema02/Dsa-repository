#include<iostream>
using namespace std;

bool primeNumber(int n){

    if(n<=1){
        return false;
    }
    int count=0;
    for(int i=2;i<n; i++){
        if(n%i == 0){
            count++;
        }
        cout<<"The prime number is come in "<<count<<" times"<<endl;
        return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the number you wan't to know it is prime or not"<<endl;
    cin>>n;


    if(primeNumber(n)){
        cout<< "It is a prime number"<<endl;
    }
    else{
        cout<<"It is not the prime number"<<endl;
    }
    return 0;
}