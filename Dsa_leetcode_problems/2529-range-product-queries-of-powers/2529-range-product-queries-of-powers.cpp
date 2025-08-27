class Solution {
public:
    const int mod = 1e9+7;

    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> p2, res;
        int i = 0, k = 0;
        while (n) {
            if (n & 1) {
                p2.push_back(i);
                if (k) p2[k] += p2[k - 1]; // prefix sum of exponents
                k++;
            }
            n >>= 1;
            i++;
        }

        for (auto &q : queries) {
            int p = p2[q[1]] - (q[0] ? p2[q[0] - 1] : 0);
            res.push_back(fastPow(2, p));
        }
        return res;
    }

private:
    int fastPow(int base, int exp) {
        int res = 1;
        while (exp) {
            if (exp & 1) res = (1LL * res * base) % mod;
            base = (1LL * base * base) % mod;
            exp >>= 1;
        }
        return res;
    }
};