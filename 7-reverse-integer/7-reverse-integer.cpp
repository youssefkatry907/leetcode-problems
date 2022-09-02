class Solution {
public:
    int reverse(int x) {      
        long long r=x%10;
         x/=10;
         
        while(x!=0){
           int pop = x % 10;
        if (r > INT_MAX / 10 || (r == INT_MAX / 10 && pop > 7)) {
            cout << 0 << endl;
            return 0;
        }
        if (r < INT_MIN / 10 || (r == INT_MIN / 10 && pop < -8)) {
            cout << 0 << endl;
            return 0;
        }
        r = r * 10 + pop;
        x /= 10;
        }
        return r;
    }
};