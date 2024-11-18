// #include<iostream>
// using namespace std;

// int selection(int arr[], int n){
//     for(int i = 0; i< n-1; i++){
//         int minIndex = i;

//         for(int j = i+1; j<=n; j++){
//             if(arr[j] < arr[minIndex])
//                 minIndex = j;
//         }
//         swap(arr[minIndex], arr[i]);
//     }
// }

// int printSort(int arr[],int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[4] = {25,7,62,78};

//     selection(arr, 4);
//     printSort(arr,4);

// }


#include<iostream>
using namespace std;

int selectionSort(int arr[],int n){
    for(int  i =0; i<n; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]< arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int printArr(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {2,56,7,8,65};
    selectionSort(arr,5);
    printArr(arr, 5);
}