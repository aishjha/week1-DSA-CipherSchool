#include<bits/stdc++.h>
using namespace std;


void transpose(vector<vector<int>>& matrix) {
    for(int r = 0; r < matrix.size(); r++) {
        for(int c = 0; c < matrix[0].size();  c++) {
            if(r < c) {
                int temp = matrix[r][c];
                matrix[r][c] = matrix[c][r];
                matrix[c][r] = temp;
            }
        }
    }
}

void rotateMatrix(vector<vector<int>>& matrix) {
    transpose(matrix);

    for(int r = 0; r < matrix.size(); r++) {
        for(int c = 0; c < matrix[0].size() / 2; c++) {
            int temp = matrix[r][c];
            matrix[r][c] = matrix[r][matrix[0].size() - c - 1];
            matrix[r][matrix[0].size() - c - 1] = temp;
        }
    }
}



int main() {
    vector<vector<int>> matrix = {
        {1,2,3}, {4,5,6}, {7,8,9}
    };

    rotateMatrix(matrix);

    for(int r = 0; r < matrix.size();  r++) {
        for(int c = 0; c < matrix[0].size(); c++)
            cout<<matrix[r][c]<<" ";
        cout<<endl;
    }
    
    return 0;
}