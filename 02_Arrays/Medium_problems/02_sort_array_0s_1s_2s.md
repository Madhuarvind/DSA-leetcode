# ✅ Sort an Array of 0s, 1s, and 2s

**Problem Statement:** Given an array consisting of only 0s, 1s, and 2s, write a program to in-place sort the array without using inbuilt sort functions. (Expected: Single pass - O(N) and constant space)

---

## 📌 Problem Statement

The task is to sort an array containing only 0s, 1s, and 2s in a single pass.

---

## 🧪 Examples

### Example 1:
**Input:**  
`array[] = {0, 1, 2, 0, 1, 2}`  
**Output:**  
`0, 0, 1, 1, 2, 2`  

### Example 2:
**Input:**  
`array[] = {2, 0, 1, 2, 0, 1}`  
**Output:**  
`0, 0, 1, 1, 2, 2`  

---

## 💡 Approaches

### 1) Dutch National Flag Algorithm

**Intuition:** Use three pointers to partition the array into three sections: 0s, 1s, and 2s.

#### Pseudocode
```
low = 0
mid = 0
high = n - 1

while mid <= high:
    if arr[mid] == 0:
        swap(arr[low], arr[mid])
        low++
        mid++
    elif arr[mid] == 1:
        mid++
    else:
        swap(arr[mid], arr[high])
        high--
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
}

int main() {
    int arr[] = {0, 1, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, n);
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
0 0 1 1 2 2
```

**Complexity Analysis:**
- Time Complexity: `O(N)` (single pass)
- Space Complexity: `O(1)` (in-place sorting)

---

## 🧷 Implementations

### Java

<details>
<summary>Sort Array of 0s, 1s, and 2s</summary>

```java
public class Main {
    static void sortArray(int[] arr) {
        int low = 0, mid = 0, high = arr.length - 1;
        while (mid <= high) {
            switch (arr[mid]) {
                case 0:
                    int temp = arr[low];
                    arr[low++] = arr[mid];
                    arr[mid++] = temp;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    temp = arr[mid];
                    arr[mid] = arr[high];
                    arr[high--] = temp;
                    break;
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = {0, 1, 2, 0, 1, 2};
        sortArray(arr);
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
<summary>Sort Array of 0s, 1s, and 2s</summary>

```python
def sort_array(arr):
    low, mid, high = 0, 0, len(arr) - 1
    while mid <= high:
        if arr[mid] == 0:
            arr[low], arr[mid] = arr[mid], arr[low]
            low += 1
            mid += 1
        elif arr[mid] == 1:
            mid += 1
        else:
            arr[mid], arr[high] = arr[high], arr[mid]
            high -= 1

arr = [0, 1, 2, 0, 1, 2]
sort_array(arr)
print("Sorted array:", arr)
```

</details>

### JavaScript

<details>
<summary>Sort Array of 0s, 1s, and 2s</summary>

```javascript
function sortArray(arr) {
    let low = 0, mid = 0, high = arr.length - 1;
    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                [arr[low], arr[mid]] = [arr[mid], arr[low]];
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                [arr[mid], arr[high]] = [arr[high], arr[mid]];
                high--;
                break;
        }
    }
}

let arr = [0, 1, 2, 0, 1, 2];
sortArray(arr);
console.log("Sorted array:", arr);
```

</details>

---

## 🧭 Edge Cases to Consider

* Empty array `[]` (should handle gracefully)
* Single element array `[0]`, `[1]`, or `[2]` (should remain unchanged)
* Already sorted array
* Array with all elements the same

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Sort Array    | `O(N)`          | `O(1)`           |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* This algorithm is efficient for sorting arrays with a limited range of values.
* It is commonly known as the Dutch National Flag problem.
