// https://leetcode.com/problems/spiral-matrix/submissions/
#include <iostream> 
#include <vector> 
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.empty() || matrix[0].empty()) {
            return ans;
        }

        int rows = matrix.size();
        int cols = matrix[0].size();
        int startingRow = 0; 
        int endingRow = rows - 1; 
        int startingCol = 0; 
        int endingCol = cols - 1; 
        int total = rows * cols, count = 0;

        while (count < total) {
            // Print top row
            for (int i = startingCol; i <= endingCol && count < total; i++) {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // Print right column
            for (int i = startingRow; i <= endingRow && count < total; i++) {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // Print bottom row
            for (int i = endingCol; i >= startingCol && count < total; i--) {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            // Print left column
            for (int i = endingRow; i >= startingRow && count < total; i--) {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};
