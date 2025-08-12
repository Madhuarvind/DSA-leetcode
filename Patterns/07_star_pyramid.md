# ⭐ Pattern-7: Star Pyramid – Striver’s A2Z DSA Sheet

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

