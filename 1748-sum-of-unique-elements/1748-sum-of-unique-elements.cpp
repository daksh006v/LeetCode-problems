class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
    unordered_set<int> one, many;
    for (auto n : nums)
        if (!many.count(n))
            if(!one.insert(n).second) {
                many.insert(n);
                one.erase(n);
            }
    return accumulate(begin(one), end(one), 0);
    }
};