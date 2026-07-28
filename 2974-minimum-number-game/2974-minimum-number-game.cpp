class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {

        vector<int> arr;

        while(!nums.empty()){

            int temp1 = INT_MAX;
            int temp2 = INT_MAX;

            int idx1 = -1;
            int idx2 = -1;

            // find minimum
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] < temp1){
                    temp1 = nums[i];
                    idx1 = i;
                }
            }

            // find second minimum
            for(int i = 0; i < nums.size(); i++){
                if(i == idx1) continue;

                if(nums[i] < temp2){
                    temp2 = nums[i];
                    idx2 = i;
                }
            }

            arr.push_back(temp2);
            arr.push_back(temp1);

            // erase larger index first
            if(idx1 > idx2){
                nums.erase(nums.begin() + idx1);
                nums.erase(nums.begin() + idx2);
            }
            else{
                nums.erase(nums.begin() + idx2);
                nums.erase(nums.begin() + idx1);
            }
        }

        return arr;
    }
};