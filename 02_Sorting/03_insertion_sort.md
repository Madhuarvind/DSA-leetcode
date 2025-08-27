# ✅ Insertion Sort Algorithm

**Problem Statement:** Given an array of N integers, write a program to implement the Insertion sorting algorithm.

---

## 📌 Problem Statement

The Insertion Sort algorithm builds a sorted array one element at a time by repeatedly taking the next element from the input data and inserting it into the correct position in the already sorted part of the array.

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

### 1) Insertion Sort Algorithm

**Intuition:** The algorithm divides the array into a sorted and an unsorted part. It iterates through the unsorted part and inserts each element into the correct position in the sorted part.

#### Pseudocode
```
for i from 1 to n-1:
    key = arr[i]
    j = i - 1
    while j >= 0 and arr[j] > key:
        arr[j + 1] = arr[j]
        j = j - 1
    arr[j + 1] = key
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
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
<summary>Insertion Sort</summary>

```java
public class Main {
    static void insertionSort(int[] arr) {
        int n = arr.length;
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    public static void main(String[] args) {
        int[] arr = {64, 25, 12, 22, 11};
        insertionSort(arr);
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
<summary>Insertion Sort</summary>

```python
def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

arr = [64, 25, 12, 22, 11]
insertion_sort(arr)
print("Sorted array:", arr)
```

</details>

### JavaScript

<details>
<summary>Insertion Sort</summary>

```javascript
function insertionSort(arr) {
    let n = arr.length;
    for (let i = 1; i < n; i++) {
        let key = arr[i];
        let j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

let arr = [64, 25, 12, 22, 11];
insertionSort(arr);
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

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Insertion Sort| `O(N^2)`        | `O(1)`           |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* Insertion sort is efficient for small datasets.
* It is adaptive, meaning it performs better on partially sorted arrays.
* The algorithm is in-place and does not require additional storage.

![Insertion Sort Algorithm](https://takeuforward.org/wp-content/uploads/2021/09/Insertion-Sort-Algorithm.png)
