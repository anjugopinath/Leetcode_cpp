//https://leetcode.com/explore/interview/card/apple/346/sorting-and-searching/3133/
//https://leetcode.com/explore/interview/card/apple/346/sorting-and-searching/3133/discuss/112651/Simple-C++-solutions
//https://leetcode.com/explore/interview/card/apple/346/sorting-and-searching/3133/discuss/431008/Summary-of-all-the-methods-you-can-imagine-of-this-problem
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> cnt;
        for (auto& w : words)
            ++cnt[w];
        
        vector<vector<string>> bucket(words.size());
        for (auto it : cnt)
            bucket[it.second].push_back(it.first);
        
        vector<string> res;
        for (int i = (int)bucket.size() - 1; k > 0 && i >= 0; i--) {
            if (bucket[i].empty())
                continue;
            int n = min(k, (int)bucket[i].size());
            res.insert(res.end(), bucket[i].begin(), bucket[i].begin() + n);
            k -= n;
        }
        
        return res;
    }
};
