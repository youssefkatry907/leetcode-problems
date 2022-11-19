class Solution {
public:
    typedef long long ll;
    map<ll, ll> mp;
    bool isHappy(int n) {
        bool ok = true;
        
    while (n != 1) {
        n = getSum(n);
        if(mp[n] > 1) {
            ok = false;
            break;
        }
    }
    return (ok ? true : false);
    }
    
    ll fastpower(ll n, ll m) {
    ll res = 1;
    while (m > 0) {
        if (m & 1)res = res * n;
        n *= n;
        m /= 2;
    }
    return res;
}
    
    ll getSum(ll num) {
    ll sum = 0;
    while (num) {
        sum += fastpower((num % 10), 2);
        num /= 10;
    }
    mp[sum]++;
    return sum;
}
    
};