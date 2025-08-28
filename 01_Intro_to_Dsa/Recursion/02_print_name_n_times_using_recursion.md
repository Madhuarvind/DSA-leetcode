# ✅ Print Name N Times Using Recursion

**Topic:** Understanding Recursion by Printing a Name N Times

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

## 🧪 Example: Print a Name N Times

### Problem Statement
Write a recursive function to print a given name N times.

### Pseudocode
```
function printName(name, n):
    if n <= 0:
        return
    print(name)
    printName(name, n - 1)
```

### Code (C++)
```cpp
#include <iostream>
using namespace std;

void printName(string name, int n) {
    if (n <= 0) return; // Base case
    cout << name << endl; // Print
    printName(name, n - 1); // Recursive call
}

int main() {
    string name = "Alice";
    int n = 5;
    printName(name, n);
    return 0;
}
```

**Output:**
```
Alice
Alice
Alice
Alice
Alice
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the number of times to print.
- Space Complexity: `O(N)` due to the call stack.

---

## 🧷 Implementations

### Java

<details>
<summary>Print Name N Times</summary>

```java
public class Main {
    static void printName(String name, int n) {
        if (n <= 0) return; // Base case
        System.out.println(name); // Print
        printName(name, n - 1); // Recursive call
    }

    public static void main(String[] args) {
        String name = "Alice";
        int n = 5;
        printName(name, n);
    }
}
```

</details>

### Python

<details>
<summary>Print Name N Times</summary>

```python
def print_name(name, n):
    if n <= 0:
        return  # Base case
    print(name)  # Print
    print_name(name, n - 1)  # Recursive call

name = "Alice"
n = 5
print_name(name, n)
```

</details>

### JavaScript

<details>
<summary>Print Name N Times</summary>

```javascript
function printName(name, n) {
    if (n <= 0) return; // Base case
    console.log(name); // Print
    printName(name, n - 1); // Recursive call
}

let name = "Alice";
let n = 5;
printName(name, n);
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
