# ✅ Merge Sort Algorithm

**Problem Statement:** Given an array of integers, implement the Merge Sort algorithm to sort the array.

---

## 📌 Problem Statement

Merge Sort is a divide-and-conquer algorithm that sorts an array by recursively dividing it into halves, sorting each half, and then merging the sorted halves back together.

---

## 🧪 Examples

### Example 1:
**Input:**  
`arr[] = {38, 27, 43, 3, 9, 82, 10}`  
**Output:**  
`Sorted array: {3, 9, 10, 27, 38, 43, 82}`  

### Example 2:
**Input:**  
`arr[] = {12, 11, 13, 5, 6, 7}`  
**Output:**  
`Sorted array: {5, 6, 7, 11, 12, 13}`  

---

## 💡 Approaches

### 1) Merge Sort Algorithm

**Intuition:** The algorithm divides the array into two halves, recursively sorts each half, and then merges the sorted halves.

#### Pseudocode
```
function mergeSort(arr):
    if length of arr <= 1:
        return arr
    mid = length of arr // 2
    left = mergeSort(arr[0:mid])
    right = mergeSort(arr[mid:length of arr])
    return merge(left, right)

function merge(left, right):
    result = []
    while left and right are not empty:
        if left[0] <= right[0]:
            append left[0] to result
            remove left[0]
        else:
            append right[0] to result
            remove right[0]
    append remaining elements of left and right to result
    return result
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    mergeSort(arr, 0, arr.size() - 1);
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
```

**Output:**
```
Sorted array: 3 9 10 27 38 43 82
```

**Complexity Analysis:**
- Time Complexity: `O(N log N)` (due to the divide and conquer approach)
- Space Complexity: `O(N)` (for the temporary arrays used in merging)

---

## 🧷 Implementations

### Java

<details>
<summary>Merge Sort</summary>

```java
public class Main {
    static void merge(int[] arr, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;
        int[] L = new int[n1];
        int[] R = new int[n2];

        for (int i = 0; i < n1; i++)
            L[i] = arr[left + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k++] = L[i++];
            } else {
                arr[k++] = R[j++];
            }
        }
        while (i < n1) {
            arr[k++] = L[i++];
        }
        while (j < n2) {
            arr[k++] = R[j++];
        }
    }

    static void mergeSort(int[] arr, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }

    public static void main(String[] args) {
        int[] arr = {38, 27, 43, 3, 9, 82, 10};
        mergeSort(arr, 0, arr.length - 1);
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
<summary>Merge Sort</summary>

```python
def merge(arr, left, mid, right):
    n1 = mid - left + 1
    n2 = right - mid
    L = arr[left:mid + 1]
    R = arr[mid + 1:right + 1]

    i = j = 0
    k = left
    while i < n1 and j < n2:
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1

    while i < n1:
        arr[k] = L[i]
        i += 1
        k += 1

    while j < n2:
        arr[k] = R[j]
        j += 1
        k += 1

def merge_sort(arr, left, right):
    if left < right:
        mid = left + (right - left) // 2
        merge_sort(arr, left, mid)
        merge_sort(arr, mid + 1, right)
        merge(arr, left, mid, right)

arr = [38, 27, 43, 3, 9, 82, 10]
merge_sort(arr, 0, len(arr) - 1)
print("Sorted array:", arr)
```

</details>

### JavaScript

<details>
<summary>Merge Sort</summary>

```javascript
function merge(arr, left, mid, right) {
    let n1 = mid - left + 1;
    let n2 = right - mid;
    let L = new Array(n1);
    let R = new Array(n2);

    for (let i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (let j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    let i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
}

function mergeSort(arr, left, right) {
    if (left < right) {
        let mid = left + Math.floor((right - left) / 2);
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

let arr = [38, 27, 43, 3, 9, 82, 10];
mergeSort(arr, 0, arr.length - 1);
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
| Merge Sort    | `O(N log N)`    | `O(N)`           |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* Merge Sort is efficient for large datasets and is stable.
* It is commonly used in external sorting algorithms.
