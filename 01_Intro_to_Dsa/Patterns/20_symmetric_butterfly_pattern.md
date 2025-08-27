# ✅ Symmetric Butterfly Pattern

**Problem Statement:** Given an integer N, print the following pattern:

---

## 📌 Problem Statement

Print a symmetric butterfly pattern where the outer layer is filled with stars.

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 4`  
**Output:**  
```
*       *
* *   * *
*   *   *
* * * * *
```

### Example 2:
**Input:**  
`N = 5`  
**Output:**  
```
*         *
* *     * *
*   * *   *
*     *   *
* * * * * *
```

---

## 💡 Approach

### 1) Iterative Approach

**Intuition:** Use nested loops to print the stars and spaces in the required format.

#### Pseudocode
```
for i from 1 to N:
    for j from 1 to N:
        if j <= i:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    for j from N to 1:
        if j <= i:
            print("*", end=" ")
    print()
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

void printButterfly(int n) {
    for (int i = 1; i <= n; i++) {
        // Left wing
        for (int j = 1; j <= n; j++) {
            if (j <= i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        // Right wing
        for (int j = n; j >= 1; j--) {
            if (j <= i) {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printButterfly(n);
    return 0;
}
```

**Output:**
```
*         *
* *     * *
*   * *   *
*     *   *
* * * * * *
```

**Complexity Analysis:**
- Time Complexity: `O(N^2)` (due to nested loops)
- Space Complexity: `O(1)` (no extra space used)

---

## 🧷 Implementations

### Java

<details>
<summary>Symmetric Butterfly Pattern</summary>

```java
public class Main {
    static void printButterfly(int n) {
        for (int i = 1; i <= n; i++) {
            // Left wing
            for (int j = 1; j <= n; j++) {
                if (j <= i) {
                    System.out.print("* ");
                } else {
                    System.out.print("  ");
                }
            }
            // Right wing
            for (int j = n; j >= 1; j--) {
                if (j <= i) {
                    System.out.print("* ");
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int n = 5;
        printButterfly(n);
    }
}
```

</details>

### Python

<details>
<summary>Symmetric Butterfly Pattern</summary>

```python
def print_butterfly(n):
    for i in range(1, n + 1):
        # Left wing
        for j in range(1, n + 1):
            if j <= i:
                print("*", end=" ")
            else:
                print(" ", end=" ")
        # Right wing
        for j in range(n, 0, -1):
            if j <= i:
                print("*", end=" ")
        print()

n = 5
print_butterfly(n)
```

</details>

### JavaScript

<details>
<summary>Symmetric Butterfly Pattern</summary>

```javascript
function printButterfly(n) {
    for (let i = 1; i <= n; i++) {
        // Left wing
        let row = "";
        for (let j = 1; j <= n; j++) {
            if (j <= i) {
                row += "* ";
            } else {
                row += "  ";
            }
        }
        // Right wing
        for (let j = n; j >= 1; j--) {
            if (j <= i) {
                row += "* ";
            }
        }
        console.log(row);
    }
}

let n = 5;
printButterfly(n);
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
