#include<iostream>
#include<stack>
#include<vector>

using namespace std;

class Solution {
    private:
        // Function to check if person `a` knows person `b`
        bool knows(vector<vector<int>>& M, int a, int b) {
            return M[a][b] == 1;
        }

    public:
        int celebrity(vector<vector<int>>& M, int n) {
            stack<int> s;

            // Step 1: Push all candidates into the stack
            for (int i = 0; i < n; i++) {
                s.push(i);
            }

            // Step 2: Compare top two candidates to find a potential celebrity
            while (s.size() > 1) {
                int a = s.top();
                s.pop();

                int b = s.top();
                s.pop();

                if (knows(M, a, b)) {
                    // If `a` knows `b`, then `a` cannot be the celebrity
                    s.push(b);
                } else {
                    // If `a` does not know `b`, then `b` cannot be the celebrity
                    s.push(a);
                }
            }

            // Step 3: Single candidate left in the stack is a potential celebrity
            int ans = s.top();
            s.pop();

            // Verify if the candidate is a real celebrity
            // Check row for all 0's (celebrity does not know anyone)
            for (int i = 0; i < n; i++) {
                if (M[ans][i] == 1) { // If the celebrity knows someone
                    return -1;
                }
            }

            // Check column for all 1's except self (everyone knows the celebrity)
            for (int i = 0; i < n; i++) {
                if (i != ans && M[i][ans] == 0) { // If someone does not know the celebrity
                    return -1;
                }
            }

            return ans; // Candidate is the celebrity
        }
};

int main() {
    Solution sol;

    // Example input
    vector<vector<int>> M = {
        {0, 1, 0},
        {0, 0, 0},
        {0, 1, 0}
    };
    int n = 3;

    int result = sol.celebrity(M, n);

    if (result == -1) {
        cout << "No celebrity found." << endl;
    } else {
        cout << "The celebrity is: " << result << endl;
    }

    return 0;
}
