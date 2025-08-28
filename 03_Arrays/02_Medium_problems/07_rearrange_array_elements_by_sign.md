# ✅ Rearrange Array Elements by Sign

**Topic:** Rearranging an array such that all negative numbers appear before all positive numbers.

---

## 📌 Problem Statement

Given an array `arr[]` of integers, rearrange the array elements so that all negative numbers appear before all positive numbers while maintaining the relative order of the negative and positive numbers.

---

## 🧪 Examples

### Example 1:
**Input:**  
`arr = [12, -7, -5, 70, -2, 0]`  
**Output:**  
`[-7, -5, -2, 12, 70, 0]`  
**Explanation:** The negative numbers are moved to the front while maintaining their relative order.

### Example 2:
**Input:**  
`arr = [1, 2, 3, -1, -2, -3]`  
**Output:**  
`[-1, -2, -3, 1, 2, 3]`

---

## 💡 Approach

### Two-Pointer Technique

**Intuition:** Use two pointers to rearrange the elements in a single pass.

#### Pseudocode
```
left = 0
right = 0

while right < length of arr:
    if arr[right] < 0:
        swap arr[left] and arr[right]
        left += 1
    right += 1

return arr
```

#### Code (C++)
```cpp
#include <iostream>
#include <vector>
using namespace std;

void rearrangeArray(vector<int>& arr) {
    int left = 0, right = 0;
    
    while (right < arr.size()) {
        if (arr[right] < 0) {
            swap(arr[left], arr[right]);
            left++;
        }
        right++;
    }
}

int main() {
    vector<int> arr = {12, -7, -5, 70, -2, 0};
    rearrangeArray(arr);
    
    cout << "Rearranged Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
```

**Output:**
```
Rearranged Array: -7 -5 -2 12 70 0
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the number of elements in the array.
- Space Complexity: `O(1)` since we are rearranging in place.

---

## 🧷 Implementations

### Java

<details>
<summary>Rearrange Array Elements by Sign</summary>

```java
public class Main {
    static void rearrangeArray(int[] arr) {
        int left = 0, right = 0;
        
        while (right < arr.length) {
            if (arr[right] < 0) {
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
                left++;
            }
            right++;
        }
    }
    
    public static void main(String[] args) {
        int[] arr = {12, -7, -5, 70, -2, 0};
        rearrangeArray(arr);
        
        System.out.print("Rearranged Array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
```

</details>

### Python

<details>
<summary>Rearrange Array Elements by Sign</summary>

```python
def rearrange_array(arr):
    left = 0
    right = 0
    
    while right < len(arr):
        if arr[right] < 0:
            arr[left], arr[right] = arr[right], arr[left]
            left += 1
        right += 1

arr = [12, -7, -5, 70, -2, 0]
rearrange_array(arr)
print("Rearranged Array:", arr)
```

</details>

### JavaScript

<details>
<summary>Rearrange Array Elements by Sign</summary>

```javascript
function rearrangeArray(arr) {
    let left = 0, right = 0;
    
    while (right < arr.length) {
        if (arr[right] < 0) {
            [arr[left], arr[right]] = [arr[right], arr[left]];
            left++;
        }
        right++;
    }
}

let arr = [12, -7, -5, 70, -2, 0];
rearrangeArray(arr);
console.log("Rearranged Array:", arr);
```

</details>

---

## 🧭 Edge Cases to Consider

* All elements are negative.
* All elements are positive.
* Mixed elements with zeros.

---

## 🧾 Complexity Summary

| Approach                        | Time Complexity | Space Complexity |
| ------------------------------- | --------------- | ---------------- |
| Rearrange Array Elements by Sign| `O(N)`          | `O(1)`           |

---

## 🙌 Credits

Special thanks to **TakeUforward** for the comprehensive explanation of the rearrange array elements by sign problem.

---

## 📣 Notes

* This problem is a classic example of using the two-pointer technique for in-place rearrangement.
* Understanding this algorithm is useful for various array manipulation tasks.
