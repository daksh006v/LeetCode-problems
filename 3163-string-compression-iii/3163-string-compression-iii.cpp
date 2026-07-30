class Solution {
public:
    string compressedString(string word) {
    string ans = "";
    int smtg = 0;

    for (int i = 0; i < word.size(); i++) {
        smtg++;

        if (smtg == 9 || i == word.size() - 1 || word[i] != word[i + 1]) {
            ans += to_string(smtg) + word[i];
            smtg = 0;
        }
    }

    return ans;
    }
};