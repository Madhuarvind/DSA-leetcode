# ✅ Recursive Bubble Sort Algorithm

**Problem Statement:** Given an array of integers, implement the Bubble Sort algorithm using recursion to sort the array.

---

## 📌 Problem Statement

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

---

## 🧪 Examples

### Example 1:
**Input:**  
`arr[] = {64, 34, 25, 12, 22, 11, 90}`  
**Output:**  
`Sorted array: {11, 12, 22, 25, 34, 64, 90}`  

### Example 2:
**Input:**  
`arr[] = {5, 1, 4, 2, 8}`  
**Output:**  
`Sorted array: {1, 2, 4, 5, 8}`  

---

## 💡 Approaches

### 1) Recursive Bubble Sort Algorithm

**Intuition:** The algorithm sorts the array by recursively calling itself until the array is sorted.

#### Pseudocode
```
function bubbleSort(arr, n):
    if n == 1:
        return
    for i from 0 to n-2:
        if arr[i] > arr[i + 1]:
            swap(arr[i], arr[i + 1])
    bubbleSort(arr, n - 1)
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    if (n == 1) return;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, n - 1);
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
```

**Output:**
```
Sorted array: 11 12 22 25 34 64 90
```

**Complexity Analysis:**
- Time Complexity: `O(N^2)` (due to nested loops)
- Space Complexity: `O(N)` (due to recursion stack)

---

## 🧷 Implementations

### Java

<details>
<summary>Recursive Bubble Sort</summary>

```java
public class Main {
    static void bubbleSort(int[] arr, int n) {
        if (n == 1) return;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        bubbleSort(arr, n - 1);
    }

    public static void main(String[] args) {
        int[] arr = {64, 34, 25, 12, 22, 11, 90};
        bubbleSort(arr, arr.length);
        System.out.println("Sorted array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
```

</details>

### Python

<details>
<summary>Recursive Bubble Sort</summary>

```python
def bubble_sort(arr, n):
    if n == 1:
        return

    for i in range(n - 1):
        if arr[i] > arr[i + 1]:
            arr[i], arr[i + 1] = arr[i + 1], arr[i]

    bubble_sort(arr, n - 1)

arr = [64, 34, 25, 12, 22, 11, 90]
bubble_sort(arr, len(arr))
print("Sorted array:", arr)
```

</details>

### JavaScript

<details>
<summary>Recursive Bubble Sort</summary>

```javascript
function bubbleSort(arr, n) {
    if (n === 1) return;

    for (let i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            [arr[i], arr[i + 1]] = [arr[i + 1], arr[i]];
        }
    }
    bubbleSort(arr, n - 1);
}

let arr = [64, 34, 25, 12, 22, 11, 90];
bubbleSort(arr, arr.length);
console.log("Sorted array:", arr);
```

</details>

---

## 🧭 Edge Cases to Consider

* Empty array `[]` (should handle gracefully)
* Single element array `[x]` (should remain unchanged)
* Already sorted array
* Array with all elements the same

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Recursive Bubble Sort | `O(N^2)` | `O(N)` |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* Recursive Bubble Sort is less efficient than iterative versions.
* It is primarily used for educational purposes to demonstrate recursion.
