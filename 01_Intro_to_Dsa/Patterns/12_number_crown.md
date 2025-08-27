# 👑 Pattern-12: Number Crown Pattern

---

## 📝 Problem Statement

Given an integer `N`, print a **Number Crown Pattern** consisting of increasing numbers on the left, spaces in the middle, and decreasing numbers on the right.

---

## ✅ Examples

### Example 1:
**Input:** `N = 3`  
**Output:**
```
1    1
12  21
123321
```

### Example 2:
**Input:** `N = 6`  
**Output:**
```
1          1
12        21
123      321
1234    4321
12345  54321
123456654321
```

---

## 🔍 Approach

Follow the **4 golden rules** for pattern problems:

1. **Outer loop** → Runs from `1` to `N` (for each row).
2. **First inner loop** → Prints numbers from `1` to the current row index `i`.
3. **Second inner loop** → Prints spaces.  
   - Initially, spaces = `2 * (N - 1)` for the first row.  
   - Spaces decrease by `2` after each row.
4. **Third inner loop** → Prints numbers in reverse from `i` down to `1`.

---

### 🧠 Key Observations:
- The pattern is **symmetric** with numbers mirrored on both sides.
- Space count formula: `spaces = 2 * (N - i)`.

---

## ✅ Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern12(int N) {
    int spaces = 2 * (N - 1); // Initial spaces
    for (int i = 1; i <= N; i++) {
        
        // Left side numbers (ascending)
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        // Middle spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        
        // Right side numbers (descending)
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
        cout << endl; // Move to next row
        spaces -= 2;  // Reduce space count
    }
}

int main() {
    int N = 5; // Example input
    pattern12(N);
    return 0;
}
```

---

## 🖥️ Output (When N = 5)

```
1        1
12      21
123    321
1234  4321
1234554321
```

---

## 🖼️ Pattern Illustration

```markdown
![Pattern 12 – Number Crown Pattern](images/pattern12.png)
```

---

## 📌 Notes

- Middle spaces decrease by `2` with each row.
- Combines an **ascending number sequence** with a **mirrored descending sequence**.
- Commonly used for symmetry-based problems in pattern printing.

---

## 🙌 Credits

Special thanks to **Priyanshi Goel** for contributing this article to **TakeUForward**.

---

## 🔗 Related Links

- [Striver’s A2Z DSA Sheet](https://takeuforward.org/interviews/strivers-a2z-dsa-course-sheet-2/)  
- [Pattern Problems Playlist](https://www.youtube.com/playlist?list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY)

---
