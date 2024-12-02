#include<iostream>
using namespace std;

int update(int *p){
    *p = *p+1;
}

int getSum(int *arr,int n){

    cout<<endl<<"size: "<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    // int num = 5;
    // int *p = &num;

    // int **d = &p;

    // cout<<"p: "<<p<<endl;

    // cout<<"d: "<<**d;

    // int arr[5] ={12,34,56};
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<arr[0]<<endl;

    // cout<<*arr+1<<endl;
    // cout<<*(arr+1)<<endl;


    // int temp[5]={2,4};
    // cout<<sizeof(temp)<<endl;
    // cout<<sizeof(*temp)<<endl;
    // cout<<sizeof(&temp)<<endl;

    // int *ptr = &temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;

    char ch[8] ="abcd";
    char *c = &ch[8];

    cout<<"c: "<<*c;

//     int value = 5;
//     int *p = &value;

//     cout<<"Before: "<<*p<<endl;
//     update(p);
//     cout<<"after: "<<*p<<endl;


//     int arr[6]={1,7,4,6,3,9};

//     cout<<"sum: "<<getSum(arr+3,3)<<endl;
}