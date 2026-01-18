class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // int col[m] = {0} -> matrix[0][..]
        // int row[n] = {0} -> matrix[..][0]
        int m = matrix.size();
        int n = matrix[0].size();
        int col0 = 1;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    // mark i-th row
                    matrix[i][0] = 0;
                    // mark j-th row
                    if (j != 0) {
                        matrix[0][j] = 0;
                    } else
                        col0 = 0;
                }
            }
        }

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] != 0) {
                    // check for row & col
                    if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        if (matrix[0][0] == 0) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        if (col0 == 0) {
            for (int j = 0; j < m; j++) {
                matrix[j][0] = 0;
            }
        }
    }
};