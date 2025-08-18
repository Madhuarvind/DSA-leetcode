# ⭐ Pattern-11: Binary Number Triangle Pattern

---

## 📝 Problem Statement

Given an integer `N`, print a **binary number triangle pattern** where `1` and `0` are placed alternately in each row.

---

## ✅ Examples

### Example 1:
**Input:** `N = 3`  
**Output:**
```
1
01
101
```

### Example 2:
**Input:** `N = 6`  
**Output:**
```
1
01
101
0101
10101
010101
```

---

## 🔍 Approach

Follow the **4 golden rules** for pattern printing:

1. **Outer loop** → Runs `N` times (for each row).
2. **Inner loop** →  
   - The starting value alternates by row:  
     - If `i` is even → start with `1`.  
     - If `i` is odd → start with `0`.  
   - Alternate the number for each column using `start = 1 - start`.
3. **Line break** after each row.
4. This pattern is simply alternating binary digits based on row and column index.

### 🧠 Key Idea:
- Use a `start` variable to decide the first digit of the row.  
- Flip `start` after printing each number.

---

## ✅ Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern11(int N) {
    int start = 1;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) start = 1; // Even row index → start with 1
        else start = 0;           // Odd row index → start with 0

        for (int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start; // Toggle between 1 and 0
        }
        cout << endl;
    }
}

int main() {
    int N = 5; // Example input
    pattern11(N);
    return 0;
}
```

---

## 🖥️ Output (When N = 5)

```
1
01
101
0101
10101
```

---

## 🖼️ Pattern Illustration

> Save an image named `pattern11.png` inside the `images/` folder in your repository.

```markdown
![Pattern 11 – Binary Number Triangle Pattern](images/pattern11.png)
```

---

## 📌 Notes

- Alternates `1` and `0` across each row and column.
- Useful for learning **toggle logic** using `start = 1 - start`.
- Demonstrates **row-based initialization**.

---

## 🙌 Credits

Special thanks to **Priyanshi Goel** for contributing this article to **TakeUForward**.

---

## 🔗 Related Links

- [Striver’s A2Z DSA Sheet](https://takeuforward.org/interviews/strivers-a2z-dsa-course-sheet-2/)  
- [Pattern Problems Playlist](https://www.youtube.com/playlist?list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY)

---
