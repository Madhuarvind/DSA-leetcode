# ✅ Move All Zeros to the End of the Array

**Problem Statement:** You are given an array of integers, your task is to move all the zeros in the array to the end of the array while maintaining the order of non-zero elements.

---

## 📌 Problem Statement

Given an array of size `N`, move all zeros to the end while keeping the order of non-zero elements.

---

## 🧪 Examples

### Example 1:
```
Input: array[] = {1, 0, 2, 0, 3, 4}
Output: {1, 2, 3, 4, 0, 0}
```

### Example 2:
```
Input: array[] = {0, 1, 0, 3, 12}
Output: {1, 3, 12, 0, 0}
```

---

## 💡 Approaches

### Approach 1: Using a Temp Array

**Algorithm:**
1. Create a temporary array to store non-zero elements.
2. Copy non-zero elements from the original array to the temporary array.
3. Fill the remaining positions in the original array with zeros.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    vector<int> temp;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0)
            temp.push_back(a[i]);
    }

    int nz = temp.size();
    for (int i = 0; i < nz; i++) {
        a[i] = temp[i];
    }
    for (int i = nz; i < n; i++) {
        a[i] = 0;
    }
    return a;
}

int main() {
    vector<int> arr = {1, 0, 2, 0, 3, 4};
    int n = 6;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}
```
**Output:** 1 2 3 4 0 0

**Time Complexity:** O(N)

**Space Complexity:** O(N) for the temporary array.

### Approach 2: Using Two Pointers

**Algorithm:**
1. Use two pointers, one for traversing the array and another for tracking the position of the last non-zero element.
2. Swap elements as necessary to move zeros to the end.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1) return a;

    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

int main() {
    vector<int> arr = {1, 0, 2, 0, 3, 4};
    int n = 6;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}
```
**Output:** 1 2 3 4 0 0

**Time Complexity:** O(N)

**Space Complexity:** O(1) since no extra space is used.

---

## 🙌 Credits

Special thanks to Sai Bargav Nellepalli and Kritidipta Ghosh for contributing to this article on TakeUforward.
