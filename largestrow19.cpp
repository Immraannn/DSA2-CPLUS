class Solution {
public:
    int largestRow(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int maxSum = INT_MIN;
        int rowIndex = -1;
        for (int i = 0; i < rows; i++) {
            int sum = 0;
            for (int j = 0; j < cols; j++) {
                sum += matrix[i][j];
            }
            if (sum > maxSum) {
                maxSum = sum;
                rowIndex = i;
            }
        }
        return rowIndex;   // Returns index of the row with the largest sum
    }
};


class Solution {
public:
    pair<int, int> largestRow(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        int maxSum = INT_MIN;
        int rowIndex = -1;

        for (int i = 0; i < rows; i++) {
            int sum = 0;

            for (int j = 0; j < cols; j++) {
                sum += matrix[i][j];
            }

            if (sum > maxSum) {
                maxSum = sum;
                rowIndex = i;
            }
        }

        return {rowIndex, maxSum};
    }
};



