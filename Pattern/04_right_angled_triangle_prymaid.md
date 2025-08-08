# 🔺 Pattern-3: Right-Angled Number Pyramid – Striver’s A2Z DSA Sheet

---

## 📝 Problem Statement

Given an integer `N`, print the following **right-angled number pyramid**.

---

## ✅ Examples

### Example 1:
**Input:** `N = 3`  
**Output:**
```
1  
1 2  
1 2 3  
```

### Example 2:
**Input:** `N = 6`  
**Output:**
```
1  
1 2  
1 2 3  
1 2 3 4  
1 2 3 4 5  
1 2 3 4 5 6  
```

---

## 🔍 Approach

There are **4 general rules** for solving any pattern-based problem:

1. **Outer Loop** → Number of rows → Run from `1 to N`.
2. **Inner Loop** → Number of columns → Related to the row number.
3. **Print Statement** → Decide what to print (`numbers` in this case).
4. **Line Break** → After each row, print a newline.

### 🧠 Logic for This Pattern:

- For each row `i`, print numbers from `1` to `i`.
- Row 1 prints: `1`  
- Row 4 prints: `1 2 3 4`  
- Continue until `N` rows.

---

## ✅ Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern3(int N) {
    // Outer loop for rows
    for (int i = 1; i <= N; i++) {
        // Inner loop for columns
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl; // New line after each row
    }
}

int main() {
    int N = 5; // Example value, can take user input
    pattern3(N);
    return 0;
}
```

---

## 🖥️ Output (When N = 5)

```
1  
1 2  
1 2 3  
1 2 3 4  
1 2 3 4 5  
```
