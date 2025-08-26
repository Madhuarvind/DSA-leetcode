# ✅ Alpha Hill Pattern

**Problem Statement:** Given an integer N, print the following pattern:

---

## 📌 Problem Statement

Print a hill pattern where each row contains increasing letters starting from 'A' and then decreasing back to 'A'.

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 3`  
**Output:**  
```
  A
 A B A
A B C A
```

### Example 2:
**Input:**  
`N = 5`  
**Output:**  
```
    A
   A B A
  A B C A
 A B C D A
A B C D E A
```

---

## 💡 Approach

### 1) Iterative Approach

**Intuition:** Use nested loops to print the letters in the required format, managing spaces for alignment.

#### Pseudocode
```
for i from 1 to N:
    print spaces (N - i)
    for j from 0 to i-1:
        print(chr(65 + j), end=" ")
    for j from i-2 down to 0:
        print(chr(65 + j), end=" ")
    print()
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

void printHill(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // Print increasing letters
        for (int j = 0; j < i; j++) {
            cout << char(65 + j) << " ";
        }
        // Print decreasing letters
        for (int j = i - 2; j >= 0; j--) {
            cout << char(65 + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printHill(n);
    return 0;
}
```

**Output:**
```
    A
   A B A
  A B C A
 A B C D A
A B C D E A
```

**Complexity Analysis:**
- Time Complexity: `O(N^2)` (due to nested loops)
- Space Complexity: `O(1)` (no extra space used)

---

## 🧷 Implementations

### Java

<details>
<summary>Alpha Hill Pattern</summary>

```java
public class Main {
    static void printHill(int n) {
        for (int i = 1; i <= n; i++) {
            // Print spaces
            for (int j = 0; j < n - i; j++) {
                System.out.print(" ");
            }
            // Print increasing letters
            for (int j = 0; j < i; j++) {
                System.out.print((char)(65 + j) + " ");
            }
            // Print decreasing letters
            for (int j = i - 2; j >= 0; j--) {
                System.out.print((char)(65 + j) + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int n = 5;
        printHill(n);
    }
}
```

</details>

### Python

<details>
<summary>Alpha Hill Pattern</summary>

```python
def print_hill(n):
    for i in range(1, n + 1):
        # Print spaces
        print(" " * (n - i), end="")
        # Print increasing letters
        for j in range(i):
            print(chr(65 + j), end=" ")
        # Print decreasing letters
        for j in range(i - 2, -1, -1):
            print(chr(65 + j), end=" ")
        print()

n = 5
print_hill(n)
```

</details>

### JavaScript

<details>
<summary>Alpha Hill Pattern</summary>

```javascript
function printHill(n) {
    for (let i = 1; i <= n; i++) {
        // Print spaces
        let row = " ".repeat(n - i);
        // Print increasing letters
        for (let j = 0; j < i; j++) {
            row += String.fromCharCode(65 + j) + " ";
        }
        // Print decreasing letters
        for (let j = i - 2; j >= 0; j--) {
            row += String.fromCharCode(65 + j) + " ";
        }
        console.log(row);
    }
}

let n = 5;
printHill(n);
```

</details>

---

## 🧭 Edge Cases to Consider

* `N = 0` (should handle gracefully)
* `N = 1` (should print a single letter)

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Iterative     | `O(N^2)`       | `O(1)`           |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* This pattern is a common exercise for beginners to understand nested loops.
* Variations can include different starting letters or different patterns.
