# 📈 05. Time and Space Complexity – Striver’s A2Z DSA Course

---

## 🧠 What is Time Complexity?

Time Complexity measures **how the time to run a code changes with input size `N`**. It helps compare different solutions and identify which one is more **efficient**, independent of machine speed.

---

## ❌ Why NOT use system time?

Different machines give different execution times. A high-end machine will perform faster than a low-end one.

So instead, we use **Big O Notation** to express how time grows with input size.

---

## 🧪 Definition:

> **Time Complexity** is the rate at which the runtime of a program increases relative to input size `N`.

---

## 🔎 How is Time Complexity Represented?

Using **Big O Notation**, like:

```
O(1), O(N), O(N^2), O(log N), O(N log N), O(2^N), etc.
```

---

## 🔢 Example Code:

```cpp
for (int i = 1; i <= 5; i++) {
    cout << "Raj" << endl;
}
```

**Steps Breakdown:**
- `i = 1` (initialization)
- `i <= 5` (comparison)
- `cout` (print)
- `i++` (increment)

Total steps: `5 * 3 = 15 → O(15)`  
If `5` becomes `N`, then `O(3N)`  
Final: `O(N)` (drop constants)

---

## ✅ 3 Rules of Calculating Time Complexity

### 1. Always calculate **Worst Case**:
- **Best Case:** Minimum operations
- **Average Case:** Midway
- **Worst Case:** Maximum operations — **used in analysis**

### 2. **Ignore Constants**:
```cpp
O(3N + 2) → O(N)
```

### 3. **Ignore Lower Order Terms**:
```cpp
O(N^2 + N + 5) → O(N^2)
```

---
