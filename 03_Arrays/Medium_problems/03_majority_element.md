# ✅ Find the Majority Element that Occurs More Than N/2 Times

**Problem Statement:** Given an array of size `N`, find the majority element that occurs more than `N/2` times.

---

## 📌 Problem Statement

A majority element in an array is an element that appears more than `N/2` times in the array. Your task is to find this element.

---

## 🧪 Examples

### Example 1:
**Input:**  
`arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4}`  
**Output:**  
`4`  
**Explanation:** The element `4` appears `5` times which is more than `N/2` (where `N = 9`).

### Example 2:
**Input:**  
`arr[] = {1, 2, 3, 4}`  
**Output:**  
`-1`  
**Explanation:** There is no majority element in this array.

---

## 💡 Approaches

### 1) Boyer-Moore Voting Algorithm

**Intuition:** This algorithm works by maintaining a count of the current candidate for majority and adjusting it based on the elements in the array.

#### Pseudocode
```
candidate = None
count = 0

for num in arr:
    if count == 0:
        candidate = num
    count += (1 if num == candidate else -1)

# Verify if candidate is indeed the majority
if arr.count(candidate) > len(arr) // 2:
    return candidate
return -1
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n) {
    int candidate = -1, count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
        }
        count += (arr[i] == candidate) ? 1 : -1;
    }

    // Verify if candidate is indeed the majority
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) count++;
    }

    return (count > n / 2) ? candidate : -1;
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Majority Element: " << majorityElement(arr, n) << endl;
    return 0;
}
```

**Output:**
```
Majority Element: 4
```

**Complexity Analysis:**
- Time Complexity: `O(N)` (single pass)
- Space Complexity: `O(1)` (constant space)

---

## 🧷 Implementations

### Java

<details>
<summary>Majority Element</summary>

```java
public class Main {
    static int majorityElement(int[] arr) {
        int candidate = -1, count = 0;

        for (int num : arr) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        // Verify if candidate is indeed the majority
        count = 0;
        for (int num : arr) {
            if (num == candidate) count++;
        }

        return (count > arr.length / 2) ? candidate : -1;
    }

    public static void main(String[] args) {
        int[] arr = {3, 3, 4, 2, 4, 4, 2, 4, 4};
        System.out.println("Majority Element: " + majorityElement(arr));
    }
}
```

</details>

### Python

<details>
<summary>Majority Element</summary>

```python
def majority_element(arr):
    candidate, count = None, 0

    for num in arr:
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)

    # Verify if candidate is indeed the majority
    count = arr.count(candidate)
    return candidate if count > len(arr) // 2 else -1

arr = [3, 3, 4, 2, 4, 4, 2, 4, 4]
print("Majority Element:", majority_element(arr))
```

</details>

### JavaScript

<details>
<summary>Majority Element</summary>

```javascript
function majorityElement(arr) {
    let candidate = null, count = 0;

    for (let num of arr) {
        if (count === 0) {
            candidate = num;
        }
        count += (num === candidate) ? 1 : -1;
    }

    // Verify if candidate is indeed the majority
    count = arr.filter(num => num === candidate).length;
    return count > arr.length / 2 ? candidate : -1;
}

let arr = [3, 3, 4, 2, 4, 4, 2, 4, 4];
console.log("Majority Element:", majorityElement(arr));
```

</details>

---

## 🧭 Edge Cases to Consider

* Empty array `[]` (should return -1)
* Single element array `[x]` (should return x)
* Array with all elements the same

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Boyer-Moore   | `O(N)`          | `O(1)`           |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* The Boyer-Moore Voting Algorithm is efficient for finding the majority element.
* Ensure to handle edge cases appropriately.
