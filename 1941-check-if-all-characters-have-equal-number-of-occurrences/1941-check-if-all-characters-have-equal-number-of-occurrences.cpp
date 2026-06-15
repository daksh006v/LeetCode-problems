class Solution {
public:
    bool areOccurrencesEqual(string s) {
         unordered_map<char, int> freq;

        for(char c : s) {
            freq[c]++;
        }

        unordered_set<int> counts;

        for(auto &p : freq) {
            counts.insert(p.second);
        }

        return counts.size() == 1;
    }
};