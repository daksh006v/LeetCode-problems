class Solution {
public:
    unordered_map<string, vector<int>> memo;

    vector<int> solve(string expr) {
        if (memo.count(expr))
            return memo[expr];

        vector<int> result;

        for (int i = 0; i < expr.size(); i++) {
            char op = expr[i];

            if (op == '+' || op == '-' || op == '*') {
                vector<int> left = solve(expr.substr(0, i));
                vector<int> right = solve(expr.substr(i + 1));

                for (int l : left) {
                    for (int r : right) {
                        if (op == '+')
                            result.push_back(l + r);
                        else if (op == '-')
                            result.push_back(l - r);
                        else
                            result.push_back(l * r);
                    }
                }
            }
        }

        if (result.empty())
            result.push_back(stoi(expr));

        return memo[expr] = result;
    }

    vector<int> diffWaysToCompute(string expression) {
        return solve(expression);
    }
};