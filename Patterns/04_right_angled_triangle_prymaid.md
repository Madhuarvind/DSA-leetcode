# 🔺 Pattern-4: Right-Angled Number Pyramid – II (Striver’s A2Z DSA Sheet)

---

## 📝 Problem Statement

Given an integer `N`, print the following **right-angled number pyramid** where each row contains the **same number repeated**.

---

## ✅ Examples

### Example 1:
**Input:** `N = 3`  
**Output:**
```
1  
2 2  
3 3 3  
```

### Example 2:
**Input:** `N = 6`  
**Output:**
```
1  
2 2  
3 3 3  
4 4 4 4  
5 5 5 5 5  
6 6 6 6 6 6  
```

---

## 🔍 Approach

There are **4 general rules** for solving any pattern-based problem:

1. **Outer Loop** → Number of rows → Run from `1 to N`.
2. **Inner Loop** → Number of columns → Related to the row number.
3. **Print Statement** → Here, print the **row number** instead of stars or sequence.
4. **Line Break** → After each row, print a newline.

### 🧠 Logic for This Pattern:

- For each row `i`, print the number `i` exactly `i` times.
- Row 1: `1`  
- Row 4: `4 4 4 4`  
- Continue until `N` rows.

---

## ✅ Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern4(int N) {
    // Outer loop for rows
    for (int i = 1; i <= N; i++) {
        // Inner loop for columns
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl; // New line after each row
    }
}

int main() {
    int N = 5; // Example value, can take user input
    pattern4(N);
    return 0;
}
```

---

## 🖥️ Output (When N = 5)

```
1  
2 2  
3 3 3  
4 4 4 4  
5 5 5 5 5  
```

---

## 🖼️ Pattern Illustration

> Save an image named `pattern4.png` inside the `images/` folder of your repository.

```markdown
![Pattern 4 – Right-Angled Number Pyramid II](images/pattern4.png)
```

---

## 📌 Notes

- Similar to **Pattern-2** and **Pattern-3**, but prints **repeated row numbers**.
- Reinforces **nested loops** and controlling the output.

---

## 🙌 Credits

Special thanks to **Priyanshi Goel** for contributing this article to **TakeUForward**.

---

## 🔗 Related Links

- [Striver’s A2Z DSA Sheet](https://takeuforward.org/interviews/strivers-a2z-dsa-course-sheet-2/)  
- [Pattern Problems Playlist](https://www.youtube.com/playlist?list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY)

---
