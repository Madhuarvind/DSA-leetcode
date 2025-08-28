# ✅ Factorial of a Number - Iterative and Recursive

**Topic:** Calculating the factorial of a number using both iterative and recursive approaches

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

## 💡 Approaches

### 1. Recursive Approach

**Intuition:** The factorial of N can be defined in terms of the factorial of (N - 1):
- N! = N × (N - 1)!

#### Pseudocode
```
function factorialRecursive(n):
    if n == 0:
        return 1
    return n * factorialRecursive(n - 1)
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

int factorialRecursive(int n) {
    if (n == 0) return 1; // Base case
    return n * factorialRecursive(n - 1); // Recursive call
}
```

### 2. Iterative Approach

**Intuition:** Multiply numbers from 1 to N sequentially.

#### Pseudocode
```
function factorialIterative(n):
    result = 1
    for i from 1 to n:
        result = result * i
    return result
```

#### Code (C++)
```cpp
int factorialIterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
```

### Complete Program (C++)
```cpp
#include <iostream>
using namespace std;

// Recursive approach
int factorialRecursive(int n) {
    if (n == 0) return 1;
    return n * factorialRecursive(n - 1);
}

// Iterative approach
int factorialIterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n = 5;
    
    cout << "Using Recursion: " << factorialRecursive(n) << endl;
    cout << "Using Iteration: " << factorialIterative(n) << endl;
    
    return 0;
}
```

**Output:**
```
Using Recursion: 120
Using Iteration: 120
```

**Complexity Analysis:**
- Time Complexity: `O(N)` for both approaches
- Space Complexity: 
  - Recursive: `O(N)` due to call stack
  - Iterative: `O(1)`

---

## 🧷 Implementations

### Java

<details>
<summary>Factorial - Both Approaches</summary>

```java
public class Main {
    // Recursive approach
    static int factorialRecursive(int n) {
        if (n == 0) return 1;
        return n * factorialRecursive(n - 1);
    }
    
    // Iterative approach
    static int factorialIterative(int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
    
    public极
    public static void main(String[] args) {
        int n = 5;
        System.out.println("Recursive: " + factorialRecursive(n));
        System.out.println("Iterative: " + factorialIterative(n));
    }
}
```

</details>

### Python

<details>
<summary>Factorial - Both Approaches</summary>

```python
# Recursive approach
def factorial_recursive(n):
    if n == 0:
        return 1
    return n * factorial_recursive(n - 1)

# Iterative approach
def factorial_iterative(n):
    result = 极
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result

n = 5
print("Recursive:", factorial_recursive(n))
print("Iterative:", factorial_iterative(n))
```

</details>

### JavaScript

<details>
<summary>Factorial - Both Approaches极</summary>

```javascript
// Recursive approach
function factorialRecursive(n) {
    if (n === 0) return 1;
    return n * factorialRecursive(n - 1);
}

// Iterative approach
function factorialIterative(n) {
    let result = 1;
    for (let i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

let n = 5;
console.log("Recursive:", factorial极
console.log("Recursive:", factorialRecursive(n));
console.log("Iterative:", factorialIterative(n));
```

</details>

---

## 🧭 Edge Cases to Consider

* `N = 0` (should return 1)
* Negative numbers (should handle gracefully - return error or 1)
* Large numbers (may cause overflow)

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Recursive     | `O(N)`          | `O(N)`           |
| Iterative     | `O(N)`          | `O(1)`           |

---

## 🙌 Credits

Special thanks to **Striver** for the comprehensive A2Z DSA Course on TakeUforward.

---

## 📣 Notes

* Recursive approach is elegant but can cause stack overflow for large N
* Iterative approach is more memory efficient
* For very large numbers, consider using BigInteger or similar data types
* Understanding both approaches helps in choosing the right one for different scenarios
