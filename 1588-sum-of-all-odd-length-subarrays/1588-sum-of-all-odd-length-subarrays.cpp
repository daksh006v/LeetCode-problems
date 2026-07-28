class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
         int ans = 0;
        int n = arr.size();

        for(int k = 1; k <= n; k += 2){
            int sum = 0;

            for(int i = 0; i < k; i++)
                sum += arr[i];

            ans += sum;

            for(int right = k; right < n; right++){

                sum += arr[right];
                sum -= arr[right-k];

                ans += sum;
            }
        }

        return ans;
    }
};