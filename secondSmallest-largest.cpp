#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n; 
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;

    if(n<2){
        cout<<"Array must have atleast 2 element"<<endl;
        return 0;
    }

    int arr[n];
    cout<<"Enter " <<n<<" element"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int smallest = INT_MAX, secondsmallest = INT_MAX;
    int largest = INT_MIN, secondlargest = INT_MIN;

    for(int i = 0; i<n ; i++){
        if(arr[i] < smallest){
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondsmallest && arr[i] != smallest){
            secondsmallest = arr[i];
        }

        if(arr[i]> largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i] != largest){
            secondlargest = arr[i];
        }
    }


    if(secondsmallest == INT_MAX)
        cout<<"No second smallest element (all elements may be the same)"<<endl;
    else
        cout<<"second smallest element "<<secondsmallest<<endl;


    if(secondlargest == INT_MIN)
        cout<<"No secondlargest element (all element may by the same)"<<endl;
    
    else{
        cout<<"Second largest element "<<secondlargest<<endl;
    }
    return 0;
}