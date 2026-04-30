class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       int n = temperatures.size();
        vector<int> ans(n, 0);
        vector<int> index; // acts like a stack

        for(int i = 0; i < n; ++i) {
            while(!index.empty() && temperatures[i] > temperatures[index.back()]) {
                int idx = index.back();
                index.pop_back();
                ans[idx] = i - idx;
            }
            index.push_back(i);
        }

        return ans;
    }
};