# ⭐ Pattern-7: Star Pyramid 

---

## 📝 Problem Statement

Given an integer `N`, print a **center-aligned star pyramid**.

---

## ✅ Examples

### Example 1:
**Input:** `N = 3`  
**Output:**
```
  *  
 *** 
*****
```

### Example 2:
**Input:** `N = 6`  
**Output:**
```
     *     
    ***    
   *****   
  *******  
 ********* 
***********
```

---

## 🔍 Approach

To solve any pattern-based problem, follow the **4 golden rules**:

1. **Outer loop** → Runs `N` times (for each row).
2. **Inner loops** →  
   - First loop → Prints **spaces** before stars → `(N - i - 1)` spaces.  
   - Second loop → Prints **stars** → `(2 * i + 1)` stars.  
   - Third loop → Prints **spaces** after stars → `(N - i - 1)` spaces.
3. **Line break** → After each row.
4. Observe symmetry and alignment.

### 🧠 Key Idea:
- Row `0` → `N-1` spaces, `1` star, `N-1` spaces.  
- Row `1` → `N-2` spaces, `3` stars, `N-2` spaces.  
- Row `i` → `(N - i - 1)` spaces, `(2 * i + 1)` stars, `(N - i - 1)` spaces.

---

## ✅ Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern7(int N) {
    // Outer loop for rows
    for (int i = 0; i < N; i++) {
        
        // Spaces before stars
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }
        
        // Stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        
        // Spaces after stars
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }
        
        // Move to next line
        cout << endl;
    }
}

int main() {
    int N = 5; // Example input
    pattern7(N);
    return 0;
}
```

---

## 🖥️ Output (When N = 5)

```
    *    
   ***   
  *****  
 ******* 
*********
```

---

## 🖼️ Pattern Illustration

> Save an image named `pattern7.png` inside the `images/` folder in your repository.

```markdown
![Pattern 7 – Star Pyramid](images/pattern7.png)
```

---

## 📌 Notes

- This pattern is useful to practice **nested loops** and **space management**.
- The pyramid is **center-aligned**, requiring careful placement of spaces before and after stars.

---

## 🙌 Credits

Special thanks to **Priyanshi Goel** for contributing this article to **TakeUForward**.

---

## 🔗 Related Links

- [Striver’s A2Z DSA Sheet](https://takeuforward.org/interviews/strivers-a2z-dsa-course-sheet-2/)  
- [Pattern Problems Playlist](https://www.youtube.com/playlist?list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY)

---
