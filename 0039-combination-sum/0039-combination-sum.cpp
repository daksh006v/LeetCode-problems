class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        function<void(int, int)> backtrack = [&](int index, int sum) {
            if (sum == target) {
                ans.push_back(temp);
                return;
            }

            if (sum > target || index >= candidates.size()) {
                return;
            }

            temp.push_back(candidates[index]);
            backtrack(index, sum + candidates[index]);
            temp.pop_back();

            backtrack(index + 1, sum);
        };

        backtrack(0, 0);
        return ans;
    }
};