# ✅ Next Permutation

**Topic:** Finding the next lexicographically greater permutation of an array.

---

## 📌 Problem Statement

Given an array of integers `nums`, find the next permutation of `nums`. The next permutation of an array of integers is the next lexicographically greater permutation of its integer. If such an arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

---

## 🧪 Examples

### Example 1:
**Input:**  
`nums = [1,2,3]`  
**Output:**  
`[1,3,2]`  
**Explanation:** The next permutation of [1,2,3] is [1,3,2].

### Example 2:
**Input:**  
`nums = [3,2,1]`  
**Output:**  
`[1,2,3]`  
**Explanation:** No next permutation exists, so the array is rearranged to the lowest possible order.

### Example 3:
**Input:**  
`nums = [1,1,5]`  
**Output:**  
`[1,5,1]`  
**Explanation:** The next permutation of [1,1,5] is [1,5,1].

---

## 💡 Approach

### Optimal Solution

**Intuition:** Find the first decreasing element from the end, then find the element just larger than it, swap them, and reverse the remaining part.

#### Pseudocode
```
1. Find the first index i from the end where nums[i] < nums[i+1]
2. If no such index exists, reverse the entire array
3. Else, find the first index j from the end where nums[j] > nums[i]
4. Swap nums[i] and nums[j]
5. Reverse the subarray from i+1 to the end
```

#### Code (C++)
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;
    
    // Find the first decreasing element from the end
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }
    
    if (i >= 0) {
        int j = n - 1;
        // Find the element just larger than nums[i]
        while (j >= 0 && nums[j] <= nums[i]) {
            j--;
        }
        swap(nums[i], nums[j]);
    }
    
    // Reverse the remaining part
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    vector<int> nums = {1,2,3};
    nextPermutation(nums);
    
    cout << "Next permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
```

**Output:**
```
Next permutation: 1 3 2 
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the number of elements in the array.
- Space Complexity: `O(1)` since we are modifying the array in place.

---

## 🧷 Implementations

### Java

<details>
<summary>Next Permutation</summary>

```java
import java.util.Arrays;

public class Main {
    static void nextPermutation(int[] nums) {
        int n = nums.length;
        int i = n - 2;
        
        // Find the first decreasing element from the end
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }
        
        if (i >= 0) {
            int j = n - 1;
            // Find the element just larger than nums[i]
            while (j >= 0 && nums[j] <= nums[i]) {
                j--;
            }
            swap(nums, i, j);
        }
        
        // Reverse the remaining part
        reverse(nums, i + 1, n - 1);
    }
    
    static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    
    static void reverse(int[] nums, int start, int end) {
        while (start < end) {
            swap(nums, start, end);
            start++;
            end--;
        }
    }
    
    public static void main(String[] args) {
        int[] nums = {1,2,3};
        nextPermutation(nums);
        
        System.out.print("Next permutation: ");
        for (int num : nums) {
            System.out.print(num + " ");
        }
    }
}
```

</details>

### Python

<details>
<summary>Next Permutation</summary>

```python
def next_permutation(nums):
    n = len(nums)
    i = n - 2
    
    # Find the first decreasing element from the end
    while i >= 0 and nums[i] >= nums[i + 1]:
        i -= 1
    
    if i >= 0:
        j = n - 1
        # Find the element just larger than nums[i]
        while j >= 0 and nums[j] <= nums[i]:
            j -= 1
        nums[i], nums[j] = nums[j], nums[i]
    
    # Reverse the remaining part
    left, right = i + 1, n - 1
    while left < right:
        nums[left], nums[right] = nums[right], nums[left]
        left += 1
        right -= 1

nums = [1,2,3]
next_permutation(nums)
print("Next permutation:", nums)
```

</details>

### JavaScript

<details>
<summary>Next Permutation</summary>

```javascript
function nextPermutation(nums) {
    let n = nums.length;
    let i = n - 2;
    
    // Find the first decreasing element from the end
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }
    
    if (i >= 0) {
        let j = n - 1;
        // Find the element just larger than nums[i]
        while (j >= 0 && nums[j] <= nums[i]) {
            j--;
        }
        [nums[i], nums[j]] = [nums[j], nums[i]];
    }
    
    // Reverse the remaining part
    let left = i + 1, right = n - 1;
    while (left < right) {
        [nums[left], nums[right]] = [nums[right], nums[left]];
        left++;
        right--;
    }
}

let nums = [1,2,3];
nextPermutation(nums);
console.log("Next permutation:", nums);
```

</details>

---

## 🧭 Edge Cases to Consider

* Array is already in descending order (should return ascending order).
* Array contains duplicate elements.
* Array is empty or has only one element.

---

## 🧾 Complexity Summary

| Approach                | Time Complexity | Space Complexity |
| ----------------------- | --------------- | ---------------- |
| Next Permutation        | `O(N)`          | `O(1)`           |

---

## 🙌 Credits

Special thanks to **TakeUforward** for the comprehensive explanation of the next permutation problem.

---

## 📣 Notes

* This problem is a classic example of array manipulation and permutation generation.
* Understanding this algorithm is useful for various permutation-related problems.
