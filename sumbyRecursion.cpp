#include<iostream>
using namespace std;

int sumArr(int *arr,int size){

    //base case
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    else{
        int remainingPart = sumArr(arr+1, size-1);
        int sum = arr[0] +remainingPart; 
        return sum;
    }
}

int main(){
    int arr[5]={1,4,6,76,3};

    int size = 5;

    int sum = sumArr(arr,size);
    cout<<"The sum is "<<sum<<endl;
}