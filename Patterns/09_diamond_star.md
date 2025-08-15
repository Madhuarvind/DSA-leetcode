# ⭐ Pattern-9: Diamond Star Pattern

---

## 📝 Problem Statement

Given an integer `N`, print a **diamond-shaped star pattern** (center-aligned).  
It is formed by combining an **erect star pyramid** and an **inverted star pyramid**.

---

## ✅ Examples

### Example 1:
**Input:** `N = 3`  
**Output:**
```
  *  
 ***  
*****  
*****  
 ***  
  *  
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

1. **Outer loop** → Runs `N` times for each half (first for erect pyramid, then for inverted pyramid).  
2. **Inner loops** →  
   - First loop → Prints **spaces before stars**.  
   - Second loop → Prints **stars** in an odd-number sequence.  
   - Third loop → Prints **spaces after stars** (optional for symmetry).  
3. **Line break** after each row.  
4. The diamond is essentially **Pattern-7** (pyramid) + **Pattern-8** (inverted pyramid) combined.

### 🧠 Key Idea:
- **Erect pyramid** → Row `i` has `(N - i - 1)` spaces and `(2*i + 1)` stars.  
- **Inverted pyramid** → Row `i` has `i` spaces and `(2*N - (2*i + 1))` stars.

---
# ⭐ Pattern-9: Diamond Star Pattern

---

## 📝 Problem Statement

Given an integer `N`, print a **diamond-shaped star pattern** (center-aligned).  
It is formed by combining an **erect star pyramid** and an **inverted star pyramid**.

---

## ✅ Examples

### Example 1:
**Input:** `N = 3`  
**Output:**
```
  *  
 ***  
*****  
*****  
 ***  
  *  
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

1. **Outer loop** → Runs `N` times for each half (first for erect pyramid, then for inverted pyramid).  
2. **Inner loops** →  
   - First loop → Prints **spaces before stars**.  
   - Second loop → Prints **stars** in an odd-number sequence.  
   - Third loop → Prints **spaces after stars** (optional for symmetry).  
3. **Line break** after each row.  
4. The diamond is essentially **Pattern-7** (pyramid) + **Pattern-8** (inverted pyramid) combined.

### 🧠 Key Idea:
- **Erect pyramid** → Row `i` has `(N - i - 1)` spaces and `(2*i + 1)` stars.  
- **Inverted pyramid** → Row `i` has `i` spaces and `(2*N - (2*i + 1))` stars.

---

## ✅ Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

void erect_pyramid(int N) {
    for (int i = 0; i < N; i++) {
        // Spaces before stars
        for (int j = 0; j < N - i - 1; j++) cout << " ";
        // Stars
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";
        // Spaces after stars (optional)
        for (int j = 0; j < N - i - 1; j++) cout << " ";
        cout << endl;
    }
}

void inverted_pyramid(int N) {
    for (int i = 0; i < N; i++) {
        // Spaces before stars
        for (int j = 0; j < i; j++) cout << " ";
        // Stars
        for (int j = 0; j < 2 * N - (2 * i + 1); j++) cout << "*";
        // Spaces after stars (optional)
        for (int j = 0; j < i; j++) cout << " ";
        cout << endl;
    }
}

int main() {
    int N = 5; // Example input
    erect_pyramid(N);
    inverted_pyramid(N);
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
*********
 ******* 
  *****  
   ***   
    *    
```

---

## 🖼️ Pattern Illustration

> Save an image named `pattern9.png` inside the `images/` folder in your repository.

```markdown
![Pattern 9 – Diamond Star Pattern](images/pattern9.png)
```

---

## 📌 Notes

- This is a **combination** of Pattern-7 (Star Pyramid) and Pattern-8 (Inverted Star Pyramid).
- Mastering **space–star alignment** helps in other advanced patterns.
- Useful for learning **symmetrical design patterns**.

---

## 🙌 Credits

Special thanks to **Priyanshi Goel** for contributing this article to **TakeUForward**.

---

## 🔗 Related Links

- [Striver’s A2Z DSA Sheet](https://takeuforward.org/interviews/strivers-a2z-dsa-course-sheet-2/)  
- [Pattern Problems Playlist](https://www.youtube.com/playlist?list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY)

---
