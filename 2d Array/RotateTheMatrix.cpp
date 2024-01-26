// https://leetcode.com/problems/rotate-image/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // change rows into 
        
        for(int row = 0;row<rows;row++){
            for(int col = row;col<cols; col++){
                swap(matrix[row][col],matrix[col][row]);
            }
        }
        // change first element with last element
          for (int i = 0; i < rows; ++i) {
            int start = 0;
            int end = cols - 1;
            while (start < end) {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
    }
        
};

