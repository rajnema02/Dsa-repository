#include<iostream>
using namespace std;

bool isPossible(int arr[], &stalls, int k,int mid){
    int cowCount = 1;
    int lastPos = stalls[0];

    for(int i=0; i<stalls.size(); i++){
        if(arr[i]-lastPos >=mid){
            cowCount ++;
            if(cowCount==k){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[], int stalls, int k){
    sort(stalls.begin(), stalls.end());
    int s=0;
    int maxi = -1;
    for(int i=0; i<stalls; i++ ){
        maxi= max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(isPossible(arr,*stalls,k,mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}


int main(){
    int arr[4] = {2,4,5,6};
    int *stalls, k;

    int ac =  aggressiveCows(arr,&stalls,k); 

}
