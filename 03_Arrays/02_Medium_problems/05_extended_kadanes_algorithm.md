# ✅ Extended Kadane's Algorithm: Maximum Subarray Sum with Indices

**Topic:** Finding the maximum sum of a contiguous subarray and its indices using an extended version of Kadane's Algorithm.

---

## 📌 Problem Statement

Given an integer array `arr[]`, find the maximum sum of a contiguous subarray (subarray with consecutive elements) and return the starting and ending indices of that subarray.

---

## 🧪 Examples

### Example 1:
**Input:**  
`arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]`  
**Output:**  
`Maximum Sum: 6, Start Index: 3, End Index: 6`  
**Explanation:** The subarray `[4, -1, 2, 1]` has the maximum sum of 6.

### Example 2:
**Input:**  
`arr = [1]`  
**Output:**  
`Maximum Sum: 1, Start Index: 0, End Index: 0`

### Example 3:
**Input:**  
`arr = [5, 4, -1, 7, 8]`  
**Output:**  
`Maximum Sum: 23, Start Index: 0, End Index: 4`

---

## 💡 Approach

### Extended Kadane's Algorithm

**Intuition:** The algorithm works by maintaining a running sum and updating the maximum sum found so far. Additionally, we track the starting and ending indices of the maximum subarray.

#### Pseudocode
```
max_sum = -infinity
current_sum = 0
start = 0
end = 0
temp_start = 0

for i from 0 to n-1:
    current_sum += arr[i]
    
    if current_sum > max_sum:
        max_sum = current_sum
        start = temp_start
        end = i
        
    if current_sum < 0:
        current_sum = 0
        temp_start = i + 1

return max_sum, start, end
```

#### Code (C++)
```cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

tuple<int, int, int> extendedKadaneAlgorithm(vector<int>& arr) {
    int max_sum = INT_MIN;
    int current_sum = 0;
    int start = 0, end = 0, temp_start = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        current_sum += arr[i];
        
        if (current_sum > max_sum) {
            max_sum = current_sum;
            start = temp_start;
            end = i;
        }
        
        if (current_sum < 0) {
            current_sum = 0;
            temp_start = i + 1;
        }
    }
    
    return make_tuple(max_sum, start, end);
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    auto [max_sum, start, end] = extendedKadaneAlgorithm(arr);
    cout << "Maximum Sum: " << max_sum << ", Start Index: " << start << ", End Index: " << end << endl;
    return 0;
}
```

**Output:**
```
Maximum Sum: 6, Start Index: 3, End Index: 6
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the size of the array
- Space Complexity: `O(1)`

---

## 🧷 Implementations

### Java

<details>
<summary>Extended Kadane's Algorithm</summary>

```java
public class Main {
    static int[] extendedKadaneAlgorithm(int[] arr) {
        int maxSum = Integer.MIN_VALUE;
        int currentSum = 0;
        int start = 0, end = 0, tempStart = 0;
        
        for (int i = 0; i < arr.length; i++) {
            currentSum += arr[i];
            
            if (currentSum > maxSum) {
                maxSum = currentSum;
                start = tempStart;
                end = i;
            }
            
            if (currentSum < 0) {
                currentSum = 0;
                tempStart = i + 1;
            }
        }
        
        return new int[]{maxSum, start, end};
    }
    
    public static void main(String[] args) {
        int[] arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        int[] result = extendedKadaneAlgorithm(arr);
        System.out.println("Maximum Sum: " + result[0] + ", Start Index: " + result[1] + ", End Index: " + result[2]);
    }
}
```

</details>

### Python

<details>
<summary>Extended Kadane's Algorithm</summary>

```python
def extended_kadane_algorithm(arr):
    max_sum = float('-inf')
    current_sum = 0
    start = end = temp_start = 0
    
    for i in range(len(arr)):
        current_sum += arr[i]
        
        if current_sum > max_sum:
            max_sum = current_sum
            start = temp_start
            end = i
            
        if current_sum < 0:
            current_sum = 0
            temp_start = i + 1
            
    return max_sum, start, end

arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
result = extended_kadane_algorithm(arr)
print(f"Maximum Sum: {result[0]}, Start Index: {result[1]}, End Index: {result[2]}")
```

</details>

### JavaScript

<details>
<summary>Extended Kadane's Algorithm</summary>

```javascript
function extendedKadaneAlgorithm(arr) {
    let maxSum = -Infinity;
    let currentSum = 0;
    let start = 0, end = 0, tempStart = 0;
    
    for (let i = 0; i < arr.length; i++) {
        currentSum += arr[i];
        
        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }
        
        if (currentSum < 0) {
            currentSum = 0;
            tempStart = i + 1;
        }
    }
    
    return { maxSum, start, end };
}

let arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4];
let result = extendedKadaneAlgorithm(arr);
console.log(`Maximum Sum: ${result.maxSum}, Start Index: ${result.start}, End Index: ${result.end}`);
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

| Approach                | Time Complexity | Space Complexity |
| ----------------------- | --------------- | ---------------- |
| Extended Kadane's      | `O(N)`          | `O(1)`           |

---

## 🙌 Credits

Special thanks to **Striver** for the comprehensive A2Z DSA Course on TakeUforward.

---

## 📣 Notes

* This extended version of Kadane's Algorithm is useful for not only finding the maximum sum but also identifying the subarray that contributes to this sum.
* Understanding this algorithm is crucial for many dynamic programming problems.
