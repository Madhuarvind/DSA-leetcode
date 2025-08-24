# ✅ Find the Missing Number in an Array

**Problem Statement:** Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number (between 1 to N) that is not present in the given array.

---

## 📌 Problem Statement

Given an array of size N-1 containing distinct integers from 1 to N with one number missing, find the missing number.

---

## 🧪 Examples

### Example 1:
```
Input: N = 5, array[] = {1, 2, 4, 5}
Output: 3
Explanation: The missing number between 1 and 5 is 3.
```

---

## 💡 Approaches

### Approach 1: Brute Force

**Algorithm:** For each number from 1 to N, check if it exists in the array using linear search.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& a, int N) {
    for (int i = 1; i <= N; i++) {
        int flag = 0;
        for (int j = 0; j < N - 1; j++) {
            if (a[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) return i;
    }
    return -1;
}

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
```
**Output:** The missing number is: 3

**Time Complexity:** O(N²)

**Space Complexity:** O(1)

### Approach 2: Using Hashing

**Algorithm:** Use a hash array to store frequencies of elements and find the missing number.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& a, int N) {
    int hash[N + 1] = {0};
    for (int i = 0; i < N - 1; i++)
        hash[a[i]]++;
    for (int i = 1; i <= N; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
```
**Output:** The missing number is: 3

**Time Complexity:** O(N)

**Space Complexity:** O(N)

### Approach 3: Summation Formula (Optimal)

**Algorithm:** Use the formula for sum of first N natural numbers and subtract the sum of array elements.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& a, int N) {
    int sum = (N * (N + 1)) / 2;
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }
    int missingNum = sum - s2;
    return missingNum;
}

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
```
**Output:** The missing number is: 3

**Time Complexity:** O(N)

**Space Complexity:** O(1)

### Approach 4: XOR Approach (Optimal)

**Algorithm:** Use XOR properties to find the missing number efficiently.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& a, int N) {
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < N - 1; i++) {
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ N;
    return (xor1 ^ xor2);
}

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
```
**Output:** The missing number is: 3

**Time Complexity:** O(N)

**Space Complexity:** O(1)

---

## 🙌 Credits

Special thanks to Kritidipta Ghosh for contributing to this article on TakeUforward.
