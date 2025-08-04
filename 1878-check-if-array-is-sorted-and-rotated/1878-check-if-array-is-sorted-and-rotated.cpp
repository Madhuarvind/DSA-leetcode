class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            // Compare current and next (with wraparound using %)
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
            // More than one drop means it's not a rotated sorted array
            if (count > 1) return false;
        }
        return true;
    }
};
