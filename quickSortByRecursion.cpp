#include<iostream>
using namespace std;

int position(int arr[],int s ,int e){
    int pivot = arr[s];

    int cnt = 0;
    for(int i = 0; i<e; i++){
        if(arr[i]<=pivot);
        cnt++;
    }

    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);

    int i = s, j = e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex;

}

void quickSort(int arr[],int s,int e){

    if(s>=e){
        return;
    }

    int p = position(arr,s,e);


    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){
    int arr[6]={2,6,8,3,4,1};
    int size = 6;

    quickSort(arr,0,size-1);

    for(int i=0; i<size-1; i++){
        cout<<arr[i]<<" ";
    }
}