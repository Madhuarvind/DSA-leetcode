class Solution {
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> nums(cards.begin(), cards.end());
        return dfs(nums);
    }
    bool dfs(vector<double>& nums) {
        if (nums.size() == 1) return abs(nums[0] - 24) < 1e-6;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if (i == j) continue;
                vector<double> next;
                for (int k = 0; k < nums.size(); ++k)
                    if (k != i && k != j) next.push_back(nums[k]);
                for (auto val : compute(nums[i], nums[j])) {
                    next.push_back(val);
                    if (dfs(next)) return true;
                    next.pop_back();
                }
            }
        }
        return false;
    }
    vector<double> compute(double a, double b) {
        vector<double> res = {a + b, a - b, b - a, a * b};
        if (fabs(b) > 1e-6) res.push_back(a / b);
        if (fabs(a) > 1e-6) res.push_back(b / a);
        return res;
    }
};