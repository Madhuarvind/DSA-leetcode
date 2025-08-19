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
