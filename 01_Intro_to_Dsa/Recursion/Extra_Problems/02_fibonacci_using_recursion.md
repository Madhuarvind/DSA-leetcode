# ✅ Fibonacci Using Recursion

**Problem Statement:** Calculate the Nth Fibonacci number using recursion.

---

## 📌 What is Fibonacci?

The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1. The sequence goes: 0, 1, 1, 2, 3, 5, 8, 13, ...

### Formula:
- F(0) = 0
- F(1) = 1
- F(N) = F(N - 1) + F(N - 2) for N > 1

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 5`  
**Output:**  
`5` (Fibonacci sequence: 0, 1, 1, 2, 3, 5)

### Example 2:
**Input:**  
`N = 7`  
**Output:**  
`13` (Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13)

---

## 💡 Approach

### Recursive Approach

**Intuition:** The Fibonacci number can be defined in terms of the two preceding Fibonacci numbers.

#### Pseudocode
```
function fibonacci(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0; // Base case
    if (n == 1) return 1; // Base case
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main() {
    int n = 5;
    cout << "Fibonacci: " << fibonacci(n) << endl;
    return 0;
}
```

**Output:**
```
Fibonacci: 5
```

**Complexity Analysis:**
- Time Complexity: `O(2^N)` (exponential time due to overlapping subproblems)
- Space Complexity: `O(N)` (due to the call stack)

---

## 🧷 Implementations

### Java

<details>
<summary>Fibonacci Using Recursion</summary>

```java
public class Main {
    static int fibonacci(int n) {
        if (n == 0) return 0; // Base case
        if (n == 1) return 1; // Base case
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
    }

    public static void main(String[] args) {
        int n = 5;
        System.out.println("Fibonacci: " + fibonacci(n));
    }
}
```

</details>

### Python

<details>
<summary>Fibonacci Using Recursion</summary>

```python
def fibonacci(n):
    if n == 0:
        return 0  # Base case
    if n == 1:
        return 1  # Base case
    return fibonacci(n - 1) + fibonacci(n - 2)  # Recursive call

n = 5
print("Fibonacci:", fibonacci(n))
```

</details>

### JavaScript

<details>
<summary>Fibonacci Using Recursion</summary>

```javascript
function fibonacci(n) {
    if (n === 0) return 0; // Base case
    if (n === 1) return 1; // Base case
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

let n = 5;
console.log("Fibonacci:", fibonacci(n));
```

</details>

---

## 🧭 Edge Cases to Consider

* `N = 0` (should return 0)
* `N = 1` (should return 1)
* Negative numbers (should handle gracefully)

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Recursive     | `O(2^N)`       | `O(N)`           |

---

## 🙌 Credits

Special thanks to **Striver** for the comprehensive A2Z DSA Course on TakeUforward.

---

## 📣 Notes

* Recursion is a powerful tool but can lead to stack overflow if not handled properly.
* Understanding recursion is crucial for solving complex problems like tree traversals and dynamic programming.
