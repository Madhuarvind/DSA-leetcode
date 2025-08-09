# 🔻 Pattern-5: Inverted Right Pyramid – Striver’s A2Z DSA Sheet

---

## 📝 Problem Statement

Given an integer `N`, print the following **inverted right-angled star pattern**.

---

## ✅ Examples

### Example 1:
**Input:** `N = 3`  
**Output:**
```
* * *  
* *  
*  
```

### Example 2:
**Input:** `N = 6`  
**Output:**
```
* * * * * *  
* * * * *  
* * * *  
* * *  
* *  
*  
```

---

## 🔍 Approach

To solve pattern-based problems, remember these **4 golden rules**:

1. **Outer loop** → Runs for the number of rows (here `N` rows).
2. **Inner loop** → Determines the number of columns → Here, `(N - current_row_index)`.
3. **What to print** → `'* '` inside the inner loop.
4. **Line break** → After each row is printed.

### 🧠 Key Idea:
- Row `0` → `N` stars.  
- Row `1` → `N - 1` stars.  
- Continue until the last row has `1` star.

---

## ✅ Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern5(int N) {
    // Outer loop for rows
    for (int i = 0; i < N; i++) {
        // Inner loop for decreasing number of stars
        for (int j = N; j > i; j--) {
            cout << "* ";
        }
        cout << endl; // Move to the next line
    }
}

int main() {
    int N = 5; // Example input
    pattern5(N);
    return 0;
}
```

---

## 🖥️ Output (When N = 5)

```
* * * * *  
* * * *  
* * *  
* *  
*  
```

---
