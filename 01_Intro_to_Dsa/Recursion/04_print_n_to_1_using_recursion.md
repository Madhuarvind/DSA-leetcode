# ✅ Print N to 1 Using Recursion

**Topic:** Understanding Recursion by Printing Numbers from N to 1

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

## 🧪 Example: Print Numbers from N to 1

### Problem Statement
Write a recursive function to print numbers from N to 1.

### Pseudocode
```
function printNumbers(n):
    if n <= 0:
        return
    print(n)
    printNumbers(n - 1)
```

### Code (C++)
```cpp
#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n <= 0) return; // Base case
    cout << n << endl; // Print current number
    printNumbers(n - 1); // Recursive call (prints n-1 to 1)
}

int main() {
    int n = 5;
    printNumbers(n);
    return 0;
}
```

**Output:**
```
5
4
3
2
1
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the number of times to print.
- Space Complexity: `O(N)` due to the call stack.

---

## 🧷 Implementations

### Java

<details>
<summary>Print N to 1</summary>

```java
public class Main {
    static void printNumbers(int n) {
        if (n <= 0) return; // Base case
        System.out.println(n); // Print current number
        printNumbers(n - 1); // Recursive call
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
<summary>Print N to 1</summary>

```python
def print_numbers(n):
    if n <= 0:
        return  # Base case
    print(n)  # Print current number
    print_numbers(n - 1)  # Recursive call

n = 5
print_numbers(n)
```

</details>

### JavaScript

<details>
<summary>Print N to 1</summary>

```javascript
function printNumbers(n) {
    if (n <= 0) return; // Base case
    console.log(n); // Print current number
    printNumbers(n - 1); // Recursive call
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
* This approach prints the current number first and then makes the recursive call, resulting in descending order.
