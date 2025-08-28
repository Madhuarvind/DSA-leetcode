# ✅ Sum of First N Natural Numbers Using Recursion

**Topic:** Calculating the Sum of First N Natural Numbers Using Recursion

---

## 📌 What is Recursion?

Recursion is a programming technique where a function calls itself to solve a problem. It is often used to solve problems that can be broken down into smaller, similar subproblems.

---

## 🎯 Key Concepts

### 1. Base Case
The condition under which the recursion stops. It prevents infinite recursion.

### 2. Recursive Case
The part of the function where the function calls itself with a modified argument.

---

## 🧪 Example: Sum of First N Natural Numbers

### Problem Statement
Write a recursive function to calculate the sum of the first N natural numbers.

### Mathematical Formula
The sum of first N natural numbers can be calculated using the formula:
```
Sum = N + (N-1) + (N-2) + ... + 1
```

### Pseudocode
```
function sumOfNumbers(n):
    if n <= 0:
        return 0
    return n + sumOfNumbers(n - 1)
```

### Code (C++)
```cpp
#include <iostream>
using namespace std;

int sumOfNumbers(int n) {
    if (n <= 0) return 0; // Base case
    return n + sumOfNumbers(n - 1); // Recursive call
}

int main() {
    int n = 5;
    int result = sumOfNumbers(n);
    cout << "Sum of first " << n << " natural numbers: " << result << endl;
    return 0;
}
```

**Output:**
```
Sum of first 5 natural numbers: 15
```

**Explanation:**
5 + 4 + 3 + 2 + 1 = 15

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the input number.
- Space Complexity: `O(N)` due to the call stack.

---

## 🧷 Implementations

### Java

<details>
<summary>Sum of First N Natural Numbers</summary>

```java
public class Main {
    static int sumOfNumbers(int n) {
        if (n <= 0) return 0; // Base case
        return n + sumOfNumbers(n - 1); // Recursive call
    }

    public static void main(String[] args) {
        int n = 5;
        int result = sumOfNumbers(n);
        System.out.println("Sum of first " + n + " natural numbers: " + result);
    }
}
```

</details>

### Python

<details>
<summary>Sum of First N Natural Numbers</summary>

```python
def sum_of_numbers(n):
    if n <= 0:
        return 0  # Base case
    return n + sum_of_numbers(n - 1)  # Recursive call

n = 5
result = sum_of_numbers(n)
print(f"Sum of first {n} natural numbers: {result}")
```

</details>

### JavaScript

<details>
<summary>Sum of First N Natural Numbers</summary>

```javascript
function sumOfNumbers(n) {
    if (n <= 0) return 0; // Base case
    return n + sumOfNumbers(n - 1); // Recursive call
}

let n = 5;
let result = sumOfNumbers(n);
console.log(`Sum of first ${n} natural numbers: ${result}`);
```

</details>

---

## 🧭 Edge Cases to Consider

* `N = 0` (should return 0)
* Negative values of N (should return 0)
* Large values of N (may cause stack overflow)

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Recursive     | `O(N)`          | `O(N)`           |
| Iterative     | `O(N)`          | `O(1)`           |
| Formula       | `O(1)`          | `O(1)`           |

**Note:** The mathematical formula for sum of first N natural numbers is `n*(n+1)/2`

---

## 🙌 Credits

Special thanks to **Striver** for the comprehensive A2Z DSA Course on TakeUforward.

---

## 📣 Notes

* Recursion is a powerful tool but can lead to stack overflow if not handled properly.
* For large values of N, consider using the mathematical formula `n*(n+1)/2` for better performance.
* Understanding recursion is crucial for solving complex problems like tree traversals and dynamic programming.
