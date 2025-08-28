# ✅ Longest Subarray with sum K | [Positives and Negatives]

**Problem Statement:** Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

---

## 📌 Problem Statement

Given an array of integers (which can contain both positive and negative numbers) and a target sum k, find the length of the longest subarray that sums to exactly k.

---

## 🧪 Examples

### Example 1:
```
Input: array[] = {-1, 1, 1}, k = 1
Output: 3
Explanation: The subarray [-1, 1, 1] sums to 1 and has length 3.
```

---

## 💡 Approaches

### Approach 1: Brute Force (Three Nested Loops)

**Algorithm:** Generate all possible subarrays and check their sum.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, int k) {
    int n = a.size();
    int len = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int s = 0;
            for (int K = i; K <= j; K++) {
                s += a[K];
            }
            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main() {
    vector<int> a = {-1, 1, 1};
    int k = 1;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
```
**Output:** The length of the longest subarray is: 3

**Time Complexity:** O(N³)

**Space Complexity:** O(1)

### Approach 2: Optimized Brute Force (Two Nested Loops)

**Algorithm:** Generate subarrays while accumulating sum to avoid third loop.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int getLongest极array(vector<int>& a, int k) {
    int n = a.size();
    int len = 0;
    for (int i = 0; i < n; i++) {
        int s = 0;
        for (int j = i; j < n; j++) {
            s += a[j];
            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main() {
    vector<int> a = {-1, 1, 1};
    int k = 1;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
```
**Output:** The length of the longest subarray is: 3

**Time Complexity:** O(N²)

**Space Complexity:** O(1)

### Approach 3: Using Hashing (Prefix Sum) - Optimal

**Algorithm:** Use a map to store prefix sums and their indices for efficient lookup.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, int k) {
    int n = a.size();
    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

int main() {
    vector<int> a = {-1, 1, 1};
    int k = 1;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
```
**Output:** The length of the longest subarray is: 3

**Time Complexity:** O(N log N)

**Space Complexity:** O(N)

---

## 🙌 Credits

Special thanks to Kritidipta Ghosh for contributing to this article on TakeUforward.
