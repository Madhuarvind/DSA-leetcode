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

## 💻 Code (C++):

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern1(int N)
{
    // Outer loop for rows
    for (int i = 0; i < N; i++)
    {
        // Inner loop for columns
        for (int j = 0; j < N; j++)
        {
            cout << "* ";
        }

        // Move to the next line after printing each row
        cout << endl;
    }
}

int main()
{
    int N = 5;  // You can also take user input using cin
    pattern1(N);
    return 0;
}
```

---

## 🖥️ Output (for N = 5):

```
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
```

---

## 🧠 Key Takeaways:

- This is a basic square star pattern.
- Learn how to use **nested loops** effectively.
- Helps build intuition for more complex patterns (triangles, pyramids, etc.)

---

> 🎉 Special thanks to **Priyanshi Goel** for contributing to this article on takeUforward.

📚 _Want to master patterns and DSA step-by-step?_  
👉 [Striver’s A2Z DSA Sheet](https://takeuforward.org/dsa/strivers-a2z-dsa-course-sheet-2/)
