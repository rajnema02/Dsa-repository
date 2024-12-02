#include<iostream>
using namespace std;

bool sortArray(int arr[],int size){
    
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart = sortArray(arr+1, size-1);
        return remainingPart;
    }
}

int main(){
    int arr[5]={1,3,5,7,8};

    int size = 5;

    int ans = sortArray(arr, size);

    if(ans){
        cout<<"The array is sorted"<<endl;
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }
}