#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<bool> rowFlag(rows, false);
    vector<bool> colFlag(cols, false);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] == 0) {
                rowFlag[i] = true;
                colFlag[j] = true;
            }
        }
    }
    for(int i = 0; i < rows; i++) {
        if(rowFlag[i]) {
            for(int j = 0; j < cols; j++) {
                matrix[i][j] = 0;
            }
        }
    }
    for(int j = 0; j < cols; j++) {
        if(colFlag[j]) {
            for(int i = 0; i < rows; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}

};
int main(){
    int row,col;
    cin>>row>>col;

    vector<vector<int>>matrix(row, vector<int>(col));
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>matrix[i][j];
        }
    };

    Solution solution;
    solution.setZeroes(matrix);
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}