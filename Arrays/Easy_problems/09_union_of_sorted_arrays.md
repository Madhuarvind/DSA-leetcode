# ✅ Union of Two Sorted Arrays

**Problem Statement:** Given two sorted arrays, arr1 and arr2 of size n and m. Find the union of two sorted arrays. The union of two arrays can be defined as the common and distinct elements in the two arrays. Elements in the union should be in ascending order.

---

## 📌 Problem Statement

Given two sorted arrays, find the union of both arrays while maintaining sorted order and removing duplicates.

---

## 🧪 Examples

### Example 1:
```
Input: arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, arr2[] = {2, 3, 4, 4, 5, 11, 12}
Output: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}
```

---

## 💡 Approaches

### Approach 1: Using Map

**Algorithm:** Use a map to store frequencies of elements from both arrays. Since map stores keys in sorted order, we can directly get the union.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
    map<int, int> freq;
    vector<int> Union;
    for (int i = 0; i < n; i++)
        freq[arr1[i]]++;
    for (int i = 0; i < m; i++)
        freq[arr2[i]]++;
    for (auto &it: freq)
        Union.push_back(it.first);
    return Union;
}

int main() {
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = FindUnion(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is: " << endl;
    for (auto &val: Union)
        cout << val << " ";
    return 0;
}
```
**Output:** 1 2 3 4 5 6 7 8 9 10 11 12

**Time Complexity:** O((m+n)log(m+n))

**Space Complexity:** O(m+n)

### Approach 2: Using Set

**Algorithm:** Use a set to store distinct elements from both arrays. Set automatically maintains sorted order.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
    set<int> s;
    vector<int> Union;
    for (int i = 0; i < n; i++)
        s.insert(arr1[i]);
    for (int i = 0; i < m; i++)
        s.insert(arr2[i]);
    for (auto &it: s)
        Union.push_back(it);
    return Union;
}

int main() {
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = FindUnion(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is: " << endl;
    for (auto &val: Union)
        cout << val << " ";
    return 0;
}
```
**Output:** 1 2 3 4 5 6 7 8 9 10 11 12

**Time Complexity:** O((m+n)log(m+n))

**Space Complexity:** O(m+n)

### Approach 3: Two Pointers (Optimal)

**Algorithm:** Use two pointers to traverse both sorted arrays simultaneously and build the union while maintaining order and removing duplicates.

#### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;
    vector<int> Union;
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            if (Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        } else {
            if (Union.size() == 0 || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n) {
        if (Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while (j < m) {
        if (Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}

int main() {
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = FindUnion(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is: " << endl;
    for (auto &val: Union)
        cout << val << " ";
    return 0;
}
```
**Output:** 1 2 3 4 5 6 7 8 9 10 11 12

**Time Complexity:** O(m+n)

**Space Complexity:** O(m+n)

---

## 🙌 Credits

Special thanks to SaiSri Angajala for contributing to this article on TakeUforward.
