#include<iostream>
#include<stack>
#include<vector>

using namespace std; // Fix: Add this to use standard library types without std::

vector<int> nextSmallerElement(vector<int>& arr, int n) {

    stack<int> s;
    s.push(-1); // Initialize stack with -1 as there’s no smaller element after the last element
    vector<int> ans(n); // Create a vector of size `n` to store answers

    for (int i = n - 1; i >= 0; i--) { // Start from the last element of the array
        int curr = arr[i]; // Get the current element

        // Remove elements from the stack that are not smaller than the current element
        while (s.top() >= curr) {
            s.pop();
        }

        // The top element of the stack is the next smaller element
        ans[i] = s.top();

        // Push the current element onto the stack
        s.push(curr);
    }

    return ans;
}

int main() {
    // Example usage of the function
    vector<int> arr = {4, 2, 1, 5, 3};
    int n = arr.size();

    vector<int> result = nextSmallerElement(arr, n);

    cout << "Next smaller elements: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
