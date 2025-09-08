class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size(); // size of the array.

        // Edge cases:
        if (n == 1) return nums[0];
        if (nums[0] != nums[1]) return nums[0];
        if (nums[n - 1] != nums[n - 2]) return nums[n - 1];

        int low = 1, high = n - 2;
        while (low <= high) {
            int mid = (low + high) / 2;

            // if nums[mid] is the single element:
            if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]) {
                return nums[mid];
            }

            // we are in the left:
            if ((mid % 2 == 1 && nums[mid] == nums[mid - 1])
                || (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {
                // eliminate the left half:
                low = mid + 1;
            }
            // we are in the right:
            else {
                // eliminate the right half:
                high = mid - 1;
            }
        }

        // dummy return statement:
        return -1;
    }
};
