class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        long long int sum = 0;
        for (int i = 0; i < k; i++) {
            sum = sum + nums[i];
            mp[nums[i]]++;
        }
        long long int maxi =0;
        if (mp.size() == k) {
             maxi = sum;
        }
        for (int i = k; i < nums.size(); i++) {

            mp[nums[i - k]]--;
            if (mp[nums[i-k]] == 0)
    mp.erase(nums[i-k]);
            mp[nums[i]]++;
            sum = sum + nums[i] - nums[i - k];

            if (mp.size() == k) {
                maxi = max(maxi, sum);
            }
        }
        return maxi;
    }
};