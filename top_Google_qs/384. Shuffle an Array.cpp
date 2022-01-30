
//https://leetcode.com/problems/shuffle-an-array/discuss/1283088/C%2B%2B-Solution-with-Intuition-and-Explanation

/*
Success
Details 
Runtime: 225 ms, faster than 12.35% of C++ online submissions for Shuffle an Array.
Memory Usage: 90.2 MB, less than 90.01% of C++ online submissions for Shuffle an Array.
*/
class Solution {
public:
    vector<int> original;
    vector<int> shuffled;
    int n;
    Solution(vector<int>& nums) {
        original=shuffled=nums;
        n=shuffled.size();
    }

    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return original;
        
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        int x=rand()%n;
        int y=rand()%n;
        //YOU CAN POSSIBLY SWAP NUMBERS AT THE SAME INDEX
        swap(shuffled[x],shuffled[y]);
        return shuffled;   
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
