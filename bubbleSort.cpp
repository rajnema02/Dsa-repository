#include<iostream>
using namespace std;

int bubbleSort(int arr[],int n){
    for(int i = 0; i<n-1; i++){
        for(int j= 0; j<=n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int printArr(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={23,5,7,85,4,1};
    
    bubbleSort(arr, 6);
    printArr(arr, 6);
}