# ✅ Count Maximum Consecutive One's in the Array

**Problem Statement:** Given an array that contains only 1 and 0, return the count of maximum consecutive ones in the array.

---

## 📌 Problem Statement

Given a binary array (containing only 0s and 1s), find the maximum number of consecutive 1s.

---

## 🧪 Examples

### Example 1:
```
Input: array[] = {1, 1, 0, 1, 1, 1}
Output: 3
Explanation: There are two consecutive 1's and three consecutive 1's in the array out of which maximum is 3.
```

### Example 2:
```
Input: array[] = {1, 0, 1, 1, 0, 1}
Output: 2
Explanation: There are two consecutive 1's in the array.
```

---

## 💡 Approach

**Algorithm:**
1. Maintain a variable `count` that tracks the current number of consecutive 1's
2. Maintain a variable `max_count` that stores the maximum consecutive 1's found so far
3. Traverse through the array:
   - If current element is 1, increment `count`
   - If current element is 0, reset `count` to 0
   - Update `max_count` with the maximum value between current `max_count` and `count`

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cnt++;
            } else {
                cnt = 0;
            }
            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    Solution obj;
    int ans = obj.findMaxConsecutiveOnes(nums);
    cout << "The maximum consecutive 1's are: " << ans;
    return 0;
}
```
**Output:** The maximum consecutive 1's are: 3

**Time Complexity:** O(N) since the solution involves only a single pass.

**Space Complexity:** O(1) because no extra space is used.

---

## 🙌 Credits

Special thanks to Somparna Chakrabarti and Sudip Ghosh for contributing to this article on TakeUforward.
