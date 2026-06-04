class Solution {
public:
    string decode(string &s, int &i) {
        string res="";
        while (i<s.size()&&s[i]!=']'){
            if (isalpha(s[i])){
                res += s[i];
                i++;
            }
            else if (isdigit(s[i])){
                int num = 0;
                while (i<s.size()&&isdigit(s[i])){
                    num=num*10+(s[i]-'0');
                    i++;
                }
                i++; // skip '['
                string temp = decode(s, i);
                i++; // skip ']'
                while (num){
                    res+=temp;
                    num--;
                }
            }
        }
        return res;
    }
    string decodeString(string s){
        int i = 0;
        return decode(s,i);
    }
};