#include<iostream>
using namespace std;

class MyAvg{
    public:
        int a = 10;
        int b = 20;

        MyAvg(){
            cout<<(a+b)/2;
        }
};

int main(){
    MyAvg myObj;
    return 0;
}