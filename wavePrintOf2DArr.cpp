#include<iostream>
using namespace std;

int wavePrint(int arr[][3], int nRow, int mCol){
    for(int col=0; col<mCol; col++){
        if( col&1 ){
            for(int row =nRow-1; row>=0; row-- ){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row = 0; row<=nRow; row++){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}

int main(){

    int ar[3][3];

    cout<<"Enter the element you print"<<endl;
    for(int i = 0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>ar[i] [j];
        }
    }

    cout<<"The wavePrint is here: "<<wavePrint(ar,3,3);

}