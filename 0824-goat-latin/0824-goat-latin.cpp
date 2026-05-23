class Solution {
public:
    string toGoatLatin(string sentence) {
         string result = "";
        string temp = "";
        int count = 0;

        for (int i = 0; i <= sentence.length(); i++) {

            if (i < sentence.length() && sentence[i] != ' ') {
                temp = temp + sentence[i];
            }
            if (i == sentence.length() || sentence[i] == ' ') {

                count++;

                if (temp[0] == 'a' || temp[0] == 'e' || temp[0] == 'i' ||
                    temp[0] == 'o' || temp[0] == 'u' ||
                    temp[0] == 'A' || temp[0] == 'E' || temp[0] == 'I' ||
                    temp[0] == 'O' || temp[0] == 'U') {

                    temp = temp + "ma";
                }
                else {
                    temp = temp.substr(1) + temp[0] + "ma";
                }

                for (int j = 1; j <= count; j++) {
                    temp = temp + "a";
                }

                result = result + temp;

                if (i != sentence.length()) {
                    result = result + " ";
                }
                temp = "";
            }
        }

        return result;
    }
};