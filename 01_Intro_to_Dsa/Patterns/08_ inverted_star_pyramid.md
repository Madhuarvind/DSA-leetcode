# ⭐ Pattern-8: Inverted Star Pyramid

---

## 📝 Problem Statement

Given an integer `N`, print an **inverted center-aligned star pyramid**.

---

## ✅ Examples

### Example 1:
**Input:** `N = 3`  
**Output:**
```
*****
 ***
  *
```

### Example 2:
**Input:** `N = 6`  
**Output:**
```
***********
 *********
  *******
   *****
    ***
     *
```

---

## 🔍 Approach

Follow the **4 golden rules** for pattern printing:

1. **Outer loop** → Runs `N` times (for each row).
2. **Inner loops** →  
   - First loop → Prints **spaces before stars** → `i` spaces.  
   - Second loop → Prints **stars** → `2*N - (2*i + 1)` stars.  
   - Third loop → Prints **spaces after stars** → `i` spaces.
3. **Line break** after each row.
4. This is essentially **Pattern-7** reversed vertically.

### 🧠 Key Idea:
- Row `0` → 0 spaces, `2*N - 1` stars, 0 spaces.  
- Row `1` → 1 space, `2*N - 3` stars, 1 space.  
- Row `i` → `i` spaces, `(2*N - (2*i + 1))` stars, `i` spaces.

---

## ✅ Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern8(int N) {
    // Outer loop for rows
    for (int i = 0; i < N; i++) {
        
        // Spaces before stars
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        
        // Stars
        for (int j = 0; j < 2 * N - (2 * i + 1); j++) {
            cout << "*";
        }
        
        // Spaces after stars
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        
        // Move to next line
        cout << endl;
    }
}

int main() {
    int N = 5; // Example input
    pattern8(N);
    return 0;
}
```

---

## 🖥️ Output (When N = 5)

```
*********
 ******* 
  *****  
   ***   
    *    
```

---

## 🖼️ Pattern Illustration

> Save an image named `pattern8.png` inside the `images/` folder in your repository.

```markdown
![Pattern 8 – Inverted Star Pyramid](images/pattern8.png)
```

---

## 📌 Notes

- This is the **reverse** of Pattern-7 (Star Pyramid).
- Practice helps in mastering **space–star alignment**.
- Useful for understanding **mirror symmetry in patterns**.

---

## 🙌 Credits

Special thanks to **Priyanshi Goel** for contributing this article to **TakeUForward**.

---

## 🔗 Related Links

- [Striver’s A2Z DSA Sheet](https://takeuforward.org/interviews/strivers-a2z-dsa-course-sheet-2/)  
- [Pattern Problems Playlist](https://www.youtube.com/playlist?list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY)

---
