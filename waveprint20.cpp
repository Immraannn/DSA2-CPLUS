// In Wave Print, you print:

// 1st column: Top → Bottom
// 2nd column: Bottom → Top
// 3rd column: Top → Bottom
// and so on.

class Solution {
public:
    vector<int> wavePrint(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> ans;

        for (int j = 0; j < cols; j++) {

            // Even column: Top to Bottom
            if (j % 2 == 0) {
                for (int i = 0; i < rows; i++) {
                    ans.push_back(matrix[i][j]);
                }
            }
            // Odd column: Bottom to Top
            else {
                for (int i = rows - 1; i >= 0; i--) {
                    ans.push_back(matrix[i][j]);
                }
            }
        }

        return ans;
    }
};


// Row-wise Wave Print

// Print:

// 1st row: Left → Right
// 2nd row: Right → Left
// 3rd row: Left → Right
// and so on.

class Solution {
public:
    vector<int> wavePrint(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> ans;

        for (int i = 0; i < rows; i++) {

            // Even row: Left to Right
            if (i % 2 == 0) {
                for (int j = 0; j < cols; j++) {
                    ans.push_back(matrix[i][j]);
                }
            }
            // Odd row: Right to Left
            else {
                for (int j = cols - 1; j >= 0; j--) {
                    ans.push_back(matrix[i][j]);
                }
            }
        }

        return ans;
    }
};
