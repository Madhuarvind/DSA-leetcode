# 🔎 Find the Largest Element in an Array

---

## 📝 Problem Statement

Given an array, find the **largest element** present in it.

---

## ✅ Examples

### Example 1:
**Input:**  
`arr = {2, 5, 1, 3, 0}`  
**Output:**  
`5`

### Example 2:
**Input:**  
`arr = {8, 10, 5, 7, 9}`  
**Output:**  
`10`

---

## ⚡ Approaches

We can solve this problem in multiple ways:

---

### 🥇 Approach 1: Sorting

**Intuition:**  
If we sort the array in ascending order, the largest element will be the last element of the array.

**Steps:**
1. Sort the array in ascending order.  
2. The answer is `arr[n-1]`.

**Dry Run:**  
Before sorting: `{2, 5, 1, 3, 0}`  
After sorting: `{0, 1, 2, 3, 5}`  
Answer → `arr[4] = 5`

---

#### ✅ Code (C++)

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

**Complexity Analysis:**
- Time Complexity: `O(N log N)`  
- Space Complexity: `O(N)`  

---

### 🥈 Approach 2: Iterative Max Variable

**Intuition:**  
We can maintain a `max` variable that gets updated whenever a bigger element is found.

**Steps:**
1. Initialize `max` as the first element.  
2. Traverse the array.  
3. If the current element > max → update `max`.  
4. At the end, `max` holds the largest element.  

---

#### ✅ Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

int findLargestElement(int arr[], int n) {
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr1[] = {2, 5, 1, 3, 0};
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

**Complexity Analysis:**
- Time Complexity: `O(N)`  
- Space Complexity: `O(1)`  

---

## 🎥 Video Explanation

Check out the detailed explanation on [TakeUForward’s YouTube Playlist](https://www.youtube.com/@takeUforward).

---

## 🙌 Credits

Special thanks to **Prashant Sahu** and **Sudip Ghosh** for contributing to this article on **TakeUForward**.

---

## 🔗 Related Links

- [Striver’s A2Z DSA Sheet](https://takeuforward.org/interviews/strivers-a2z-dsa-course-sheet-2/)  
- [Array Problems Playlist](https://www.youtube.com/playlist?list=PLgUwDviBIf0oF6QL8m22w1dXSE-9r-s9P)

---
