class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        bool ok = false;
        int n = nums.size(),ans = 0,mx = 0;
        map<int,int>mp;
        for(int i = 0; i < n; ++i) {
            mp[nums[i]]++;
            if(nums[i] % 2 == 0) ok = true;
        }
        if(ok) {
        if(n == 1) ans = nums[0];
        else {
             for(auto x : mp){
                if(mx < x.second and !(x.first & 1)) mx = x.second,ans = x.first;
            }
        }
    }
        else ans = -1;
        return ans;
    }
};