#include<iostream>
#include<queue>

int getKthLargestSubarray(vector<int> & arr,int k){
    priority_queue< int, vector<int>, greater<int> > mini;

    int n = arr.size();
    for(int i = 0; i<n; i++){
        int sum = 0; 
        for(int j = i ; j<n; j++){
            sum += arr[j];
            
        }
    }
}