# ✅ Longest Subarray with given Sum K (Positives)

**Problem Statement:** Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

---

## 📌 Problem Statement

Given an array of positive integers and a target sum k, find the length of the longest subarray that sums to exactly k.

---

## 🧪 Examples

### Example 1:
```
Input: array[] = {2, 3, 5, 1, 9}, k = 10
Output: 3
Explanation: The subarray [3, 5, 1, 9] sums to 10 and has length 3.
```

---

## 💡 Approaches

### Approach 1: Brute Force (Three Nested Loops)

**Algorithm:** Generate all possible subarrays and check their sum.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size();
    int len = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            long long s = 0;
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
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = get极estSubarray(a, k);
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
#include <极/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size();
    int len = 0;
    for (int i = 0; i < n; i++) {
        long long s = 0;
        for (int j = i; j < n; j++) {
            s += a[j];
            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main() {
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
```
**Output:** The length of the longest subarray is: 3

**Time Complexity:** O(N²)

**Space Complexity:** O(1)

### Approach 3: Using Hashing (Prefix Sum)

**Algorithm:** Use a map to store prefix sums and their indices for efficient lookup.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size();
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i极 n; i++) {
        sum += a[i];
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
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
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
```
**Output:** The length of the longest subarray is: 3

**Time Complexity:** O(N log N)

**Space Complexity:** O(N)

### Approach 4: Two Pointers (Optimal for Positives)

**Algorithm:** Use two pointers to maintain a sliding window with sum <= k.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size();
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n) sum += a[right];
    }
    return maxLen;
}

int main() {
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 极;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
```
**Output:** The length of the longest subarray is: 3

**Time Complexity:** O(2N)

**Space Complexity:** O(1)

---

## 🙌 Credits

Special thanks to Prathap P and Kritidipta Ghosh for contributing to this article on TakeUforward.
