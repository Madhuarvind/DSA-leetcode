# ✅ Reverse a Given Array

**Topic:** Reversing an array using different approaches

---

## 📌 Problem Statement

Given an array, reverse the elements of the array in place (without using extra space).

---

## 🧪 Examples

### Example 1:
**Input:**  
`arr = [1, 2, 3, 4, 5]`  
**Output:**  
`[5, 4, 3, 2, 1]`

### Example 2:
**Input:**  
`arr = [10, 20, 30, 40]`  
**Output:**  
`[40, 30, 20, 10]`

---

## 💡 Approaches

### 1. Two-Pointer Approach (Iterative)

**Intuition:** Use two pointers - one at the start and one at the end, swap elements and move pointers towards the center.

#### Pseudocode
```
function reverseArray(arr):
    start = 0
    end = length(arr) - 1
    while start < end:
        swap arr[start] and arr[end]
        start = start + 1
        end = end - 1
```

#### Code (C++)
```cpp
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;
    
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
```

### 2. Recursive Approach

**Intuition:** Recursively swap the first and last elements, then reverse the middle portion.

#### Pseudocode
```
function reverseArrayRecursive(arr, start, end):
    if start >= end:
        return
    swap arr[start] and arr[end]
    reverseArrayRecursive(arr, start + 1, end - 1)
```

#### Code (C++)
```cpp
void reverseArrayRecursive(vector<int>& arr, int start, int end) {
    if (start >= end) return;
    swap(arr[start], arr[end]);
    reverseArrayRecursive(arr, start + 1, end - 1);
}

// Wrapper function
void reverseArray(vector<int>& arr) {
    reverseArrayRecursive(arr, 0, arr.size() - 1);
}
```

### Complete Program (C++)
```cpp
#include <iostream>
#include <vector>
using namespace std;

// Iterative approach
void reverseArrayIterative(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;
    
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Recursive approach
void reverseArrayRecursive(vector<int>& arr, int start, int end) {
    if (start >= end) return;
    swap(arr[start], arr[end]);
    reverseArrayRecursive(arr, start + 1, end - 1);
}

void reverseArray(vector<int>& arr) {
    reverseArrayRecursive(arr, 0, arr.size() - 1);
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    cout << "Original array: ";
    printArray(arr);
    
    reverseArrayIterative(arr);
    cout << "Reversed (iterative): ";
    printArray(arr);
    
    // Reset array
    arr = {1, 2, 3, 4, 5};
    reverseArrayRecursive(arr, 0, arr.size() - 1);
    cout << "Reversed (recursive): ";
    printArray(arr);
    
    return 0;
}
```

**Output:**
```
Original array: 1 2 3 4 5 
Reversed (iterative): 5 4 3 2 1 
Reversed (recursive): 5 4 3 2 1 
```

**Complexity Analysis:**
- Time Complexity: `O(N)` for both approaches
- Space Complexity: 
  - Iterative: `O(1)`
  - Recursive: `O(N)` due to call stack

---

## 🧷 Implementations

### Java

<details>
<summary>Reverse Array - Both Approaches</summary>

```java
import java.util.Arrays;

public class Main {
    // Iterative approach
    public static void reverseArrayIterative(int[] arr) {
        int start = 0;
        int end = arr.length - 1;
        
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    
    // Recursive approach
    public static void reverseArrayRecursive(int[] arr, int start, int end) {
        if (start >= end) return;
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        reverseArrayRecursive(arr, start + 1, end - 1);
    }
    
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        
        System.out.println("Original: " + Arrays.toString(arr));
        
        reverseArrayIterative(arr);
        System.out.println("Iterative: " + Arrays.toString(arr));
        
        // Reset array
        arr = new int[]{1, 2, 3, 4, 5};
        reverseArrayRecursive(arr, 0, arr.length - 1);
        System.out.println("Recursive: " + Arrays.toString(arr));
    }
}
```

</details>

### Python

<details>
<summary>Reverse Array - Both Approaches</summary>

```python
# Iterative approach
def reverse_array_iterative(arr):
    start, end = 0, len(arr) - 1
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1

# Recursive approach
def reverse_array_recursive(arr, start, end):
    if start >= end:
        return
    arr[start], arr[end] = arr[end], arr[start]
    reverse_array_recursive(arr, start + 1, end - 1)

arr = [1, 2, 3, 4, 5]
print("Original:", arr)

reverse_array_iterative(arr)
print("Iterative:", arr)

# Reset array
arr = [1, 2, 3, 4, 5]
reverse_array_recursive(arr, 0, len(arr) - 1)
print("Recursive:", arr)
```

</details>

### JavaScript

<details>
<summary>Reverse Array - Both Approaches</summary>

```javascript
// Iterative approach
function reverseArrayIterative(arr) {
    let start = 0;
    let end = arr.length - 1;
    
    while (start < end) {
        [arr[start], arr[end]] = [arr[end], arr[start]];
        start++;
        end--;
    }
}

// Recursive approach
function reverseArrayRecursive(arr, start, end) {
    if (start >= end) return;
    [arr[start], arr[end]] = [arr[end], arr[start]];
    reverseArrayRecursive(arr, start + 1, end - 1);
}

let arr = [1, 2, 3, 4, 5];
console.log("Original:", arr);

reverseArrayIterative(arr);
console.log("Iterative:", arr);

// Reset array
arr = [1, 2, 3, 4, 5];
reverseArrayRecursive(arr, 0, arr.length - 1);
console.log("Recursive:", arr);
```

</details>

---

## 🧭 Edge Cases to Consider

* Empty array (should remain empty)
* Single element array (should remain unchanged)
* Array with duplicate elements
* Large arrays

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Iterative     | `O(N)`          | `O(1)`           |
| Recursive     | `O(N)`          | `O(N)`           |

---

## 🙌 Credits

Special thanks to **Striver** for the comprehensive A2Z DSA Course on TakeUforward.

---

## 📣 Notes

* Iterative approach is more memory efficient
* Recursive approach is elegant but can cause stack overflow for large arrays
* The two-pointer technique is a fundamental pattern for many array problems
* Always test with edge cases like empty arrays and single-element arrays
