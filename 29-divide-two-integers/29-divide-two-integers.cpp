class Solution {
public:
    long long divide(long long dividend, long long divisor) {
     if(dividend == INT_MIN and divisor == -1) return INT_MAX;
     return dividend/divisor;  
  }
};