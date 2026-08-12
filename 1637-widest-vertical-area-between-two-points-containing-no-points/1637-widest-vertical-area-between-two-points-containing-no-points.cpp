class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> damn;

        for(const auto& one : points){
            damn.push_back(one[0]);
        }

        sort(damn.begin(), damn.end());

        int ans = 0;

        for(int i=0; i<damn.size()-1;i++){
            ans = max(ans, damn[i+1] - damn[i]);
        }

        return ans;
    }
};