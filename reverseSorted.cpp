#include<iostream>
using namespace std;

int reverseSort(int arr[],int n){
    int count =0;

    for(int i=0; i<n; i++){
        if(arr[i-1] >arr[i]){
            count++;
        }
    }
}
int printArr(int arr3[],int n){
    for(int i=0; i<n; i++){
        cout<<arr3[i]<<" ";
    }
}

int main(){
    int arr[5] = {2,4,9,3,6};

    reverseSort(arr,5);
    printArr(arr,5);
}