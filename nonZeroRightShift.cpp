#include<iostream>

using namespace std;

// int zeroRight(int arr[],int n){
//     int nonZero = 0;
//     for(int j = 0; j<n; j++){
//         if(arr[j]!=0){
//             swap(arr[j],arr[nonZero]);
//             nonZero++;
//         }
//     }
// }
int zeroRight(int arr[],int n){
    int nonZero = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[nonZero]);
            nonZero++;
        }
    }
}
int printArr(int arr[],int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {3,0,5,0,0};

    zeroRight(arr,5);
    printArr(arr,5);
}