//https://leetcode.com/problems/permutations/
//https://leetcode.com/problems/permutations/discuss/18360/C%2B%2B-backtracking-and-nextPermutation
/*
Success
Details 
Runtime: 4 ms, faster than 67.53% of C++ online submissions for Permutations.
Memory Usage: 7.9 MB, less than 39.22% of C++ online submissions for Permutations.
*/

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> perms;
        permute(nums, 0, perms);
        return perms;
    }
private:
    void permute(vector<int> nums, int i, vector<vector<int>>& perms) {
        if (i == nums.size()) {
            perms.push_back(nums);
        } else {
            for (int j = i; j < nums.size(); j++) {
                swap(nums[i], nums[j]);
                permute(nums, i + 1, perms);
            }
        }
    }
};
