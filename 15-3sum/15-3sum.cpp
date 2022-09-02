class Solution {
#define all(v)                ((v).begin()), ((v).end())
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
public:
vector<vector<int>> threeSum(vector<int> &nums) {
    fast
    vector<vector<int>> ans;

    if (nums.size() < 3) return ans;
    sort(all(nums));
    for (int i = 0; i < nums.size() - 2; ++i) {
        if (!i or nums[i - 1] != nums[i]) { //-c = a + b
            int l = i + 1, r = nums.size() - 1, sum = -nums[i];
            while (l < r) {
                if (nums[l] + nums[r] == sum) {
                    ans.push_back({nums[i], nums[l], nums[r]});

                    while (l < r and nums[l] == nums[l + 1]) l++;
                    while (l < r and nums[r] == nums[r - 1]) r--;
                    
                    l++,r--;
                } 
                else if (nums[l] + nums[r] < sum) l++;
                else r--;
            }
        }
    }
    return ans;
  }
};