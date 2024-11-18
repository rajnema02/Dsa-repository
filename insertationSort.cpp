#include<iostream>
using namespace std;

int insertionSort(int arr[],int n){
    for(int i=1; i<=n; i++){
        int temp = arr[i];
        int j=i-1;
        for(; j>=0 ;  j--){
            if(arr[j]> temp){
                arr[j+1]  = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int printArr(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {2,5,66,1,6};

    insertionSort(arr,5);
    printArr(arr,5);
}