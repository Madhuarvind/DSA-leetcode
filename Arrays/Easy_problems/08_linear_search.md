# ✅ Linear Search in C

**Problem Statement:** Given an array and an element `num`, the task is to find if `num` is present in the given array or not. If present, print the index of the element, otherwise print -1.

---

## 📌 Problem Statement

Given an array of size `N` and an element `num`, determine if `num` exists in the array and return its index.

---

## 🧪 Examples

### Example 1:
```
Input: arr[] = {1, 2, 3, 4, 5}, num = 3
Output: 2
Explanation: 3 is present at the 2nd index
```

### Example 2:
```
Input: arr[] = {5, 4, 3, 2, 1}, num = 5
Output: 0
Explanation: 5 is present at the 0th index
```

---

## 💡 Approach

**Algorithm:**
1. Traverse through each element of the array
2. Compare each element with the target value `num`
3. If a match is found, return the current index
4. If no match is found after traversing the entire array, return -1

#### Code (C)
```c
#include<stdio.h>

int search(int arr[], int n, int num) {
    int i;
    for(i = 0; i < n; i++) {
        if(arr[i] == num)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int num = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = search(arr, n, num);
    printf("%d", val);
    return 0;
}
```
**Output:** 3

**Time Complexity:** O(n), where n is the length of the array.

**Space Complexity:** O(1)

---

## 🙌 Credits

Special thanks to Subhrajit Das for contributing to this article on TakeUforward.
