# ✅ Reverse Letter Triangle Pattern

**Problem Statement:** Given an integer N, print the following pattern:

---

## 📌 Problem Statement

Print a triangle pattern where each row contains decreasing letters starting from 'A'.

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 3`  
**Output:**  
```
A B C
A B
A
```

### Example 2:
**Input:**  
`N = 5`  
**Output:**  
```
A B C D E
A B C D
A B C
A B
A
```

---

## 💡 Approach

### 1) Iterative Approach

**Intuition:** Use nested loops to print the letters in the required format.

#### Pseudocode
```
for i from N to 1:
    for j from 0 to i-1:
        print(chr(65 + j), end=" ")
    print()
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

void printTriangle(int n) {
    for (int i = n; i >= 1; i--) {
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
A B C D E
A B C D
A B C
A B
A
```

**Complexity Analysis:**
- Time Complexity: `O(N^2)` (due to nested loops)
- Space Complexity: `O(1)` (no extra space used)

---

## 🧷 Implementations

### Java

<details>
<summary>Reverse Letter Triangle Pattern</summary>

```java
public class Main {
    static void printTriangle(int n) {
        for (int i = n; i >= 1; i--) {
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
<summary>Reverse Letter Triangle Pattern</summary>

```python
def print_triangle(n):
    for i in range(n, 0, -1):
        for j in range(i):
            print(chr(65 + j), end=" ")
        print()

n = 5
print_triangle(n)
```

</details>

### JavaScript

<details>
<summary>Reverse Letter Triangle Pattern</summary>

```javascript
function printTriangle(n) {
    for (let i = n; i >= 1; i--) {
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
