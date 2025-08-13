# ⭐ Pattern-8: Inverted Star Pyramid – Striver’s A2Z DSA Sheet

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
