# ✅ Left Rotate the Array by One

**Problem Statement:** Given an array of N integers, left rotate the array by one place.

---

## 📌 Problem Statement

Given an array of size `N`, rotate the array to the left by one position.

---

## 🧪 Examples

```
Input:  [1, 2, 3, 4, 5]
Output: [2, 3, 4, 5, 1]

Input:  [9, 8, 7, 6, 4, 2, 1, 3]
Output: [8, 7, 6, 4, 2, 1, 3, 9]

Input:  [42]
Output: [42]
```

---

## 💡 Approaches

### Approach 1: Brute Force (Using Temporary Array)

**Algorithm:** Create a temporary array, shift all elements to the left, and place the first element at the end.

#### Pseudocode
```
temp[n]
for i from 1 to n-1:
    temp[i-1] = arr[i]
temp[n-1] = arr[0]
copy temp to arr
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
    int temp[n];
    for (int i = 1; i < n; i++) {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    solve(arr, n);
    return 0;
}
```

**Output:**
```
2 3 4 5 1
```

### Approach 2: Optimal (In-place Rotation)

**Algorithm:** Store the first element, shift all elements to the left, and place the stored element at the end.

#### Pseudocode
```
temp = arr[0]
for i from 0 to n-2:
    arr[i] = arr[i+1]
arr[n-1] = temp
```

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    solve(arr, n);
    return 0;
}
```

**Output:**
```
2 3 4 5 1
```

---

## 🧷 Implementations

### Java

<details>
<summary>Brute Force Approach</summary>

```java
import java.util.*;

public class Main {
    static void solve(int[] arr) {
        int n = arr.length;
        int[] temp = new int[n];
        for (int i = 1; i < n; i++) {
            temp[i - 1] = arr[i];
        }
        temp[n - 1] = arr[0];
        System.out.println(Arrays.toString(temp));
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        solve(arr);
    }
}
```

</details>

<details>
<summary>Optimal Approach</summary>

```java
public class Main {
    static void solve(int[] arr) {
        int n = arr.length;
        int temp = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
        System.out.println(Arrays.toString(arr));
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        solve(arr);
    }
}
```

</details>

### Python

<details>
<summary>Brute Force Approach</summary>

```python
def solve(arr):
    n = len(arr)
    temp = [0] * n
    for i in range(1, n):
        temp[i - 1] = arr[i]
    temp[n - 1] = arr[0]
    print(temp)

arr = [1, 2, 3, 4, 5]
solve(arr)
```

</details>

<details>
<summary>Optimal Approach</summary>

```python
def solve(arr):
    if len(arr) <= 1:
        return arr
    temp = arr[0]
    for i in range(len(arr) - 1):
        arr[i] = arr[i + 1]
    arr[-1] = temp
    print(arr)

arr = [1, 2, 3, 4, 5]
solve(arr)
```

</details>

### JavaScript

<details>
<summary>Brute Force Approach</summary>

```javascript
function solve(arr) {
    const n = arr.length;
    const temp = new Array(n);
    for (let i = 1; i < n; i++) {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];
    console.log(temp);
}

const arr = [1, 2, 3, 4, 5];
solve(arr);
```

</details>

<details>
<summary>Optimal Approach</summary>

```javascript
function solve(arr) {
    const n = arr.length;
    const temp = arr[0];
    for (let i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
    console.log(arr);
}

const arr = [1, 2, 3, 4, 5];
solve(arr);
```

</details>

---

## 🧭 Edge Cases to Consider

* Empty array `[]` (should handle gracefully)
* Single element array `[x]` (should remain unchanged)
* Arrays with negative numbers
* Arrays with duplicate elements

---

## 🧾 Complexity Summary

| Approach    | Time Complexity | Space Complexity |
| ----------- | --------------- | ---------------- |
| Brute Force | `O(N)`          | `O(N)`           |
| Optimal     | `O(N)`          | `O(1)`           |

---

## ▶️ How to Run (Quick Tips)

* **C++:** `g++ main.cpp -o app && ./app`
* **Java:** `javac Main.java && java Main`
* **Python:** `python main.py`
* **JavaScript (Node):** `node main.js`

---

## 🙌 Credits

Special thanks to Ayush Pandey for contributing to this problem write-up on TakeUforward.

---

## 📣 Notes

* The brute force approach uses extra space but is straightforward
* The optimal approach is more memory efficient with constant space
* Both approaches have linear time complexity
* Choose the approach based on memory constraints
