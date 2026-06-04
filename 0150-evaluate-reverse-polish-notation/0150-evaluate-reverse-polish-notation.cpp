class Solution {
public:
    int evalRPN(vector<string>& tokens) {
          stack<int, vector<int>> st;

        for (string s : tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int firstNum = st.top();
                st.pop();
                int secondNum = st.top();
                st.pop();

                int result = 0;

                if (s == "+") {
                    result = secondNum + firstNum;
                } else if (s == "-") {
                    result = secondNum - firstNum;
                } else if (s == "*") {
                    result = secondNum * firstNum;
                } else if (s == "/") {
                    result = secondNum / firstNum;
                }

                st.push(result);
            } else {
                // Parse operand strings into plain integers
                st.push(stoi(s));
            }
        }

        return st.top();
    }
};