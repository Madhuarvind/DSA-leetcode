# ✅ Rotate Array by K Elements

**Problem Statement:** Given an array of integers, rotating the array of elements by k elements either left or right.

---

## 📌 Problem Statement

Given an array of size `N`, rotate the array by `k` positions either to the left or to the right.

---

## 🧪 Examples

### Example 1:
```
Input: N = 7, array[] = {1, 2, 3, 4, 5, 6, 7}, k = 2, right
Output: 6 7 1 2 3 4 5
Explanation: The array is rotated to the right by 2 positions.
```

### Example 2:
```
Input: N = 6, array[] = {3, 7, 8, 9, 10, 11}, k = 3, left
Output: 9 10 11 3 7 8
Explanation: The array is rotated to the left by 3 positions.
```

---

## 💡 Approaches

### Approach 1: Using a Temp Array

#### For Rotating the Elements to Right
1. Copy the last `k` elements into the temp array.
2. Shift `n-k` elements from the beginning by `k` positions to the right.
3. Copy the elements into the main array from the temp array.

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

void Rotatetoright(int arr[], int n, int k) {
  if (n == 0) return;
  k = k % n;
  if (k > n) return;
  int temp[k];
  for (int i = n - k; i < n; i++) {
    temp[i - n + k] = arr[i];
  }
  for (int i = n - k - 1; i >= 0; i--) {
    arr[i + k] = arr[i];
  }
  for (int i = 0; i < k; i++) {
    arr[i] = temp[i];
  }
}

int main() {
  int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 2;
  Rotatetoright(arr, n, k);
  cout << "After Rotating the elements to right: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
```
**Output:** After Rotating the elements to right: 6 7 1 2 3 4 5

**Time Complexity:** O(n)

**Space Complexity:** O(k) since `k` array elements need to be stored in the temp array.

#### For Rotating the Elements to Left
1. Copy the first `k` elements into the temp array.
2. Shift `n-k` elements from the last by `k` positions to the left.
3. Copy the elements into the main array from the temp array.

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

void Rotatetoleft(int arr[], int n, int k) {
  if (n == 0) return;
  k = k % n;
  if (k > n) return;
  int temp[k];
  for (int i = 0; i < k; i++) {
    temp[i] = arr[i];
  }
  for (int i = 0; i < n - k; i++) {
    arr[i] = arr[i + k];
  }
  for (int i = n - k; i < n; i++) {
    arr[i] = temp[i - n + k];
  }
}

int main() {
  int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 2;
  Rotatetoleft(arr, n, k);
  cout << "After Rotating the elements to left: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
```
**Output:** After Rotating the elements to left: 3 4 5 6 7 1 2

**Time Complexity:** O(n)

**Space Complexity:** O(k) since `k` array elements need to be stored in the temp array.

### Approach 2: Using the Reversal Algorithm

#### For Rotating Elements to Right
1. Reverse the last `k` elements of the array.
2. Reverse the first `n-k` elements of the array.
3. Reverse the whole array.

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

// Function to Reverse the array
void Reverse(int arr[], int start, int end) {
  while (start <= end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

// Function to Rotate k elements to right
void Rotateeletoright(int arr[], int n, int k) {
  Reverse(arr, 0, n - k - 1);
  Reverse(arr, n - k, n - 1);
  Reverse(arr, 0, n - 1);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  Rotateeletoright(arr, n, k);
  cout << "After Rotating the k elements to right: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}
```
**Output:** After Rotating the k elements to right: 6 7 1 2 3 4 5

**Time Complexity:** O(N) where N is the number of elements in the array.

**Space Complexity:** O(1) since no extra space is required.

#### For Rotating Elements to Left
1. Reverse the first `k` elements of the array.
2. Reverse the last `n-k` elements of the array.
3. Reverse the whole array.

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

// Function to Reverse the array
void Reverse(int arr[], int start, int end) {
  while (start <= end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

// Function to Rotate k elements to left
void Rotateeletoleft(int arr[], int n, int k) {
  Reverse(arr, 0, k - 1);
  Reverse(arr, k, n - 1);
  Reverse(arr, 0, n - 1);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  Rotateeletoleft(arr, n, k);
  cout << "After Rotating the k elements to left: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}
```
**Output:** After Rotating the k elements to left: 3 4 5 6 7 1 2

**Time Complexity:** O(N) where N is the number of elements in the array.

**Space Complexity:** O(1) since no extra space is required.

---

## 🙌 Credits

Special thanks to Gurmeet Singh for contributing to this article on TakeUforward.
