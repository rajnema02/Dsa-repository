#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start +(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}
int main(){
    int even[6]= {2,4,5,6,7,8};
    int odd[5] = {2,4,5,6,7};

    int evenIndex = binarySearch(even, 6,7);
    cout<<"7 is at index "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd,5,5);
    cout<<"5 is at index "<<oddIndex<<endl;
}