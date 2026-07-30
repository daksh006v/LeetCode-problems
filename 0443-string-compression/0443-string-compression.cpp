class Solution {
public:
    int compress(vector<char>& chars) {

        int write = 0;
        int i = 0;
        int n = chars.size();

        while (i < n) {

            char curr = chars[i];
            int count = 0;

            while (i < n && chars[i] == curr) {
                count++;
                i++;
            }

            chars[write++] = curr;

            if (count > 1) {
                string s = to_string(count);

                for (char c : s)
                    chars[write++] = c;
            }
        }

        return write;
    }
};