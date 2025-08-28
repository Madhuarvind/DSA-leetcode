# ✅ Print 1 to N Using Recursion

**Topic:** Understanding Recursion by Printing Numbers from 1 to N

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

## 🧪 Example: Print Numbers from 1 to N

### Problem Statement
Write a recursive function to print numbers from 1 to N.

### Pseudocode
```
function printNumbers(n):
    if n <= 0:
        return
    printNumbers(n - 1)
    print(n)
```

### Code (C++)
```cpp
#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n <= 0) return; // Base case
    printNumbers(n - 1); // Recursive call (prints 1 to n-1 first)
    cout << n << endl; // Print current number
}

int main() {
    int n = 5;
    printNumbers(n);
    return 0;
}
```

**Output:**
```
1
2
3
4
5
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the number of times to print.
- Space Complexity: `O(N)` due to the call stack.

---

## 🧷 Implementations

### Java

<details>
<summary>Print 1 to N</summary>

```java
public class Main {
    static void printNumbers(int n) {
        if (n <= 0) return; // Base case
        printNumbers(n - 1); // Recursive call
        System.out.println(n); // Print current number
    }

    public static void main(String[] args) {
        int n = 5;
        printNumbers(n);
    }
}
```

</details>

### Python

<details>
<summary>Print 1 to N</summary>

```python
def print_numbers(n):
    if n <= 0:
        return  # Base case
    print_numbers(n - 1)  # Recursive call
    print(n)  # Print current number

n = 5
print_numbers(n)
```

</details>

### JavaScript

<details>
<summary>Print 1 to N</summary>

```javascript
function printNumbers(n) {
    if (n <= 0) return; // Base case
    printNumbers(n - 1); // Recursive call
    console.log(n); // Print current number
}

let n = 5;
printNumbers(n);
```

</details>

---

## 🧭 Edge Cases to Consider

* `N = 0` (should not print anything)
* Negative values of N (should not print anything)

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
* This approach uses tail recursion where the recursive call happens before printing, which means numbers are printed in ascending order.
