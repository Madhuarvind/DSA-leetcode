# ⭐ Pattern-10: Half Diamond Star Pattern

---

## 📝 Problem Statement

Given an integer `N`, print a **half diamond star pattern** (right-aligned).

---

## ✅ Examples

### Example 1:
**Input:** `N = 3`  
**Output:**
```
*
**
***
**
*
```

### Example 2:
**Input:** `N = 6`  
**Output:**
```
*
**
***
****
*****
******
*****
****
***
**
*
```

---

## 🔍 Approach

Follow the **4 golden rules** for pattern printing:

1. **Outer loop** → Runs `2*N - 1` times (because the diamond has two halves).
2. **Inner loop** →  
   - If row `i ≤ N` → number of stars = `i`.  
   - If row `i > N` → number of stars = `2*N - i`.  
3. **Line break** after each row.  
4. This is essentially **half of a full diamond** (Pattern-9) printed vertically.

### 🧠 Key Idea:
- First half → Increases stars from 1 to `N`.  
- Second half → Decreases stars from `N - 1` back to 1.

---

## ✅ Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern10(int N) {
    for (int i = 1; i <= 2 * N - 1; i++) {
        int stars = i;
        if (i > N) stars = 2 * N - i;
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int N = 5; // Example input
    pattern10(N);
    return 0;
}
```

---

## 🖥️ Output (When N = 5)

```
*
**
***
****
*****
****
***
**
*
```

---

## 🖼️ Pattern Illustration

> Save an image named `pattern10.png` inside the `images/` folder in your repository.

```markdown
![Pattern 10 – Half Diamond Star Pattern](images/pattern10.png)
```

---

## 📌 Notes

- This is **half of Pattern-9 (Diamond Star Pattern)**.
- Good practice for understanding **increment–decrement star logic**.
- Helps in mastering **mirror symmetry**.

---

## 🙌 Credits

Special thanks to **Priyanshi Goel** for contributing this article to **TakeUForward**.

---

## 🔗 Related Links

- [Striver’s A2Z DSA Sheet](https://takeuforward.org/interviews/strivers-a2z-dsa-course-sheet-2/)  
- [Pattern Problems Playlist](https://www.youtube.com/playlist?list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY)

---
