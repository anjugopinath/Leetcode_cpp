//https://leetcode.com/explore/interview/card/apple/509/recursion/3124/
//https://leetcode.com/problems/generate-parentheses/discuss/1131364/Clear-and-simple-explanation-with-intuition%3A-100-faster

class Solution {
public:
    vector<string>result;
    
    void helper(int open,int close,int n,string current)
    {
        if(current.length()==n*2)
        {
            result.push_back(current);
            return;
        }
        if(open<n)  helper(open+1,close,n,current+"(");
        if(close<open)  helper(open,close+1,n,current+")");
    }
    vector<string> generateParenthesis(int n) {
        helper(0,0,n,"");
        return result;
    }
};
