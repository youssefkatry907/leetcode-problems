class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long sum = 1,cnt = 0,sz = nums.size();
        vector<int>ans(sz);
        for(int i = 0; i < sz;++i) {
            if(nums[i]) sum *= nums[i];
            else ++cnt;
        }
        if(!cnt){
            for(int i = 0; i < sz;++i)  ans[i] = sum / nums[i];
        }
        else if(cnt == 1){
            for(int i = 0; i < sz;++i){
                if(!nums[i]) ans[i] = sum;
                else ans[i] = 0;
            }
        }
        else{
            for(int i = 0; i < sz;++i) ans[i] = 0;
        }
        return ans;
    }
};