//https://leetcode.com/problems/intersection-of-two-arrays/
//https://leetcode.com/problems/intersection-of-two-arrays/discuss/82001/8ms-concise-C%2B%2B-using-unordered_set
/*
Success
Details 
Runtime: 4 ms, faster than 89.30% of C++ online submissions for Intersection of Two Arrays.
Memory Usage: 10.3 MB, less than 62.50% of C++ online submissions for Intersection of Two Arrays.
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m(nums1.begin(), nums1.end());
        vector<int> res;
        for (auto a : nums2)
            if (m.count(a)) {
                res.push_back(a);
                m.erase(a);
            }
        return res;
    }
};
