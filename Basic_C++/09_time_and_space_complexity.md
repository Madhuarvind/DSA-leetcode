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

## 🧮 Notations:

| Notation | Meaning                      |
|----------|------------------------------|
| O(f(n))  | Worst case                   |
| Ω(f(n))  | Best case                    |
| θ(f(n))  | Average case (tight bound)   |

---

## 📘 Practice Question 1:

```cpp
for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        cout << "*";
    }
}
```

**Analysis:**
- Outer loop: N
- Inner loop: N
- Total steps: N × N = **O(N²)**

---

## 📘 Practice Question 2:

```cpp
for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) {
        cout << "*";
    }
}
```

**Analysis:**
- Inner loop runs: 1 + 2 + 3 + ... + N = **(N(N+1))/2 ≈ O(N²)**

---

## 💾 What is Space Complexity?

**Space Complexity** is the total memory used by the program:
- **Input space**: memory used to store inputs
- **Auxiliary space**: extra memory for computation

---

## 🧪 Example:

```cpp
int a = 2, b = 3;
int c = a + b;
```

- `a` and `b`: input space
- `c`: auxiliary space  
➡ Total: **O(3)** → simplified to **O(1)**

---

## 📌 Good Coding Practice

Even if we can reduce space by modifying input, **don’t modify inputs unless instructed** in an interview.

---

## 🚀 Competitive Programming Tip:

- Most platforms allow ~10⁸ operations per second.
- So for 1-second constraints, aim for **O(N) ≈ 10⁶–10⁷**
- For 2s → O(2×10⁸), and so on.

---

## 👏 Special Thanks

> ✨ Special thanks to **Kritidipta Ghosh** for contributing to this article on [TakeUForward](https://takeuforward.org/).

---

📚 Want to master DSA the right way?  
Explore ➡️ [Striver’s A2Z DSA Course Sheet](https://takeuforward.org/dsa/strivers-a2z-dsa-course-sheet-2/)
