class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size(), row = 0, col = cols - 1;

        while(row < rows && col > -1) {
            int curr = matrix[row][col];
            if(curr == target) {
                return true;
            }
            if(target > curr) {
                row++;
            } else {
                col--;
            }
        }
        return false;
    }
};