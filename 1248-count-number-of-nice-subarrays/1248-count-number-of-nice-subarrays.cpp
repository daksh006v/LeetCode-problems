class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> freq(nums.size() + 1, 0);

        freq[0] = 1;

        int odd = 0;
        int ans = 0;

        for (int x : nums) {
            odd += x & 1;

            if (odd >= k)
                ans += freq[odd - k];

            freq[odd]++;
        }

        return ans;
    }
};