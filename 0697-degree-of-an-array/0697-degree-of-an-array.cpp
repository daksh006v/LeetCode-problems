class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
      unordered_map<int,int> count;
      unordered_map<int,int> first;
      unordered_map<int,int> last;

      for(int i = 0; i<nums.size();i++){
        if(first.find(nums[i]) == first.end()){
            first[nums[i]] = i;
        }
        last[nums[i]] = i;
        count[nums[i]]++;
      }

      int degree = 0;
      for(auto &p : count){
        degree = max(degree, p.second);
      }

      int ans = nums.size();

      for(auto &p : count){
        int num = p.first;
        int freq = p.second;

        if(freq == degree){
            ans = min(ans, last[num] - first[num]+1);
        }
      }
      return ans;
    }
};