class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0 ; i*2 < n ;i++)
            swap(matrix[i] , matrix[n-i-1]);

        for(int i = 0 ; i < n ; i++)
            for(int j = 0; j < i;j++)
                swap(matrix[i][j] , matrix[j][i]);
    }
};