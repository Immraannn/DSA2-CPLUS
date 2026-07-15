class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rows = matrix.size();
        int cols = matrix[0].size();
        int top = 0;
        int bottom = rows - 1;
        int left = 0;
        int right = cols - 1;
        while (top <= bottom && left <= right) {
            // Top Row (Left -> Right)
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++;
            // Right Column (Top -> Bottom)
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            // Bottom Row (Right -> Left)
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--;
            }
            // Left Column (Bottom -> Top)
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};
// OUTPUT-
// 1 2 3
// 4 5 6
// 7 8 9
// The wave print is :
// 1 2 3 6 9 8 7 4 5
