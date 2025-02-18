class Solution
{
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();

        for (int i = 0; i < n; i++)
        {
            int x = 0, y = i;

            vector<int> temp;
            while (x < m and y < n)
            {
                temp.push_back(mat[x++][y++]);
            }
            sort(temp.begin(), temp.end());
            x = 0, y = i;
            while (x < m and y < n)
            {
                mat[x][y] = temp[x];
                x++;
                y++;
            }
        }
        for (int i = 1; i < m; i++)
        {
            int x = i, y = 0;

            vector<int> temp;
            while (x < m and y < n)
            {
                temp.push_back(mat[x++][y++]);
            }
            sort(temp.begin(), temp.end());
            x = i, y = 0;
            while (x < m and y < n)
            {
                mat[x][y] = temp[y];
                x++;
                y++;
            }
        }

        return mat;
    }
};