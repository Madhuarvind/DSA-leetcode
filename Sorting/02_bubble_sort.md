# ✅ Bubble Sort Algorithm

**Problem Statement:** Given an array of N integers, write a program to implement the Bubble sorting algorithm.

---

## 📌 Problem Statement

The Bubble Sort algorithm sorts an array by repeatedly stepping through the list, comparing adjacent elements and swapping them if they are in the wrong order.

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 6, array[] = {13, 46, 24, 52, 20, 9}`  
**Output:**  
`9, 13, 20, 24, 46, 52`  
**Explanation:** After sorting the array is: `9, 13, 20, 24, 46, 52`

### Example 2:
**Input:**  
`N = 5, array[] = {5, 4, 3, 2, 1}`  
**Output:**  
`1, 2, 3, 4, 5`  
**Explanation:** After sorting the array is: `1, 2, 3, 4, 5`

---

## 💡 Approaches

### 1) Bubble Sort Algorithm

**Intuition:** The algorithm compares each pair of adjacent elements and swaps them if they are in the wrong order. This process is repeated until the array is sorted.

#### Pseudocode
```
for i from 0 to n-1:
    for j from 0 to n-i-1:
        if arr[j] > arr[j+1]:
            swap(arr[j], arr[j+1])
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
```

**Output:**
```
Sorted array: 
11 12 22 25 64
```

**Complexity Analysis:**
- Time Complexity: `O(N^2)` (for nested loops)
- Space Complexity: `O(1)` (in-place sorting)

---

## 🧷 Implementations

### Java

<details>
<summary>Bubble Sort</summary>

```java
public class Main {
    static void bubbleSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = {64, 25, 12, 22, 11};
        bubbleSort(arr);
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
<summary>Bubble Sort</summary>

```python
def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

arr = [64, 25, 12, 22, 11]
bubble_sort(arr)
print("Sorted array:", arr)
```

</details>

### JavaScript

<details>
<summary>Bubble Sort</summary>

```javascript
function bubbleSort(arr) {
    let n = arr.length;
    for (let i = 0; i < n - 1; i++) {
        for (let j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
            }
        }
    }
}

let arr = [64, 25, 12, 22, 11];
bubbleSort(arr);
console.log("Sorted array:", arr);
```

</details>

---

## 🧭 Edge Cases to Consider

* Empty array `[]` (should handle gracefully)
* Single element array `[x]` (should remain unchanged)
* Already sorted array
* Array with duplicate elements

---

## 🧾 Complexity Summary

| Approach    | Time Complexity | Space Complexity |
| ----------- | --------------- | ---------------- |
| Bubble Sort | `O(N^2)`        | `O(1)`           |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* Bubble sort is not the most efficient algorithm for large datasets.
* It is useful for small datasets or when memory space is limited.
* The algorithm is in-place and does not require additional storage.

![Bubble Sort Algorithm](https://takeuforward.org/wp-content/uploads/2021/09/Bubble-Sort-Algorithm.png)
