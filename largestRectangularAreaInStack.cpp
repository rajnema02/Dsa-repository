#include<iostream>
#include<stack>
#include<vector>

using namespace std;

class solution{
    private:
        vector<int> nextSmallerElement(vector<int>& arr,int n){

            stack<int> s;
            s.push(-1);
            vector<int> ans(n);

            for(int i = n-1; i>=0; i++){
                int curr = arr[i];

                while(s.top()>=curr){
                    s.pop();
                }

                ans[i] = s.top();

                s.push(curr);
            }
        return ans;
        }

        vector<int> prevSmallElement(vector<int>& arr,int n){

            stack<int> s;
            s.push(-1);
            vector<int> ans(n);

            for(int i=0; i<n-1; i++){
                int curr = arr[i];


                while(s.top()>=curr){
                    s.pop();
                }

                ans[i] = s.top();

                s.push(curr);
            }

            return ans;
        }

    public:
        int largestRectangleArea(vector<int>& heights){

            int n = heights.size();

            vector<int> next(n);
            next = nextSmallerElement(heights,n);

            vector<int> prev(n);
            prev = prevSmallElement(heights,n);

            int area = INT8_MIN;

            for(int i = 0; i<n; i++){
                int l = heights[i];

                if(next[i] == -1){
                    next[i] = n;
                }

                int b = next[i] - prev[i] -1;
                int newArea = l*b;
                area = max(area,newArea);
            }

            return area;

        }
};

int main(){

}