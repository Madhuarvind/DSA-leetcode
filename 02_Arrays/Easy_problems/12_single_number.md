# ✅ Find the Number that Appears Once, and the Other Numbers Twice

**Problem Statement:** Given a non-empty array of integers `arr`, every element appears twice except for one. Find that single one.

---

## 📌 Problem Statement

Given an array of size N containing integers where every element appears twice except for one, find the single element that appears only once.

---

## 🧪 Examples

### Example 1:
```
Input: arr[] = {4, 1, 2, 1, 2}
Output: 4
Explanation: The number 4 appears once, while all other numbers appear twice.
```

### Example 2:
```
Input: arr[] = {2, 2, 1}
Output: 1
Explanation: The number 1 appears once, while all other numbers appear twice.
```

---

## 💡 Approaches

### Approach 1: Brute Force

**Algorithm:** For each element in the array, count its occurrences using linear search.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == num)
                cnt++;
        }
        if (cnt == 1) return num;
    }
    return -1; // This line will never execute if the array contains a single element.
}

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}
```
**Output:** The single element is: 4

**Time Complexity:** O(N²)

**Space Complexity:** O(1)

### Approach 2: Using Hashing

**Algorithm:** Use a hash map to store the frequency of each element.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int>& arr) {
    int n = arr.size();
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    for (auto it : mpp) {
        if (it.second == 1)
            return it.first;
    }
    return -1; // This line will never execute if the array contains a single element.
}

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}
```
**Output:** The single element is: 4

**Time Complexity:** O(N log M), where M is the size of the map.

**Space Complexity:** O(M)

### Approach 3: XOR Approach (Optimal)

**Algorithm:** Use XOR properties to find the single number efficiently.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int>& arr) {
    int n = arr.size();
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}
```
**Output:** The single element is: 4

**Time Complexity:** O(N)

**Space Complexity:** O(1)

---

## 🙌 Credits

Special thanks to Kritidipta Ghosh for contributing to this article on TakeUforward.
