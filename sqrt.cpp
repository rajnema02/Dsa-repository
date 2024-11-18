#include<iostream>
using namespace std;

int binarySearch(int n){
    int s = 0;
    int e = n-1;
    long long int mid = s +(e-s)/2;

    long long int ans = -1;
    while(s<=e){
        long long int square = mid*mid;

        if(square == n){
            return mid;
        }
        if(square < n){
            ans= mid;
            s= mid+1;
        }
        else{
            e= mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++){
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor){
            ans = j;
        }
        return ans;
    }
}

int main(){
    int x;
    cout<<"Enter the number which you wan't to the sqareroot"<<endl;
    cin>>x;

    int tempSol = binarySearch(x);

    int precision = morePrecision(x, 3, tempSol);

    cout<<"The sqrt of the number is"<<precision<<endl;
    return  0;
}