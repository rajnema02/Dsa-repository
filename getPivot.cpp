#include<iostream>
using namespace std;

int getPivot(int arr[], int size){
    int s = 0;
    int e = size-1;
    int mid = s +(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            s=mid;
        }
        mid = s +(e-s)/2;
    }
    return s;
}
int main(){
    int pivot[5] = {1,3,5,6,7};

    cout<<"pivot element is  "<<getPivot(pivot,5)<<endl;
}