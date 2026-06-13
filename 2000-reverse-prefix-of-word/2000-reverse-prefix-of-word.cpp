class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = "";
        int k=0;
        for(int i=0;i<word.length();i++){
            if(word[i] == ch){
                k=i+1;
                for(int j=i;j>=0;j--){
                    ans.push_back(word[j]);
                }
                break;
            }
        }
        for(int i=k;i<word.length();i++){
            ans.push_back(word[i]);
        }
        return ans;
    }
};