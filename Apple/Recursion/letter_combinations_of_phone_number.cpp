/*Runtime: 3 ms, faster than 36.68% of C++ online submissions for Letter Combinations of a Phone Number.
Memory Usage: 6.5 MB, less than 84.36% of C++ online submissions for Letter Combinations of a Phone Number.*/
//https://leetcode.com/problems/letter-combinations-of-a-phone-number/
//https://leetcode.com/problems/letter-combinations-of-a-phone-number/discuss/8090/Iterative-c%2B%2B-solution-in-0ms

class Solution {
public:
    const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
    
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
		vector<string> result;
        result.push_back("");
        
        for(auto digit: digits) {
            vector<string> tmp;
            for(auto candidate: pad[digit - '0']) {
                for(auto s: result) {
                    tmp.push_back(s + candidate);
                }
            }
            result.swap(tmp);
        }
        return result;
    }
};
