#include<iostream>
using namespace std;

bool binarySearchIntwoD(int arr[][4], int target){
    int row = arr.size();
    int col = arr[0].size();

    int start = 0;
    int end = row*col -1;

    int mid = start +(end-start)/2;
}



int main(){
    int arr[3][4];

    cout<<"Enter the element you print"<<endl;
    for(int i = 0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i] [j];
        }
    }

    int target;
    cout<<"Enter the element you want to find"<<endl;
    cin>>target;
    cout<<" "<<binarySearchIntwoD(arr,target);
}