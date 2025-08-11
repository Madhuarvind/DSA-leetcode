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
