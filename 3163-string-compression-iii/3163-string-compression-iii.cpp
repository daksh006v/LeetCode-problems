class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        int i = 0;

        while (i < word.size()) {
            char ch = word[i];
            int smtg = 0;

            while (i < word.size() && word[i] == ch && smtg < 9) {
                smtg++;
                i++;
            }

            ans += to_string(smtg);
            ans += ch;
        }

        return ans;
    }
};