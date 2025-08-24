# ✅ Remove Duplicates from Sorted Array (In-place)

This README documents the DSA problem **Remove Duplicates from a Sorted Array** where duplicates must be removed *in-place* and only the unique elements should remain in the first `k` indices.

---

## 📌 Problem Statement

Given an **integer array** sorted in non-decreasing order, remove duplicates in-place such that each unique element appears **only once**. The relative order of the elements should remain the same.

Return `k`, the number of unique elements. The first `k` elements of the array should contain the final result.

> It doesn’t matter what remains beyond the first `k` elements.

---

## 🧪 Examples

```
Input:  [1,1,2,2,2,3,3]
Output: 3, Array = [1,2,3,...]

Input:  [0,0,1,1,1,2,3,3,4]
Output: 5, Array = [0,1,2,3,4,...]

Input:  [1,2,3,4]
Output: 4, Array = [1,2,3,4]
```

---

## 💡 Approaches

### 1) Brute Force (Using Set)

**Idea:** Use a data structure like `HashSet` that stores only unique elements.

* Traverse the array and insert elements into the set.

* Copy unique elements back into the array.

* Return size of the set.

* **Time Complexity:** `O(N log N) + O(N)`

* **Space Complexity:** `O(N)`

#### Pseudocode

```
set = {}
for num in arr:
    set.add(num)
k = size(set)
arr[0..k-1] = elements of set
return k
```

---

### 2) Optimal (Two-Pointer Technique)

**Idea:** Since array is sorted, duplicates are adjacent. Use two pointers:

* `i` → position of last unique element
* `j` → scanning pointer

Steps:

1. Initialize `i = 0`
2. For `j` from 1 to n-1:

   * If `arr[j] != arr[i]`:

     * Increment `i`
     * Set `arr[i] = arr[j]`
3. Return `i + 1`

* **Time Complexity:** `O(N)`
* **Space Complexity:** `O(1)`

#### Pseudocode

```
i = 0
for j from 1 to n-1:
    if arr[j] != arr[i]:
        i++
        arr[i] = arr[j]
return i + 1
```

---

## 🧷 Implementations

### C++

<details>
<summary>Brute Force</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n) {
    set<int> s;
    for (int i = 0; i < n; i++) s.insert(arr[i]);

    int k = s.size(), j = 0;
    for (int x : s) arr[j++] = x;

    return k;
}

int main() {
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicates(arr, n);

    cout << "The array after removing duplicates is: ";
    for (int i = 0; i < k; i++) cout << arr[i] << " ";
}
```

</details>

<details>
<summary>Optimal (Two Pointers)</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n) {
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main() {
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicates(arr, n);

    cout << "The array after removing duplicates is: ";
    for (int i = 0; i < k; i++) cout << arr[i] << " ";
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
    static int removeDuplicates(int[] arr) {
        Set<Integer> set = new LinkedHashSet<>();
        for (int num : arr) set.add(num);

        int i = 0;
        for (int x : set) arr[i++] = x;

        return set.size();
    }

    public static void main(String[] args) {
        int[] arr = {1,1,2,2,2,3,3};
        int k = removeDuplicates(arr);

        System.out.print("Array after removing duplicates: ");
        for (int i = 0; i < k; i++) System.out.print(arr[i] + " ");
    }
}
```

</details>

<details>
<summary>Optimal (Two Pointers)</summary>

```java
public class Main {
    static int removeDuplicates(int[] arr) {
        int i = 0;
        for (int j = 1; j < arr.length; j++) {
            if (arr[j] != arr[i]) {
                i++;
                arr[i] = arr[j];
            }
        }
        return i + 1;
    }

    public static void main(String[] args) {
        int[] arr = {1,1,2,2,2,3,3};
        int k = removeDuplicates(arr);

        System.out.print("Array after removing duplicates: ");
        for (int i = 0; i < k; i++) System.out.print(arr[i] + " ");
    }
}
```

</details>

---

### Python

<details>
<summary>Brute Force</summary>

```python
def remove_duplicates_brute(arr):
    unique = sorted(set(arr))
    for i in range(len(unique)):
        arr[i] = unique[i]
    return len(unique)

arr = [1,1,2,2,2,3,3]
k = remove_duplicates_brute(arr)
print("Array after removing duplicates:", arr[:k])
```

</details>

<details>
<summary>Optimal (Two Pointers)</summary>

```python
def remove_duplicates_optimal(arr):
    if not arr:
        return 0
    i = 0
    for j in range(1, len(arr)):
        if arr[j] != arr[i]:
            i += 1
            arr[i] = arr[j]
    return i + 1

arr = [1,1,2,2,2,3,3]
k = remove_duplicates_optimal(arr)
print("Array after removing duplicates:", arr[:k])
```

</details>

---

### JavaScript

<details>
<summary>Brute Force</summary>

```javascript
function removeDuplicatesBrute(arr) {
  let setArr = [...new Set(arr)];
  for (let i = 0; i < setArr.length; i++) {
    arr[i] = setArr[i];
  }
  return setArr.length;
}

let arr = [1,1,2,2,2,3,3];
let k = removeDuplicatesBrute(arr);
console.log("Array after removing duplicates:", arr.slice(0, k));
```

</details>

<details>
<summary>Optimal (Two Pointers)</summary>

```javascript
function removeDuplicatesOptimal(arr) {
  let i = 0;
  for (let j = 1; j < arr.length; j++) {
    if (arr[j] !== arr[i]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}

let arr2 = [1,1,2,2,2,3,3];
let k2 = removeDuplicatesOptimal(arr2);
console.log("Array after removing duplicates:", arr2.slice(0, k2));
```

</details>

---

## 🧭 Edge Cases

* Empty array `[]` → `k = 0`
* Single element `[x]` → `k = 1`
* All unique elements `[1,2,3,4]` → unchanged
* All same elements `[5,5,5,5]` → `[5]`

---

## 🧾 Complexity Summary

| Approach    | Time Complexity | Space Complexity |
| ----------- | --------------- | ---------------- |
| Brute Force | `O(N log N)`    | `O(N)`           |
| Optimal     | `O(N)`          | `O(1)`           |

---

## ▶️ How to Run

* **C++:** `g++ main.cpp -o app && ./app`
* **Java:** `javac Main.java && java Main`
* **Python:** `python main.py`
* **JavaScript:** `node main.js`

---

## 🙌 Credits

Special thanks to **Prashant Sahu** and **Sudip Ghosh** for contributions to this problem write-up on TakeUForward.
