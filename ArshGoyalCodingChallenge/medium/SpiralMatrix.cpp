#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty()) return result;

        int rows = matrix.size();
        int cols = matrix[0].size();
        int top = 0, bottom = rows - 1;
        int left = 0, right = cols - 1;

        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; ++i)
                result.push_back(matrix[top][i]);
            ++top;

            for (int i = top; i <= bottom; ++i)
                result.push_back(matrix[i][right]);
            --right;

            if (top <= bottom) {
                for (int i = right; i >= left; --i)
                    result.push_back(matrix[bottom][i]);
                --bottom;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; --i)
                    result.push_back(matrix[i][left]);
                ++left;
            }
        }

        return result;
    }
};

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    Solution solution;
    vector<int> result = solution.spiralOrder(matrix);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
