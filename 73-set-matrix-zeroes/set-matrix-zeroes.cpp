class Solution {
public:
    //Anmol Sahu
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
    vector<int> row(m, 1), col(n, 1);  // initially all rows and cols valid

    // Step 1: Mark rows and cols
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }

    // Step 2: Apply marks
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (row[i] == 0 || col[j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
    }
};