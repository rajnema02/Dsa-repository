#include<iostream>
using namespace std;

int rotateArr(int arr[],int n,int k){
    int temp;
    for(int i=0; i<n; i++){
        temp[(i+k)%n] = arr[i];
    }
    n=temp;
}
int printArr(int arr3[],int n){
    for(int i=0; i<n; i++){
        cout<<arr3[i]<<" ";
    }
}

int main(){
    int arr[4]={2,4,6,7};
    
    rotateArr(arr,4,3);
    printArr(arr,4);
}