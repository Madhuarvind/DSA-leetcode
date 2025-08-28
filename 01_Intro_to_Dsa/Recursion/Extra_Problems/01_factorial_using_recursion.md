# ✅ Factorial Using Recursion

**Problem Statement:** Calculate the factorial of a given integer N using recursion.

---

## 📌 What is Factorial?

The factorial of a non-negative integer N is the product of all positive integers less than or equal to N. It is denoted by N!.

### Formula:
- N! = N × (N - 1) × (N - 2) × ... × 1
- 0! = 1 (by definition)

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 5`  
**Output:**  
`120` (5! = 5 × 4 × 3 × 2 × 1)

### Example 2:
**Input:**  
`N = 0`  
**Output:**  
`1` (0! = 1)

---

## 💡 Approach

### Recursive Approach

**Intuition:** The factorial of N can be defined in terms of the factorial of (N - 1):
- N! = N × (N - 1)!

#### Pseudocode
```
function factorial(n):
    if n == 0:
        return 1
    return n * factorial(n - 1)
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1; // Base case
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int n = 5;
    cout << "Factorial: " << factorial(n) << endl;
    return 0;
}
```

**Output:**
```
Factorial: 120
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the input number.
- Space Complexity: `O(N)` due to the call stack.

---

## 🧷 Implementations

### Java

<details>
<summary>Factorial Using Recursion</summary>

```java
public class Main {
    static int factorial(int n) {
        if (n == 0) return 1; // Base case
        return n * factorial(n - 1); // Recursive call
    }

    public static void main(String[] args) {
        int n = 5;
        System.out.println("Factorial: " + factorial(n));
    }
}
```

</details>

### Python

<details>
<summary>Factorial Using Recursion</summary>

```python
def factorial(n):
    if n == 0:
        return 1  # Base case
    return n * factorial(n - 1)  # Recursive call

n = 5
print("Factorial:", factorial(n))
```

</details>

### JavaScript

<details>
<summary>Factorial Using Recursion</summary>

```javascript
function factorial(n) {
    if (n === 0) return 1; // Base case
    return n * factorial(n - 1); // Recursive call
}

let n = 5;
console.log("Factorial:", factorial(n));
```

</details>

---

## 🧭 Edge Cases to Consider

* `N = 0` (should return 1)
* Negative numbers (should handle gracefully)

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Recursive     | `O(N)`          | `O(N)`           |

---

## 🙌 Credits

Special thanks to **Striver** for the comprehensive A2Z DSA Course on TakeUforward.

---

## 📣 Notes

* Recursion is a powerful tool but can lead to stack overflow if not handled properly.
* Understanding recursion is crucial for solving complex problems like tree traversals and dynamic programming.
