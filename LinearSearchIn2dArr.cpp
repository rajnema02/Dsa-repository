#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int n, int m){
    for(int i =0; i<3; i++){
        for(int j = 0; j<4; j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
int printSum(int arr[][4], int n,int m){
    cout<<"printing sum ->";
    for(int i =0; i<3; i++){
        int sum=0;
        for(int j = 0; j<4; j++){
            sum += arr[i][j];
        }
        cout<<sum<< " ";
    }
}

int main(){
    int arr[3][4];

    cout<<"Enter the element you print"<<endl;
    for(int i = 0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i] [j];
        }
    }

    for(int i = 0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i] [j]<<" ";
        }
        cout<<endl;
    }
    

    int target;
    cout<<"Enter the elemnt you want to search"<<endl;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"the number is found"<<endl;
    }
    else{
        cout<<"The number is not exist"<<endl;
    }

    printSum(arr,3,4);
}