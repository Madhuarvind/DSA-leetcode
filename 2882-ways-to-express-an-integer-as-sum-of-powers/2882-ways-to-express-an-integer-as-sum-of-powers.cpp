class Solution {
    static constexpr int MOD = 1e9 + 7;
    unordered_map<long long, int> dp;
    int helper(int n, int x, int curr) {
        long long key = (long long)n * 1000 + curr; // unique key for (n, curr)
        if (dp.count(key)) return dp[key];
        int val = pow(curr, x);
        if (val > n) return 0;
        if (val == n) return 1;
        int res = (helper(n - val, x, curr + 1) + helper(n, x, curr + 1)) % MOD;
        return dp[key] = res;
    }
public:
    int numberOfWays(int n, int x) {
        dp.clear();
        return helper(n, x, 1);
    }
};