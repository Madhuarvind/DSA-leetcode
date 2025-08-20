class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt = 0, streak = 0;
        for (int num : nums) {
            if (num == 0) {
                streak++;
                cnt += streak;
            } else {
                streak = 0;
            }
        }
        return cnt;
    }
};