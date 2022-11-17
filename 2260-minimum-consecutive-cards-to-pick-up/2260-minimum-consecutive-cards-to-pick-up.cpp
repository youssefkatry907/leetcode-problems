class Solution {
public:

    const int N = 1e6 + 5;

    int minimumCardPickup(vector<int> &cards) {
        vector<int> ans, adj[N];
        int res = INT_MAX, n = cards.size();
        for (int i = 0; i < n; ++i) {
            adj[cards[i]].push_back(i);
        }

        for (int i = 0; i < n; ++i) {
            if (adj[cards[i]].size() > 1) {
                for (int j = 1; j < adj[cards[i]].size(); ++j) {
                    res = min(res, adj[cards[i]][j] - adj[cards[i]][j - 1] + 1);
                }
            }
        }
        return (res == INT_MAX ? -1 : res);

    }
};