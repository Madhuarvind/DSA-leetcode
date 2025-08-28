# ✅ Sum of N Numbers Using Recursion

**Problem Statement:** Calculate the sum of the first N natural numbers using recursion.

---

## 📌 What is the Sum of N Natural Numbers?

The sum of the first N natural numbers is the total obtained by adding all natural numbers from 1 to N.

### Formula:
- Sum(N) = 1 + 2 + 3 + ... + N

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 5`  
**Output:**  
`15` (1 + 2 + 3 + 4 + 5)

### Example 2:
**Input:**  
`N = 10`  
**Output:**  
`55` (1 + 2 + 3 + ... + 10)

---

## 💡 Approach

### Recursive Approach

**Intuition:** The sum can be defined in terms of the sum of (N - 1):
- Sum(N) = N + Sum(N - 1)

#### Pseudocode
```
function sum(n):
    if n == 0:
        return 0
    return n + sum(n - 1)
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) return 0; // Base case
    return n + sum(n - 1); // Recursive call
}

int main() {
    int n = 5;
    cout << "Sum: " << sum(n) << endl;
    return 0;
}
```

**Output:**
```
Sum: 15
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the input number.
- Space Complexity: `O(N)` due to the call stack.

---

## 🧷 Implementations

### Java

<details>
<summary>Sum of N Numbers Using Recursion</summary>

```java
public class Main {
    static int sum(int n) {
        if (n == 0) return 0; // Base case
        return n + sum(n - 1); // Recursive call
    }

    public static void main(String[] args) {
        int n = 5;
        System.out.println("Sum: " + sum(n));
    }
}
```

</details>

### Python

<details>
<summary>Sum of N Numbers Using Recursion</summary>

```python
def sum(n):
    if n == 0:
        return 0  # Base case
    return n + sum(n - 1)  # Recursive call

n = 5
print("Sum:", sum(n))
```

</details>

### JavaScript

<details>
<summary>Sum of N Numbers Using Recursion</summary>

```javascript
function sum(n) {
    if (n === 0) return 0; // Base case
    return n + sum(n - 1); // Recursive call
}

let n = 5;
console.log("Sum:", sum(n));
```

</details>

---

## 🧭 Edge Cases to Consider

* `N = 0` (should return 0)
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
