#include<iostream>
#include<stack>
#include<vector>
#include<climits> // For INT_MIN

using namespace std;

class Solution {
    private:
        vector<int> nextSmallerElement(vector<int>& arr, int n) {
            stack<int> s;
            s.push(-1);
            vector<int> ans(n);

            for (int i = n - 1; i >= 0; i--) {
                int curr = arr[i];

                while (s.top() != -1 && s.top() >= curr) {
                    s.pop();
                }

                ans[i] = s.top();
                s.push(curr);
            }
            return ans;
        }

        vector<int> prevSmallerElement(vector<int>& arr, int n) {
            stack<int> s;
            s.push(-1);
            vector<int> ans(n);

            for (int i = 0; i < n; i++) {
                int curr = arr[i];

                while (s.top() != -1 && s.top() >= curr) {
                    s.pop();
                }

                ans[i] = s.top();
                s.push(curr);
            }
            return ans;
        }

        int largestRectangleArea(vector<int>& heights) {
            int n = heights.size();

            vector<int> next = nextSmallerElement(heights, n);
            vector<int> prev = prevSmallerElement(heights, n);

            int area = INT_MIN;

            for (int i = 0; i < n; i++) {
                int l = heights[i];

                if (next[i] == -1) {
                    next[i] = n;
                }

                int b = next[i] - prev[i] - 1;
                int newArea = l * b;
                area = max(area, newArea);
            }

            return area;
        }

    public:
        int maxArea(vector<vector<int>>& M, int n, int m) {
            // Compute area for the first row
            vector<int> heights = M[0];
            int area = largestRectangleArea(heights);

            for (int i = 1; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    // Row update: Add the value from the previous row
                    if (M[i][j] != 0) {
                        M[i][j] += M[i - 1][j];
                    } else {
                        M[i][j] = 0;
                    }
                }

                // Entire row is updated; calculate area for the current row
                area = max(area, largestRectangleArea(M[i]));
            }

            return area;
        }
};

int main() {
    Solution sol;

    // Example input
    vector<vector<int>> M = {
        {1, 0, 1, 0, 0},
        {1, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 1, 0}
    };

    int n = M.size();
    int m = M[0].size();

    int result = sol.maxArea(M, n, m);
    cout << "The maximum rectangle area is: " << result << endl;

    return 0;
}
