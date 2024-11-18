// #include<iostream>
// using namespace std;

// int reverseArray(int arr[],int n){
//     int s = 0;
//     int e = n-1;
//     while(s<=e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
// }

// int printArray(int arr[],int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[5] = {2,6,4,9,7};

//     reverseArray(arr,5);
//     printArray(arr,5);
// }



#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size()-1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

vector<int> printArr(vector<int> v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> v;

    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    v.push_back(1);
    v.push_back(2);

    vector<int> ans = reverse(v);

    printArr(ans);

}