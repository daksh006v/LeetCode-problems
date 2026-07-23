class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inc = 1;
        int dec = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] < nums[i-1]){
                inc = 0;
            }
            else if(nums[i]>nums[i-1]){
                dec = 0;
            }
        }
        if(inc == 1){ return true; }
        else if(dec == 1){ return true; }
        else {return false; };

    }
};
