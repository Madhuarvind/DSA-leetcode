# ✅ Kadane's Algorithm: Maximum Subarray Sum

**Topic:** Finding the maximum sum of a contiguous subarray using Kadane's Algorithm

---

## 📌 Problem Statement

Given an integer array `arr[]`, find the maximum sum of a contiguous subarray (subarray with consecutive elements).

---

## 🧪 Examples

### Example 1:
**Input:**  
`arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]`  
**Output:**  
`6`  
**Explanation:** The subarray `[4, -1, 2, 1]` has the maximum sum of 6.

### Example 2:
**Input:**  
`arr = [1]`  
**Output:**  
`1`

### Example 3:
**Input:**  
`arr = [5, 4, -1, 7, 8]`  
**Output:**  
`23`

---

## 💡 Approach

### Kadane's Algorithm

**Intuition:** The algorithm works by maintaining a running sum and updating the maximum sum found so far. If the running sum becomes negative, we reset it to zero.

#### Pseudocode
```
max_sum = -infinity
current_sum = 0

for each element in arr:
    current_sum = current_sum + element
    if current_sum > max_sum:
        max_sum = current_sum
    if current_sum < 0:
        current_sum = 0

return max_sum
```

#### Code (C++)
```cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadaneAlgorithm(vector<int>& arr) {
    int max_sum = INT_MIN;
    int current_sum = 0;
    
    for (int num : arr) {
        current_sum += num;
        
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
        
        if (current_sum < 0) {
            current_sum = 0;
        }
    }
    
    return max_sum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = kadaneAlgorithm(arr);
    cout << "Maximum subarray sum: " << result << endl;
    return 0;
}
```

**Output:**
```
Maximum subarray sum: 6
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the size of the array
- Space Complexity: `O(1)`

---

## 🧷 Implementations

### Java

<details>
<summary>Kadane's Algorithm</summary>

```java
public class Main {
    static int kadaneAlgorithm(int[] arr) {
        int maxSum = Integer.MIN_VALUE;
        int currentSum = 0;
        
        for (int num : arr) {
            currentSum += num;
            
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
            
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        
        return maxSum;
    }
    
    public static void main(String[] args) {
        int[] arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        int result = kadaneAlgorithm(arr);
        System.out.println("Maximum subarray sum: " + result);
    }
}
```

</details>

### Python

<details>
<summary>Kadane's Algorithm</summary>

```python
def kadane_algorithm(arr):
    max_sum = float('-inf')
    current_sum = 0
    
    for num in arr:
        current_sum += num
        
        if current_sum > max_sum:
            max_sum = current_sum
            
        if current_sum < 0:
            current_sum = 0
            
    return max_sum

arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
result = kadane_algorithm(arr)
print("Maximum subarray sum:", result)
```

</details>

### JavaScript

<details>
<summary>Kadane's Algorithm</summary>

```javascript
function kadaneAlgorithm(arr) {
    let maxSum = -Infinity;
    let currentSum = 0;
    
    for (let num of arr) {
        currentSum += num;
        
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    
    return maxSum;
}

let arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4];
let result = kadaneAlgorithm(arr);
console.log("Maximum subarray sum:", result);
```

</details>

---

## 🧭 Edge Cases to Consider

* All negative numbers array
* Single element array
* Array with all positive numbers
* Array with zeros

---

## 🧾 Complexity Summary

| Approach          | Time Complexity | Space Complexity |
| ----------------- | --------------- | ---------------- |
| Kadane's Algorithm| `O(N)`          | `O(1)`           |

---

## 🙌 Credits

Special thanks to **Striver** for the comprehensive A2Z DSA Course on TakeUforward.

---

## 📣 Notes

* Kadane's Algorithm is one of the most efficient algorithms for solving the maximum subarray sum problem
* The algorithm handles both positive and negative numbers
* For arrays with all negative numbers, the algorithm returns the maximum element (which is the least negative)
* Understanding this algorithm is crucial for many dynamic programming problems
