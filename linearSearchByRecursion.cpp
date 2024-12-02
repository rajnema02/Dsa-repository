#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size,int key){
    if(size == 0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr+1,size-1, key);
        return remainingPart;
    }
}

int main(){
    int arr[5]={1,4,7,9,6};
    int size = 5;
    int key = 2;

    bool ans =  linearSearch(arr,size,key);
    if(ans){
        cout<<"The element is found"<<endl;
    }
    else{
        cout<<"The element is not in the array"<<endl;
    }
}