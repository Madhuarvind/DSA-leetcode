# ✅ Count Subarray Sum Equals K

**Topic:** Counting the number of subarrays with sum equal to k.

---

## 📌 Problem Statement

Given an array of integers `nums` and an integer `k`, return the total number of subarrays whose sum equals to `k`.

---

## 🧪 Examples

### Example 1:
**Input:**  
`nums = [1,1,1], k = 2`  
**Output:**  
`2`  
**Explanation:** The subarrays are [1,1] and [1,1].

### Example 2:
**Input:**  
`nums = [1,2,3], k = 3`  
**Output:**  
`2`  
**Explanation:** The subarrays are [1,2] and [3].

---

## 💡 Approach

### Optimal Solution

**Intuition:** Use prefix sum and hash map to store the frequency of prefix sums.

#### Pseudocode
```
prefix_sum = 0
count = 0
map = {0: 1}  // prefix sum 0 occurs once

for each num in nums:
    prefix_sum += num
    if (prefix_sum - k) exists in map:
        count += map[prefix_sum - k]
    map[prefix_sum]++

return count
```

#### Code (C++)
```cpp
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1;
    int prefixSum = 0;
    int count = 0;
    
    for (int num : nums) {
        prefixSum += num;
        if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end()) {
            count += prefixSumCount[prefixSum - k];
        }
        prefixSumCount[prefixSum]++;
    }
    
    return count;
}

int main() {
    vector<int> nums = {1,1,1};
    int k = 2;
    int result = subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << ": " << result << endl;
    return 0;
}
```

**Output:**
```
Number of subarrays with sum 2: 2
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the number of elements in the array.
- Space Complexity: `O(N)` for the hash map.

---

## 🧷 Implementations

### Java

<details>
<summary>Count Subarray Sum Equals K</summary>

```java
import java.util.HashMap;

public class Main {
    static int subarraySum(int[] nums, int k) {
        HashMap<Integer, Integer> prefixSumCount = new HashMap<>();
        prefixSumCount.put(0, 1);
        int prefixSum = 0;
        int count = 0;
        
        for (int num : nums) {
            prefixSum += num;
            if (prefixSumCount.containsKey(prefixSum - k)) {
                count += prefixSumCount.get(prefixSum - k);
            }
            prefixSumCount.put(prefixSum, prefixSumCount.getOrDefault(prefixSum, 0) + 1);
        }
        
        return count;
    }
    
    public static void main(String[] args) {
        int[] nums = {1,1,1};
        int k = 2;
        int result = subarraySum(nums, k);
        System.out.println("Number of subarrays with sum " + k + ": " + result);
    }
}
```

</details>

### Python

<details>
<summary>Count Subarray Sum Equals K</summary>

```python
def subarray_sum(nums, k):
    prefix_sum_count = {0: 1}
    prefix_sum = 0
    count = 0
    
    for num in nums:
        prefix_sum += num
        if prefix_sum - k in prefix_sum_count:
            count += prefix_sum_count[prefix_sum - k]
        prefix_sum_count[prefix_sum] = prefix_sum_count.get(prefix_sum, 0) + 1
    
    return count

nums = [1,1,1]
k = 2
result = subarray_sum(nums, k)
print(f"Number of subarrays with sum {k}: {result}")
```

</details>

### JavaScript

<details>
<summary>Count Subarray Sum Equals K</summary>

```javascript
function subarraySum(nums, k) {
    const prefixSumCount = new Map();
    prefixSumCount.set(0, 1);
    let prefixSum = 0;
    let count = 0;
    
    for (let num of nums) {
        prefixSum += num;
        if (prefixSumCount.has(prefixSum - k)) {
            count += prefixSumCount.get(prefixSum - k);
        }
        prefixSumCount.set(prefixSum, (prefixSumCount.get(prefixSum) || 0) + 1);
    }
    
    return count;
}

let nums = [1,1,1];
let k = 2;
let result = subarraySum(nums, k);
console.log(`Number of subarrays with sum ${k}: ${result}`);
```

</details>

---

## 🧭 Edge Cases to Consider

* Array contains negative numbers.
* Array contains zeros.
* k is negative.
* Array is empty.

---

## 🧾 Complexity Summary

| Approach                | Time Complexity | Space Complexity |
| ----------------------- | --------------- | ---------------- |
| Count Subarray Sum Equals K | `O(N)`       | `O(N)`           |

---

## 🙌 Credits

Special thanks to **TakeUforward** for the comprehensive explanation of the count subarray sum equals k problem.

---

## 📣 Notes

* This problem is a classic example of using prefix sum and hash map for efficient counting.
* Understanding this algorithm is useful for various subarray sum problems.
