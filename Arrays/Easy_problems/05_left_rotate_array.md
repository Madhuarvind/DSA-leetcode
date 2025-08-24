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
```

---

## 💡 Approaches

### 1) Brute Force Approach

**Intuition:** The rotated array has just a difference that its first element is present at the last index of the array. So if we can just store the element at the first index and then shift all the elements towards the left and at last put the stored element at the last index, we will get the rotated array.

**Approach:** We can take another dummy array of the same length and then shift all elements in the array toward the left and then at the last element store the index of the 0th index of the array and print it.

#### Pseudocode

```cpp
#include<bits/stdc++.h>
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
  int n=5;
  int arr[]= {1,2,3,4,5};
  solve(arr, n);
}
```

**Output:** 2 3 4 5 1

**Complexity Analysis:**
- Time Complexity: O(n), as we iterate through the array only once.
- Space Complexity: O(n) as we are using another array of the same size as the given array.

### 2) Optimal Approach

**Intuition:** Store the value of the first index in a variable (let it be x). Then iterate the array from the 0th index to the n-1th index and store the value present in the next index to the current index.

#### Pseudocode

```cpp
#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
  int temp = arr[0]; // storing the first element of the array in a variable
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp; // assigned the value of the variable at the last index
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int n=5;
  int arr[]= {1,2,3,4,5};
  solve(arr, n);
}
```

**Output:** 2 3 4 5 1

**Complexity Analysis:**
- Time Complexity: O(n), as we iterate through the array only once.
- Space Complexity: O(1) as no extra space is used.

---

## 🙌 Credits

Special thanks to Ayush Pandey for contributing to this article on TakeUForward.

---
