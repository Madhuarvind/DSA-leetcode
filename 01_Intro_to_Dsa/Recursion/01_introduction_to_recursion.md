# ✅ Introduction to Recursion

**Topic:** Understanding Recursion by Printing Something N Times

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

## 🧪 Example: Print "Hello" N Times

### Problem Statement
Write a recursive function to print "Hello" N times.

### Pseudocode
```
function printHello(n):
    if n <= 0:
        return
    print("Hello")
    printHello(n - 1)
```

### Code (C++)
```cpp
#include <iostream>
using namespace std;

void printHello(int n) {
    if (n <= 0) return; // Base case
    cout << "Hello" << endl; // Print
    printHello(n - 1); // Recursive call
}

int main() {
    int n = 5;
    printHello(n);
    return 0;
}
```

**Output:**
```
Hello
Hello
Hello
Hello
Hello
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the number of times to print.
- Space Complexity: `O(N)` due to the call stack.

---

## 🧷 Implementations

### Java

<details>
<summary>Print Hello N Times</summary>

```java
public class Main {
    static void printHello(int n) {
        if (n <= 0) return; // Base case
        System.out.println("Hello"); // Print
        printHello(n - 1); // Recursive call
    }

    public static void main(String[] args) {
        int n = 5;
        printHello(n);
    }
}
```

</details>

### Python

<details>
<summary>Print Hello N Times</summary>

```python
def print_hello(n):
    if n <= 0:
        return  # Base case
    print("Hello")  # Print
    print_hello(n - 1)  # Recursive call

n = 5
print_hello(n)
```

</details>

### JavaScript

<details>
<summary>Print Hello N Times</summary>

```javascript
function printHello(n) {
    if (n <= 0) return; // Base case
    console.log("Hello"); // Print
    printHello(n - 1); // Recursive call
}

let n = 5;
printHello(n);
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
