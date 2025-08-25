# ✅ Two Sum: Check if a Pair with Given Sum Exists in Array

**Problem Statement:** Given an array of integers `arr[]` and an integer `target`, return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

---

## 📌 Problem Statement

1st variant: Return YES if there exist two numbers such that their sum is equal to the target.

2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, return `{-1, -1}`.

**Note:** You are not allowed to use the same element twice. 

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 5, arr[] = {2, 6, 5, 8, 11}, target = 14`  
**Output:**  
`YES` (for 1st variant)

### Example 2:
**Input:**  
`N = 5, arr[] = {2, 6, 5, 8, 11}, target = 20`  
**Output:**  
`NO` (for 1st variant)

### Example 3:
**Input:**  
`N = 5, arr[] = {2, 6, 5, 8, 11}, target = 14`  
**Output:**  
`Indices: 0, 3` (for 2nd variant)

---

## 💡 Approaches

### 1) Brute Force Approach

**Intuition:** Check every pair of elements to see if they sum to the target.

#### Pseudocode
```
for i from 0 to n-1:
    for j from i+1 to n-1:
        if arr[i] + arr[j] == target:
            return YES
return NO
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

bool twoSum(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {2, 6, 5, 8, 11};
    int target = 14;
    cout << (twoSum(arr, 5, target) ? "YES" : "NO") << endl;
    return 0;
}
```

**Output:**
```
YES
```

**Complexity Analysis:**
- Time Complexity: `O(N^2)` (for nested loops)
- Space Complexity: `O(1)` (in-place checking)

### 2) Optimal Approach

**Intuition:** Use a hash map to store the elements and check if the complement (target - current element) exists.

#### Pseudocode
```
create an empty hash map
for each element in arr:
    if target - element exists in hash map:
        return YES
    add element to hash map
return NO
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

bool twoSumOptimal(int arr[], int n, int target) {
    unordered_set<int> seen;
    for (int i = 0; i < n; i++) {
        if (seen.count(target - arr[i])) {
            return true;
        }
        seen.insert(arr[i]);
    }
    return false;
}

int main() {
    int arr[] = {2, 6, 5, 8, 11};
    int target = 14;
    cout << (twoSumOptimal(arr, 5, target) ? "YES" : "NO") << endl;
    return 0;
}
```

**Output:**
```
YES
```

**Complexity Analysis:**
- Time Complexity: `O(N)` (single pass)
- Space Complexity: `O(N)` (for the hash map)

---

## 🧭 Edge Cases to Consider

* Empty array `[]` (should return NO)
* Single element array `[x]` (should return NO)
* Array with negative numbers

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Brute Force   | `O(N^2)`        | `O(1)`           |
| Optimal       | `O(N)`          | `O(N)`           |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* The optimal approach is significantly more efficient for larger datasets.
* Ensure to handle edge cases appropriately.
