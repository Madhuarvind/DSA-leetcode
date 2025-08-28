# ✅ Longest Consecutive Sequence in an Array

**Topic:** Finding the length of the longest consecutive elements sequence.

---

## 📌 Problem Statement

Given an unsorted array of integers, find the length of the longest consecutive elements sequence.

---

## 🧪 Examples

### Example 1:
**Input:**  
`arr = [100, 4, 200, 1, 3, 2]`  
**Output:**  
`4`  
**Explanation:** The longest consecutive elements sequence is `[1, 2, 3, 4]`, which has a length of 4.

### Example 2:
**Input:**  
`arr = [0, 0, 1, 1, 2, 2, 3, 3]`  
**Output:**  
`4`  
**Explanation:** The longest consecutive elements sequence is `[0, 1, 2, 3]`, which has a length of 4.

---

## 💡 Approach

### Optimal Solution

**Intuition:** Use a set to store the elements for O(1) lookups and iterate through the array to find the longest sequence.

#### Pseudocode
```
create a set from arr
max_length = 0

for each number in arr:
    if number is the start of a sequence (number - 1 not in set):
        current_num = number
        current_length = 1
        
        while current_num + 1 is in set:
            current_num += 1
            current_length += 1
            
        max_length = max(max_length, current_length)

return max_length
```

#### Code (C++)
```cpp
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int max_length = 0;

    for (int num : nums) {
        if (numSet.find(num - 1) == numSet.end()) { // Check if it's the start of a sequence
            int current_num = num;
            int current_length = 1;

            while (numSet.find(current_num + 1) != numSet.end()) {
                current_num++;
                current_length++;
            }

            max_length = max(max_length, current_length);
        }
    }

    return max_length;
}

int main() {
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    int result = longestConsecutive(arr);
    cout << "Length of the longest consecutive sequence: " << result << endl;
    return 0;
}
```

**Output:**
```
Length of the longest consecutive sequence: 4
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the number of elements in the array.
- Space Complexity: `O(N)` for the set.

---

## 🧷 Implementations

### Java

<details>
<summary>Longest Consecutive Sequence</summary>

```java
import java.util.HashSet;

public class Main {
    static int longestConsecutive(int[] nums) {
        HashSet<Integer> numSet = new HashSet<>();
        for (int num : nums) {
            numSet.add(num);
        }
        
        int maxLength = 0;

        for (int num : nums) {
            if (!numSet.contains(num - 1)) { // Check if it's the start of a sequence
                int currentNum = num;
                int currentLength = 1;

                while (numSet.contains(currentNum + 1)) {
                    currentNum++;
                    currentLength++;
                }

                maxLength = Math.max(maxLength, currentLength);
            }
        }

        return maxLength;
    }
    
    public static void main(String[] args) {
        int[] arr = {100, 4, 200, 1, 3, 2};
        int result = longestConsecutive(arr);
        System.out.println("Length of the longest consecutive sequence: " + result);
    }
}
```

</details>

### Python

<details>
<summary>Longest Consecutive Sequence</summary>

```python
def longest_consecutive(nums):
    num_set = set(nums)
    max_length = 0

    for num in nums:
        if num - 1 not in num_set:  # Check if it's the start of a sequence
            current_num = num
            current_length = 1

            while current_num + 1 in num_set:
                current_num += 1
                current_length += 1

            max_length = max(max_length, current_length)

    return max_length

arr = [100, 4, 200, 1, 3, 2]
result = longest_consecutive(arr)
print("Length of the longest consecutive sequence:", result)
```

</details>

### JavaScript

<details>
<summary>Longest Consecutive Sequence</summary>

```javascript
function longestConsecutive(nums) {
    const numSet = new Set(nums);
    let maxLength = 0;

    for (let num of nums) {
        if (!numSet.has(num - 1)) { // Check if it's the start of a sequence
            let currentNum = num;
            let currentLength = 1;

            while (numSet.has(currentNum + 1)) {
                currentNum++;
                currentLength++;
            }

            maxLength = Math.max(maxLength, currentLength);
        }
    }

    return maxLength;
}

let arr = [100, 4, 200, 1, 3, 2];
let result = longestConsecutive(arr);
console.log("Length of the longest consecutive sequence:", result);
```

</details>

---

## 🧭 Edge Cases to Consider

* All elements are the same.
* Array contains only one element.
* Array is sorted in ascending or descending order.

---

## 🧾 Complexity Summary

| Approach                        | Time Complexity | Space Complexity |
| ------------------------------- | --------------- | ---------------- |
| Longest Consecutive Sequence    | `O(N)`          | `O(N)`           |

---

## 🙌 Credits

Special thanks to **TakeUforward** for the comprehensive explanation of the longest consecutive sequence problem.

---

## 📣 Notes

* This problem is a classic example of using a hash set for efficient lookups.
* Understanding this algorithm is useful for various array manipulation tasks.
