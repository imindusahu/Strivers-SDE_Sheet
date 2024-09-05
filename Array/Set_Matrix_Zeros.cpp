#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
{
    /*      Better Approach
        Time complexity - O(n*m)+(n*m) = O(2*n*m)
        Space complexity - O(n)+ O(m)
    */

    int row[3] = {0}; // row array
    int col[3] = {0}; // column array

    // Traverse the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                // mark ith index of row is 1
                row[i] = 1;

                // mark jth index of column is 1
                col[j] = 1;
            }
        }
    }
    // mark all matrix as 0 if row[i] or col[j] is 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}
int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "The Final matrix is: \n";
    for (auto it : ans)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}