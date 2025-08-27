# 🔺 Pattern-2: Right-Angled Triangle Pattern – Striver’s A2Z DSA Sheet

---

## 📝 Problem Statement

Given an integer `N`, print the following **right-angled triangle star pattern**:

### ✅ Examples

#### Example 1:
**Input:** `N = 3`  
**Output:**
```
*  
* *  
* * *  
```

#### Example 2:
**Input:** `N = 6`  
**Output:**
```
*  
* *  
* * *  
* * * *  
* * * * *  
* * * * * *  
```

---

## 🔍 Approach

To solve any pattern-based problem, remember the **4 key rules**:

1. **Outer loop** → Number of **rows** → Run from `0 to N-1`  
2. **Inner loop** → Number of **columns per row**  
   - For this right-angled triangle: inner loop runs from `0 to i` (row index).
3. **What to print:** We print `'* '` inside the inner loop.
4. Observe the **symmetry or relation** between rows and columns.

In this specific pattern:
- Each row prints as many `*` as its row number (1-based).
- So row 1 prints 1 star, row 2 prints 2, etc., up to `N` rows.

---

## ✅ Code (C++)

```cpp
#include <iostream>
using namespace std;

void pattern2(int N) {
    // Outer loop for rows
    for (int i = 0; i < N; i++) {
        // Inner loop for columns → number of stars = row number (i+1)
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl; // Move to next line after each row
    }
}

int main() {
    int N = 5; // You can take input from the user too
    pattern2(N);
    return 0;
}
```

---

## 🖥️ Output (When N = 5)

```
*  
* *  
* * *  
* * * *  
* * * * *  
```

---

## 🙌 Credits

Special thanks to **Priyanshi Goel** for contributing this article to **TakeUForward**.

---
