class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;
        int n = nums.size();

        for (int c = 2; c < n - 1; c++) {

            // Add all pairs ending at b = c-1
            int b = c - 1;
            for (int a = 0; a < b; a++) {
                mp[nums[a] + nums[b]]++;
            }

            // Check every d
            for (int d = c + 1; d < n; d++) {
                ans += mp[nums[d] - nums[c]];
            }
        }

        return ans;
    }
};