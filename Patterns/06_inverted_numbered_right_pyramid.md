# 🔽 Pattern-6: Inverted Numbered Right Pyramid – Striver’s A2Z DSA Sheet

---

## 📝 Problem Statement

Given an integer `N`, print the following **inverted right-angled number pyramid**.

---

## ✅ Examples

### Example 1:
**Input:** `N = 3`  
**Output:**
```
1 2 3  
1 2  
1  
```

### Example 2:
**Input:** `N = 6`  
**Output:**
```
1 2 3 4 5 6  
1 2 3 4 5  
1 2 3 4  
1 2 3  
1 2  
1  
```

---

## 🔍 Approach

To solve any pattern-based problem, follow the **4 golden rules**:

1. **Outer loop** → Runs `N` times (for each row).
2. **Inner loop** → Determines the number of columns → Here, `(N - current_row_index)`.
3. **What to print** → Numbers from `1` up to `(N - i)` for each row.
4. **Line break** → After each row.

### 🧠 Key Idea:
- Row `0` → Numbers `1` to `N`.  
- Row `1` → Numbers `1` to `N - 1`.  
- Row `i` → Numbers `1` to `(N - i)`.

---

## ✅ Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern6(int N) {
    // Outer loop for rows
    for (int i = 0; i < N; i++) {
        // Inner loop for printing numbers
        for (int j = N; j > i; j--) {
            cout << N - j + 1 << " ";
        }
        cout << endl; // Move to next line
    }
}

int main() {
    int N = 5; // Example input
    pattern6(N);
    return 0;
}
```

---

## 🖥️ Output (When N = 5)

```
1 2 3 4 5  
1 2 3 4  
1 2 3  
1 2  
1  
```

---

## 🖼️ Pattern Illustration

> Save an image named `pattern6.png` inside the `images/` folder in your repository.

```markdown
![Pattern 6 – Inverted Numbered Right Pyramid](images/pattern6.png)
```

---

## 📌 Notes

- Similar to **Pattern-5** but instead of stars, numbers are printed in **increasing order starting from 1**.
- Useful for practicing **nested loops** and understanding **row-column relationships**.

---

## 🙌 Credits

Special thanks to **Priyanshi Goel** for contributing this article to **TakeUForward**.

---

## 🔗 Related Links

- [Striver’s A2Z DSA Sheet](https://takeuforward.org/interviews/strivers-a2z-dsa-course-sheet-2/)  
- [Pattern Problems Playlist](https://www.youtube.com/playlist?list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY)

---
