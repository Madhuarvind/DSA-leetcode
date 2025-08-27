# ✅ Find the Largest Element in an Array

**Problem Statement:** Given an array, find the largest element present in it.

---

## 📌 Problem Statement

Given an array of size `n`, find the largest element in the array.

---

## 🧪 Examples

```
Input:  [2, 5, 1, 3, 0]
Output: 5

Input:  [8, 10, 5, 7, 9]
Output: 10

Input:  [42]
Output: 42

Input:  []
Output: -1 (or appropriate error handling)
```

---

## 💡 Approaches

### Approach 1: Sorting

**Algorithm:** Sort the array in ascending order and return the last element.

#### Pseudocode
```
sort(arr)
return arr[n-1]
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int sortArr(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}

int main() {
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};

    cout << "The Largest element in the array is: " << sortArr(arr1) << endl;
    cout << "The Largest element in the array is: " << sortArr(arr2) << endl;
    return 0;
}
```

**Output:**
```
The Largest element in the array is: 5
The Largest element in the array is: 10
```

### Approach 2: Iterative Max Variable

**Algorithm:** Maintain a max variable that gets updated when a larger element is found.

#### Pseudocode
```
max = arr[0]
for i from 1 to n-1:
    if arr[i] > max:
        max = arr[i]
return max
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int findLargestElement(int arr[], int n) {
    if (n == 0) return -1;
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr1[] = {2, 极, 1, 3, 0};
    int n = 5;
    cout << "The largest element in the array is: " << findLargestElement(arr1, n) << endl;

    int arr2[] = {8, 10, 5, 7, 9};
    n = 5;
    cout << "The largest element in the array is: " << findLargestElement(arr2, n) << endl;
    return 0;
}
```

**Output:**
```
The largest element in the array is: 5
The largest element in the array is: 10
```

---

## 🧷 Implementations

### Java

<details>
<summary>Sorting Approach</summary>

```java
import java.util.*;

public class Main {
    static int sortArr(int[] arr) {
        Arrays.sort(arr);
        return arr[arr.length - 1];
    }

    public static void main(String[] args) {
        int[] arr1 = {2, 5, 1, 3, 0};
        int[] arr2 = {8, 10, 5, 7, 9};

        System.out.println("The Largest element in the array is: " + sortArr(arr1));
        System.out.println("The Largest element in the array is: "极 sortArr(arr2));
    }
}
```

</details>

<details>
<summary>Iterative Approach</summary>

```java
public class Main {
    static int findLargestElement(int[] arr) {
        if (arr.length == 0) return -1;
        int max = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }

    public static void main(String[] args) {
        int[] arr1 = {2, 5, 1, 3, 0};
        int[] arr2 = {8, 10, 5, 7, 9};

        System.out.println("The largest element in the array is: " + findLargestElement(arr1));
        System.out.println("The largest element in the array is: " + findLargestElement(arr2));
    }
}
```

</details>

### Python

<details>
<summary>Sorting Approach</summary>

```python
def sort_arr(arr):
    arr.sort()
    return arr[-1] if arr else -1

arr1 = [2, 5, 1, 3, 0]
arr2 = [8, 10, 5, 7, 9]

print(f"The Largest element in the array is: {sort_arr(arr1)}")
print(f"The Largest element in the array is: {sort_arr(arr2)}")
```

</details>

<details>
<summary>Iterative Approach</summary>

```python
def find_largest_element(arr):
    if not arr:
        return -1
    max_val = arr[0]
    for num in arr[1:]:
        if num > max_val:
            max_val = num
    return max_val

arr1 = [2, 5, 1, 3, 0]
arr2 = [8, 10, 5, 7, 9]

print(f"The largest element in the array is: {find_largest_element(arr1)}")
print(f"The largest element in the array is: {find_largest_element(arr2)}")
```

</details>

### JavaScript

<details>
<summary>Sorting Approach</summary>

```javascript
function sortArr(arr) {
    arr.sort((a, b) => a - b);
    return arr[arr.length - 1];
}

const arr1 = [2, 5, 1, 3, 0];
const arr2 = [8, 10, 5, 7, 9];

console.log(`The Largest element in the array is: ${sortArr(arr1)}`);
console.log(`The Largest element in the array is: ${sortArr(arr2)}`);
```

</details>

<details>
<summary>Iterative Approach</summary>

```javascript
function findLargestElement(arr) {
    if (arr.length === 0) return -1;
    let max = arr[0];
    for (let i = 1; i < arr.length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

const arr1 = [2, 5, 1, 3, 0];
const arr2 = [8, 10, 5, 7, 9];

console.log(`The largest element in the array is: ${findLargestElement(arr1)}`);
console.log(`The largest element in the array is: ${findLargestElement(arr2)}`);
```

</details>

---

## 🧭 Edge Cases to Consider

* Empty array `[]` (should return `-1` or handle appropriately)
* Single element array `[x]` (should return `x`)
* Arrays with duplicates `[5, 5, 5, 5]` (should return `5`)
* Arrays with negative numbers `[-5, -2, -10]` (should return `-2`)
* Arrays with mixed positive and negative numbers

---

## 🧾 Complexity Summary

| Approach    | Time Complexity | Space Complexity |
| ----------- | --------------- | ---------------- |
| Sorting     | `O(N log N)`    | `O(N)`           |
| Iterative   | `O(N)`          | `O(1)`           |

---

## ▶️ How to Run (Quick Tips)

* **C++:** `g++ main.cpp -o app && ./app`
* **Java:** `javac Main.java && java Main`
* **Python:** `python main.py`
* **JavaScript (Node):** `node main.js`

---

## 🙌 Credits

Special thanks to Prashant Sahu and Sudip Ghosh for contributions to this problem write-up on TakeUforward.

---

## 📣 Notes

* The sorting approach is simpler but has higher time complexity
* The iterative approach is more efficient with linear time complexity
* Choose the approach based on your specific requirements and constraints
