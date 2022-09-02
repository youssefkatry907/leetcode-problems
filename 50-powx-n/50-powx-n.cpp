class Solution {
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double lld;
public:
  lld myPow(lld x, ll n) {
      fast
        lld res = pow(x, n);
        return res;
    }
};