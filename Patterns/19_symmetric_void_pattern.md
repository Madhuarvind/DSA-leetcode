# ✅ Symmetric Void Pattern

**Problem Statement:** Given an integer N, print the following pattern:

---

## 📌 Problem Statement

Print a symmetric void pattern where the outer layer is filled with stars and the inner layer is void.

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 5`  
**Output:**  
```
* * * * *
*       *
*       *
*       *
* * * * *
```

### Example 2:
**Input:**  
`N = 7`  
**Output:**  
```
* * * * * * *
*           *
*           *
*           *
*           *
*           *
* * * * * * *
```

---

## 💡 Approach

### 1) Iterative Approach

**Intuition:** Use nested loops to print the stars and spaces in the required format.

#### Pseudocode
```
for i from 1 to N:
    for j from 1 to N:
        if i == 1 or i == N or j == 1 or j == N:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

void printSymmetricVoid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printSymmetricVoid(n);
    return 0;
}
```

**Output:**
```
* * * * *
*       *
*       *
*       *
* * * * *
```

**Complexity Analysis:**
- Time Complexity: `O(N^2)` (due to nested loops)
- Space Complexity: `O(1)` (no extra space used)

---

## 🧷 Implementations

### Java

<details>
<summary>Symmetric Void Pattern</summary>

```java
public class Main {
    static void printSymmetricVoid(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == 1 || i == n || j == 1 || j == n) {
                    System.out.print("* ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int n = 5;
        printSymmetricVoid(n);
    }
}
```

</details>

### Python

<details>
<summary>Symmetric Void Pattern</summary>

```python
def print_symmetric_void(n):
    for i in range(1, n + 1):
        for j in range(1, n + 1):
            if i == 1 or i == n or j == 1 or j == n:
                print("*", end=" ")
            else:
                print(" ", end=" ")
        print()

n = 5
print_symmetric_void(n)
```

</details>

### JavaScript

<details>
<summary>Symmetric Void Pattern</summary>

```javascript
function printSymmetricVoid(n) {
    for (let i = 1; i <= n; i++) {
        let row = "";
        for (let j = 1; j <= n; j++) {
            if (i === 1 || i === n || j === 1 || j === n) {
                row += "* ";
            } else {
                row += "  ";
            }
        }
        console.log(row);
    }
}

let n = 5;
printSymmetricVoid(n);
```

</details>

---

## 🧭 Edge Cases to Consider

* `N = 0` (should handle gracefully)
* `N = 1` (should print a single star)

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
* Variations can include different characters or different patterns.
