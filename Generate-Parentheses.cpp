class Solution {
public:
    void solve(string s, int open, int close, vector<string>& ans) {
        if (open == 0) {
            for (int i = 0; i < close; i++) {
                s += \)\;
            }
            ans.push_back(s);

            return;
        }
        if (open == close) {
            string newopen = s + \(\;
            solve(newopen, open - 1, close, ans);
        } else {
            string newopen = s + \(\;
            solve(newopen, open - 1, close, ans);
            string newclose = s + \)\;
            solve(newclose, open, close - 1, ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        int open = n - 1;
        int close = n;
        vector<string> ans;
        string s = \(\;
        solve(s, open, close, ans);

        return ans;
    }
};