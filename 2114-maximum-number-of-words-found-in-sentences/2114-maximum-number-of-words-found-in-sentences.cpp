class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        for(string st : sentences){
            int wordCount = 1;
            for(char ch : st){
                if(ch == ' '){
                    ++wordCount;
                }
            }
            maxWords = max(wordCount,maxWords);
        }
        return maxWords;
    }
};