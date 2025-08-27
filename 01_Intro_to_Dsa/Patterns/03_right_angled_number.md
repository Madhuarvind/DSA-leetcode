# 🔺 Pattern-3: Right-Angled Number Pyramid – Striver’s A2Z DSA Sheet

---

## 📝 Problem Statement

Given an integer `N`, print the following **right-angled number pyramid pattern**.

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

There are **4 general rules** for solving a pattern-based problem:

1. **Outer Loop** – Controls the number of rows (`N` times).
2. **Inner Loop** – Controls the number of columns (depends on the row number).
3. **Print Statement** – Decide what to print (numbers in this case).
4. **Line Break** – After each row, print a new line.

### 🧠 Pattern Logic:

- For every row `i` (1-based index), print numbers from `1` to `i`.
- Example: In row 4, print: `1 2 3 4`
- The pattern forms an upright right-angled triangle of numbers.

---

## ✅ Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern3(int N) {
    // Outer loop for rows
    for (int i = 1; i <= N; i++) {
        // Inner loop for numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl; // Line break after each row
    }
}

int main() {
    int N = 5; // You can take input from the user as well
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

---

## 📌 Additional Notes

- This pattern is similar to **Pattern-2**, but instead of stars, it prints incrementing numbers starting from 1 up to the row index.
- It helps in practicing **nested loops** and **loop control logic**.

---

## 🙌 Credits

Special thanks to **Priyanshi Goel** for contributing this article to **TakeUForward**.

---

## 🔗 Related Links

- [DSA Sheet – Striver's A2Z](https://takeuforward.org/interviews/strivers-a2z-dsa-course-sheet-2/)
- [Explore Patterns](https://takeuforward.org/patterns/)

---
