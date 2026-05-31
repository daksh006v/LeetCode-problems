class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        short int first = -1;
        short int last = -1;

        //check for the occurances in the given vector
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                if(first == -1) first = i;
                last = i;
            }
        }
    return {first, last};
    }
};