# 🌟 04. Pattern-1: Rectangular Star Pattern

## 📝 Problem Statement:
Given an integer `N`, print the following **N x N** star pattern.

---

## 📥 Input:

- An integer `N` (number of rows and columns)

---

## 📤 Output:

A rectangular (square) pattern with `N` rows and `N` columns where each element is a `*`.

---

## ✨ Example 1:

**Input:** `N = 3`  
**Output:**
```
* * *
* * *
* * *
```

---

## ✨ Example 2:

**Input:** `N = 6`  
**Output:**
```
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
```

---

## 🔍 Approach:

There are **4 general rules** for solving pattern-based problems:

1. **Use nested loops:**  
   - The **outer loop** runs for the number of **rows (N)**.
   - The **inner loop** runs for the number of **columns (N)** in each row.

2. **Print the symbol (`*`) inside the inner loop.**

3. **Use `cout << endl;` to move to the next row after printing each line.**

4. **Look for symmetry:**  
   This is a square pattern, so rows = columns.

---
