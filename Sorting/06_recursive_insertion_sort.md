# ✅ Recursive Insertion Sort Algorithm

**Problem Statement:** Given an array of integers, implement the Insertion Sort algorithm using recursion to sort the array.

---

## 📌 Problem Statement

Insertion Sort is a simple sorting algorithm that builds a sorted array one element at a time by repeatedly taking the next element from the input data and inserting it into the correct position in the already sorted part of the array.

---

## 🧪 Examples

### Example 1:
**Input:**  
`arr[] = {12, 11, 13, 5, 6}`  
**Output:**  
`Sorted array: {5, 6, 11, 12, 13}`  

### Example 2:
**Input:**  
`arr[] = {64, 34, 25, 12, 22, 11, 90}`  
**Output:**  
`Sorted array: {11, 12, 22, 25, 34, 64, 90}`  

---

## 💡 Approaches

### 1) Recursive Insertion Sort Algorithm

**Intuition:** The algorithm sorts the array by recursively calling itself until the array is sorted.

#### Pseudocode
```
function insertionSort(arr, n):
    if n <= 1:
        return
    insertionSort(arr, n - 1)
    last = arr[n - 1]
    j = n - 2
    while j >= 0 and arr[j] > last:
        arr[j + 1] = arr[j]
        j -= 1
    arr[j + 1] = last
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    if (n <= 1) return;

    insertionSort(arr, n - 1);
    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
```

**Output:**
```
Sorted array: 5 6 11 12 13
```

**Complexity Analysis:**
- Time Complexity: `O(N^2)` (due to nested loops)
- Space Complexity: `O(N)` (due to recursion stack)

---

## 🧷 Implementations

### Java

<details>
<summary>Recursive Insertion Sort</summary>

```java
public class Main {
    static void insertionSort(int[] arr, int n) {
        if (n <= 1) return;

        insertionSort(arr, n - 1);
        int last = arr[n - 1];
        int j = n - 2;

        while (j >= 0 && arr[j] > last) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = last;
    }

    public static void main(String[] args) {
        int[] arr = {12, 11, 13, 5, 6};
        insertionSort(arr, arr.length);
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
<summary>Recursive Insertion Sort</summary>

```python
def insertion_sort(arr, n):
    if n <= 1:
        return

    insertion_sort(arr, n - 1)
    last = arr[n - 1]
    j = n - 2

    while j >= 0 and arr[j] > last:
        arr[j + 1] = arr[j]
        j -= 1
    arr[j + 1] = last

arr = [12, 11, 13, 5, 6]
insertion_sort(arr, len(arr))
print("Sorted array:", arr)
```

</details>

### JavaScript

<details>
<summary>Recursive Insertion Sort</summary>

```javascript
function insertionSort(arr, n) {
    if (n <= 1) return;

    insertionSort(arr, n - 1);
    let last = arr[n - 1];
    let j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

let arr = [12, 11, 13, 5, 6];
insertionSort(arr, arr.length);
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
| Recursive Insertion Sort | `O(N^2)` | `O(N)` |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* Recursive Insertion Sort is less efficient than iterative versions.
* It is primarily used for educational purposes to demonstrate recursion.
