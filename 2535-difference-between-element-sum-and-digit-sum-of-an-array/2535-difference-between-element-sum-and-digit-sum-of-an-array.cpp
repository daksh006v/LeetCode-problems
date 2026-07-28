class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int digit = 0;
        int div;

        for(int i=0;i<nums.size();i++){
            sum += nums[i];

            while(nums[i]>9){
                div = nums[i] % 10;
                digit += div;
                nums[i] /= 10;
            }
            digit += nums[i];
        }
        return abs(sum-digit);
    }
};