class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for(int m:hours){
            if(m>=target){
                count++;
            }
        }
        return count;
    }
};