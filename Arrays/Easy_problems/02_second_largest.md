# 🔎 Find Second Smallest and Second Largest Element in an Array

---

## 📝 Problem Statement

Given an array, find the **second smallest** and **second largest** element in the array.  
If either of them does not exist, print **`-1`**.

---

## ✅ Examples

### Example 1:
**Input:**  
`arr = {1, 2, 4, 6, 7, 5}`  
**Output:**  
```
Second smallest is 2  
Second largest is 6
```

### Example 2:
**Input:**  
`arr = {1, 2, 4, 7, 7, 5}`  
**Output:**  
```
Second smallest is 2  
Second largest is 5
```

---

## ⚡ Approaches

We can solve this problem using three methods:

---

### 🥇 Approach 1: Brute Force (Sorting)

**Intuition:**  
If we sort the array in ascending order, the **second element** will be the second smallest, and the **second-last element** will be the second largest.

**Steps:**
1. Sort the array.  
2. Return `arr[1]` as the second smallest.  
3. Return `arr[n-2]` as the second largest.  

---

#### ✅ Code (C++)

```cpp
#include<bits/stdc++.h>
using namespace std;

void getElements(int arr[], int n) {
    if(n == 0 || n == 1) {
        cout << -1 << " " << -1 << endl; 
        return;
    }
    sort(arr, arr+n);
    int small = arr[1];
    int large = arr[n-2];
    cout << "Second smallest is " << small << endl;
    cout << "Second largest is " << large << endl;
}

int main() {
    int arr[] = {1, 2, 4, 6, 7, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    getElements(arr, n);
    return 0;
}
```

**Output:**
```
Second smallest is 2
Second largest is 6
```

**Complexity Analysis:**
- Time Complexity: `O(N log N)` (for sorting)  
- Space Complexity: `O(1)`  

---

### 🥈 Approach 2: Better (Two Traversals)

**Intuition:**  
We don’t need to sort the entire array. Instead:
1. First pass → Find **smallest** and **largest**.  
2. Second pass → Find numbers just greater than smallest and just smaller than largest.  

---

#### ✅ Code (C++)

```cpp
#include<bits/stdc++.h>
using namespace std;

void getElements(int arr[], int n) {
    if(n == 0 || n == 1) {
        cout << -1 << " " << -1 << endl;
        return;
    }

    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;

    for(int i = 0; i < n; i++) {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] < second_small && arr[i] != small)
            second_small = arr[i];
        if(arr[i] > second_large && arr[i] != large)
            second_large = arr[i];
    }

    cout << "Second smallest is " << second_small << endl;
    cout << "Second largest is " << second_large << endl;
}

int main() {
    int arr[] = {1, 2, 4, 6, 7, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    getElements(arr, n);
    return 0;
}
```

**Output:**
```
Second smallest is 2
Second largest is 6
```

**Complexity Analysis:**
- Time Complexity: `O(N)` (two passes)  
- Space Complexity: `O(1)`  

---

### 🥉 Approach 3: Optimal (Single Traversal)

**Intuition:**  
We can find **second smallest** and **second largest** in a single pass using four variables:  
`small`, `second_small`, `large`, `second_large`.

**Steps:**  
1. Initialize `small = INT_MAX`, `second_small = INT_MAX`.  
2. Initialize `large = INT_MIN`, `second_large = INT_MIN`.  
3. Traverse array once, updating these values accordingly.  

---

#### ✅ Code (C++)

```cpp
#include<bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[], int n) {
    if(n < 2) return -1;
    int small = INT_MAX, second_small = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < small) {
            second_small = small;
            small = arr[i];
        }
        else if(arr[i] < second_small && arr[i] != small) {
            second_small = arr[i];
        }
    }
    return second_small;
}

int secondLargest(int arr[], int n) {
    if(n < 2) return -1;
    int large = INT_MIN, second_large = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > large) {
            second_large = large;
            large = arr[i];
        }
        else if(arr[i] > second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }
    return second_large;
}

int main() {
    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sS = secondSmallest(arr, n);
    int sL = secondLargest(arr, n);

    cout << "Second smallest is " << sS << endl;
    cout << "Second largest is " << sL << endl;

    return 0;
}
```

**Output:**
```
Second smallest is 2
Second largest is 5
```

**Complexity Analysis:**
- Time Complexity: `O(N)` (single pass)  
- Space Complexity: `O(1)`  

---

## 🎥 Video Explanation

Check out the detailed explanation on [TakeUForward’s YouTube Playlist](https://www.youtube.com/@takeUforward).

---

## 🙌 Credits

Special thanks to **Naman Daga** and **Sudip Ghosh** for contributing to this article on **TakeUForward**.

---

## 🔗 Related Links

- [Striver’s A2Z DSA Sheet](https://takeuforward.org/interviews/strivers-a2z-dsa-course-sheet-2/)  
- [Array Problems Playlist](https://www.youtube.com/playlist?list=PLgUwDviBIf0oF6QL8m22w1dXSE-9r-s9P)  

---
