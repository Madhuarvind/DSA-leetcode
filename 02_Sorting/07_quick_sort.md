# ✅ Quick Sort Algorithm

**Problem Statement:** Given an array of n integers, sort the array using the QuickSort method.

---

## 📌 Problem Statement

QuickSort is an efficient sorting algorithm that uses a divide-and-conquer approach to sort elements. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot.

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 5, Arr[] = {4, 1, 7, 9, 3}`  
**Output:**  
`1 3 4 7 9`  

### Example 2:
**Input:**  
`N = 8, Arr[] = {4, 6, 2, 5, 7, 9, 1, 3}`  
**Output:**  
`1 2 3 4 5 6 7 9`  

---

## 💡 Approaches

### 1) Quick Sort Algorithm

**Intuition:** The algorithm sorts the array by recursively partitioning it into smaller sub-arrays.

#### Pseudocode
```
function quickSort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)
        quickSort(arr, low, pi - 1)
        quickSort(arr, pi + 1, high)

function partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    for j from low to high - 1:
        if arr[j] < pivot:
            i += 1
            swap(arr[i], arr[j])
    swap(arr[i + 1], arr[high])
    return i + 1
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {4, 1, 7, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
```

**Output:**
```
Sorted array: 1 3 4 7 9
```

**Complexity Analysis:**
- Time Complexity: `O(N log N)` on average, `O(N^2)` in the worst case.
- Space Complexity: `O(log N)` due to recursion stack.

---

## 🧷 Implementations

### Java

<details>
<summary>Quick Sort</summary>

```java
public class Main {
    static int partition(int[] arr, int low, int high) {
        int pivot = arr[high];
        int i = (low - 1);
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        return i + 1;
    }

    static void quickSort(int[] arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    public static void main(String[] args) {
        int[] arr = {4, 1, 7, 9, 3};
        quickSort(arr, 0, arr.length - 1);
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
<summary>Quick Sort</summary>

```python
def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    for j in range(low, high):
        if arr[j] < pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

def quick_sort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)
        quick_sort(arr, low, pi - 1)
        quick_sort(arr, pi + 1, high)

arr = [4, 1, 7, 9, 3]
quick_sort(arr, 0, len(arr) - 1)
print("Sorted array:", arr)
```

</details>

### JavaScript

<details>
<summary>Quick Sort</summary>

```javascript
function partition(arr, low, high) {
    let pivot = arr[high];
    let i = low - 1;
    for (let j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            [arr[i], arr[j]] = [arr[j], arr[i]];
        }
    }
    [arr[i + 1], arr[high]] = [arr[high], arr[i + 1]];
    return i + 1;
}

function quickSort(arr, low, high) {
    if (low < high) {
        let pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

let arr = [4, 1, 7, 9, 3];
quickSort(arr, 0, arr.length - 1);
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
| Quick Sort    | `O(N log N)` (average) | `O(log N)` |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* Quick Sort is generally faster in practice than other `O(N log N)` algorithms like Merge Sort and Heap Sort.
* It is not a stable sort.
