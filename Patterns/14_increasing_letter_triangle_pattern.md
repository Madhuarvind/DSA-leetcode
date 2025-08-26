# ✅ Increasing Letter Triangle Pattern

**Problem Statement:** Given an integer N, print the following pattern:

---

## 📌 Problem Statement

Print a triangle pattern where each row contains increasing letters starting from 'A'.

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 3`  
**Output:**  
```
A
A B
A B C
```

### Example 2:
**Input:**  
`N = 5`  
**Output:**  
```
A
A B
A B C
A B C D
A B C D E
```

---

## 💡 Approach

### 1) Iterative Approach

**Intuition:** Use nested loops to print the letters in the required format.

#### Pseudocode
```
for i from 1 to N:
    for j from 0 to i-1:
        print(chr(65 + j), end=" ")
    print()
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

void printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << char(65 + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printTriangle(n);
    return 0;
}
```

**Output:**
```
A
A B
A B C
A B C D
A B C D E
```

**Complexity Analysis:**
- Time Complexity: `O(N^2)` (due to nested loops)
- Space Complexity: `O(1)` (no extra space used)

---

## 🧷 Implementations

### Java

<details>
<summary>Increasing Letter Triangle Pattern</summary>

```java
public class Main {
    static void printTriangle(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print((char)(65 + j) + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int n = 5;
        printTriangle(n);
    }
}
```

</details>

### Python

<details>
<summary>Increasing Letter Triangle Pattern</summary>

```python
def print_triangle(n):
    for i in range(1, n + 1):
        for j in range(i):
            print(chr(65 + j), end=" ")
        print()

n = 5
print_triangle(n)
```

</details>

### JavaScript

<details>
<summary>Increasing Letter Triangle Pattern</summary>

```javascript
function printTriangle(n) {
    for (let i = 1; i <= n; i++) {
        let row = "";
        for (let j = 0; j < i; j++) {
            row += String.fromCharCode(65 + j) + " ";
        }
        console.log(row);
    }
}

let n = 5;
printTriangle(n);
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
