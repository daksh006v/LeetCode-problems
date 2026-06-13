class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mapp;
        for(char ch:s){
            mapp[ch]++;
        }

        int maxOfVowel = 0;
        int maxOfCon = 0;
        for(auto it:mapp){
            char ch = it.first;
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                maxOfVowel = max(maxOfVowel,it.second);
            }
            else{
                maxOfCon = max(maxOfCon,it.second);
            }
        }
        int countSum = maxOfVowel + maxOfCon;
        return countSum;
    }
};