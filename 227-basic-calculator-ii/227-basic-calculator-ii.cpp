class Solution {
public:
    int calculate(string s) {
            char sign = '+';
    int res = 0, cur = 0, hold = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
                cur = cur * 10 + (s[i] - '0');
                i++;
            }
            i--;
        }
        if ((!isdigit(s[i]) && s[i] != ' ') || i == s.size() - 1) {
            if (sign == '+') {
                res += hold;
                hold = cur;
            } else if (sign == '-') {
                res += hold;
                hold = -cur;
            } else if (sign == '*') hold *= cur;
            else hold /= cur;
            sign = s[i];
            cur = 0;
        }
    }
    return res + hold;
    }
};