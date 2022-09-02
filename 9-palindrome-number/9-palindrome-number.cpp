class Solution {
public:
    bool isPalindrome(int x) {
     
        long long r = 0,y = 0, tmp =x;
            while (x != 0) {
        r = x % 10;
        y = y * 10 + r;
        x /= 10;
    }
    if (y < 0 || tmp != y) {
        return false;
    }
    else if (tmp == y) return true;
    return 0;
    }
};