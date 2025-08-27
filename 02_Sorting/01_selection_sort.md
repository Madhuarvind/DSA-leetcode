# ✅ Selection Sort Algorithm

**Problem Statement:** Given an array of N integers, write a program to implement the Selection sorting algorithm.

---

## 📌 Problem Statement

The Selection Sort algorithm sorts an array by repeatedly finding the minimum element from the unsorted part and putting it at the beginning.

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

### 1) Selection Sort Algorithm

**Intuition:** The algorithm divides the input list into two parts: a sorted and an unsorted part. It repeatedly selects the smallest element from the unsorted part and moves it to the end of the sorted part.

#### Pseudocode
```
for i from 0 to n-1:
    min_index = i
    for j from i+1 to n:
        if arr[j] < arr[min_index]:
            min_index = j
    swap arr[i] and arr[min_index]
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
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
<summary>Selection Sort</summary>

```java
public class Main {
    static void selectionSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            int min_index = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[min_index]) {
                    min_index = j;
                }
            }
            int temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp;
        }
    }

    public static void main(String[] args) {
        int[] arr = {64, 25, 12, 22, 11};
        selectionSort(arr);
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
<summary>Selection Sort</summary>

```python
def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]

arr = [64, 25, 12, 22, 11]
selection_sort(arr)
print("Sorted array:", arr)
```

</details>

### JavaScript

<details>
<summary>Selection Sort</summary>

```javascript
function selectionSort(arr) {
    let n = arr.length;
    for (let i = 0; i < n - 1; i++) {
        let min_index = i;
        for (let j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        [arr[i], arr[min_index]] = [arr[min_index], arr[i]];
    }
}

let arr = [64, 25, 12, 22, 11];
selectionSort(arr);
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
| Selection   | `O(N^2)`        | `O(1)`           |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* Selection sort is not the most efficient algorithm for large datasets.
* It is useful for small datasets or when memory space is limited.
* The algorithm is in-place and does not require additional storage.
