//https://leetcode.com/problems/longest-increasing-path-in-a-matrix/
//https://leetcode.com/problems/longest-increasing-path-in-a-matrix/discuss/1151423/C%2B%2B-Optimization-from-Brute-Force-to-DP-or-Easy-Solution-w-Explanation

/*
Success
Details 
Runtime: 54 ms, faster than 74.04% of C++ online submissions for Longest Increasing Path in a Matrix.
Memory Usage: 14.8 MB, less than 95.66% of C++ online submissions for Longest Increasing Path in a Matrix.
*/

class Solution 
{
    int dp[200][200]{}; // constraints are small enough that we can just set them to MAX
int maxPath, n, m;
public :
    int longestIncreasingPath(vector<vector<int>>& matrix) {
	maxPath = 0, n = size(matrix), m = size(matrix[0]);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			maxPath = max(maxPath, solve(matrix, i, j, -1));            
	return maxPath;
}
int solve(vector<vector<int>>& mat, int i, int j, int prev){
	if(i < 0 || j < 0 || i >= n || j >= m || mat[i][j] <= prev) return 0;
	if(dp[i][j]) return dp[i][j];
	return dp[i][j] = 1 + max({ solve(mat, i + 1, j, mat[i][j]),
							    solve(mat, i - 1, j, mat[i][j]),
							    solve(mat, i, j + 1, mat[i][j]),
							    solve(mat, i, j - 1, mat[i][j]) });       
}

};
