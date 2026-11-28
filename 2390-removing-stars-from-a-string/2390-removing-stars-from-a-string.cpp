class Solution {
public:

    string removeStars(string s) {
        stack<char> st;
        string ans;
        for(char d: s){
            if(d == '*'){
                st.pop();
            } else{
                st.push(d);
            }
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};