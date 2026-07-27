class Solution {
public:
    int finalElement(vector<int>& nums) {
        // so basically alice ka turn aayega pehla, to wo jitna chahta hai to wo pure array me se first and last element hi check karega and dono me so jo maximum rahega usse rakhega aur baaki pura array uda dega
        // to automatically wo jeet jayega, and bob ki baari kabhi aayegi hi nai.

        int n = nums.size();
        
        if (n == 1) {
            return nums[0];
        }
        
        return max(nums[0], nums[n - 1]);
    }
};