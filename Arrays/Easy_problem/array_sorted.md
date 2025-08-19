# ✅ Check if an Array is Sorted (Non-decreasing)

 **Check if an array is sorted in ascending (non-decreasing) order**. Two consecutive equal values are considered sorted.

---

## 📌 Problem Statement

Given an array of size `n`, determine if it is sorted in **ascending / increasing / non-decreasing** order.

* Return **`True`** if sorted, else return **`False`**.
* **Note:** Equal adjacent values are allowed (e.g., `[1, 2, 2, 3]` is sorted).

---

## 🧪 Examples

```
Input:  [1, 2, 3, 4, 5]
Output: True

Input:  [1, 1, 2, 3, 3]
Output: True

Input:  [1, 3, 2, 4]
Output: False

Input:  []
Output: True   (empty array is trivially sorted)

Input:  [42]
Output: True   (single element is trivially sorted)
```

---

## 💡 Approaches

### 1) Brute Force (Compare with all future elements)

**Idea:** For every `i`, compare `arr[i]` with all `arr[j]` where `j > i`. If any `arr[j] < arr[i]` → **not sorted**.

* **Time Complexity:** `O(N^2)`
* **Space Complexity:** `O(1)`

#### Pseudocode

```
for i from 0 to n-1:
    for j from i+1 to n-1:
        if arr[j] < arr[i]:
            return False
return True
```

### 2) Optimal (Single Pass)

**Idea:** In a non-decreasing array, every element is **≥** its previous. Scan once and check `arr[i] >= arr[i-1]` for all `i`.

* **Time Complexity:** `O(N)`
* **Space Complexity:** `O(1)`

#### Pseudocode

```
if n <= 1: return True
for i from 1 to n-1:
    if arr[i] < arr[i-1]:
        return False
return True
```

---

## 🧷 Implementations

Below are implementations for both approaches in multiple languages.

### C++

<details>
<summary>Brute Force</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;

bool isSortedBrute(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << (isSortedBrute(arr) ? "True" : "False") << "\n";
}
```

</details>

<details>
<summary>Optimal (Single Traversal)</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;

bool isSortedOptimal(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) return false;
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << (isSortedOptimal(arr) ? "True" : "False") << "\n";
}
```

</details>

---

### Java

<details>
<summary>Brute Force</summary>

```java
import java.util.*;

public class Main {
    static boolean isSortedBrute(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[i]) return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        System.out.println(isSortedBrute(arr) ? "True" : "False");
    }
}
```

</details>

<details>
<summary>Optimal (Single Traversal)</summary>

```java
public class Main {
    static boolean isSortedOptimal(int[] arr) {
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < arr[i - 1]) return false;
        }
        return true;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        System.out.println(isSortedOptimal(arr) ? "True" : "False");
    }
}
```

````
</details>

---

### Python
<details>
<summary>Brute Force</summary>

```python
def is_sorted_brute(arr):
    n = len(arr)
    for i in range(n):
        for j in range(i + 1, n):
            if arr[j] < arr[i]:
                return False
    return True

if __name__ == "__main__":
    arr = [1, 2, 3, 4, 5]
    print("True" if is_sorted_brute(arr) else "False")
````

</details>

<details>
<summary>Optimal (Single Traversal)</summary>

```python
def is_sorted_optimal(arr):
    for i in range(1, len(arr)):
        if arr[i] < arr[i - 1]:
            return False
    return True

if __name__ == "__main__":
    arr = [1, 2, 3, 4, 5]
    print("True" if is_sorted_optimal(arr) else "False")
```

</details>

---

### JavaScript

<details>
<summary>Brute Force</summary>

```javascript
function isSortedBrute(arr) {
  const n = arr.length;
  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      if (arr[j] < arr[i]) return false;
    }
  }
  return true;
}

const arr1 = [1, 2, 3, 4, 5];
console.log(isSortedBrute(arr1) ? "True" : "False");
```

</details>

<details>
<summary>Optimal (Single Traversal)</summary>

```javascript
function isSortedOptimal(arr) {
  for (let i = 1; i < arr.length; i++) {
    if (arr[i] < arr[i - 1]) return false;
  }
  return true;
}

const arr2 = [1, 2, 3, 4, 5];
console.log(isSortedOptimal(arr2) ? "True" : "False");
```

</details>

---

## 🧭 Edge Cases to Consider

* Empty array `[]` (should return `True`)
* Single element array `[x]` (should return `True`)
* Arrays with duplicates `[1, 1, 2, 2]` (should return `True`)
* Arrays with a single descent somewhere `[1, 2, 5, 4, 6]` (should return `False`)
* Negative numbers and mixed ranges `[-5, -2, -2, 0, 3]` (should return `True`)

---

## 🧾 Complexity Summary

| Approach    | Time Complexity | Space Complexity |
| ----------- | --------------- | ---------------- |
| Brute Force | `O(N^2)`        | `O(1)`           |
| Optimal     | `O(N)`          | `O(1)`           |

---

## ▶️ How to Run (Quick Tips)

* **C++:** `g++ main.cpp -o app && ./app`
* **Java:** `javac Main.java && java Main`
* **Python:** `python main.py`
* **JavaScript (Node):** `node main.js`

---

## 🙌 Credits

Special thanks to **Abhishek Yadav** and **Sudip Ghosh** for contributions to this problem write-up on TakeUForward.

---

## 📣 Notes

* This README focuses on non-decreasing order. For strictly increasing, change the check to `>` instead of `>=`.
* You can copy any code block into your IDE/editor and run immediately.
