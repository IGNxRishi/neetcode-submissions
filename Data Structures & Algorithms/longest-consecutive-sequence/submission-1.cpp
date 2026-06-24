class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set<int> s(nums.begin(), nums.end());
        int best = 0;
        for (int x : s) {
            if (s.find(x - 1) == s.end()) {  // x is sequence start
                int curr = x;
                int len = 1;
                while (s.find(curr + 1) != s.end()) {  // extend sequence
                    curr++;
                    len++;
                }
                best = max(best, len);
            }
        }
        return best;
    }
};