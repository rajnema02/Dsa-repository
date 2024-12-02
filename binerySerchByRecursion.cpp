#include<iostream>

using namespace std;

bool binarySearch(int arr[],int s ,int e ,int key){
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;

    if( arr[mid]== key){
        return true;
    }
    if( arr[mid] < key){
        return binarySearch(arr,mid+1 ,e , key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}
int main(){
    int arr[5]={1,5,7,12,23};
    int size = 5;
    int key = 9;

    int ans = binarySearch(arr, 0,4, key);

    if(ans){
        cout<<"The element is in the array"<<endl;
    }
    else{
        cout<<"The element is not present"<<endl;
    }
}