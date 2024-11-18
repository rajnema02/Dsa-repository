#include<iostream>
using namespace std;

int mergeArr(int arr1[],int n, int arr2[], int m, int arr3[]){
    int i=0; int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<n){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}



int printArr(int arr3[],int n){
    for(int i=0; i<n; i++){
        cout<<arr3[i]<<" ";
    }
}
int main(){
    int arr1[5] ={1,3,5,7,9};
    int arr2[4] ={2,4,6,8};

    int arr3[9] = {0};

    mergeArr(arr1,5,arr2,4,arr3);
    printArr(arr3,9);
}