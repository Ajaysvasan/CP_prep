#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  void rotateMatrix(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++) {
      for (int j = i + 1; j < n; j++) {
        int temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = temp;
      }
    }
    for (int i = 0; i < m; i++) {
      reverse(matrix[i].begin(), matrix[i].end());
    }
  }
};
