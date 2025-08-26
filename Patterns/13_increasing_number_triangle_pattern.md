# ✅ Increasing Number Triangle Pattern

**Problem Statement:** Print an increasing number triangle pattern based on the given number of rows.

---

## 📌 Problem Statement

Given a number of rows `n`, print a triangle pattern where each row contains increasing numbers starting from 1.

---

## 🧪 Examples

### Example 1:
**Input:**  
`n = 5`  
**Output:**  
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

### Example 2:
**Input:**  
`n = 3`  
**Output:**  
```
1
1 2
1 2 3
```

---

## 💡 Approach

### 1) Iterative Approach

**Intuition:** Use nested loops to print the numbers in the required format.

#### Pseudocode
```
for i from 1 to n:
    for j from 1 to i:
        print(j, end=" ")
    print()
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

void printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
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
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

**Complexity Analysis:**
- Time Complexity: `O(N^2)` (due to nested loops)
- Space Complexity: `O(1)` (no extra space used)

---

## 🧷 Implementations

### Java

<details>
<summary>Increasing Number Triangle Pattern</summary>

```java
public class Main {
    static void printTriangle(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
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
<summary>Increasing Number Triangle Pattern</summary>

```python
def print_triangle(n):
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print(j, end=" ")
        print()

n = 5
print_triangle(n)
```

</details>

### JavaScript

<details>
<summary>Increasing Number Triangle Pattern</summary>

```javascript
function printTriangle(n) {
    for (let i = 1; i <= n; i++) {
        let row = "";
        for (let j = 1; j <= i; j++) {
            row += j + " ";
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

* `n = 0` (should handle gracefully)
* `n = 1` (should print a single number)

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
* Variations can include different starting numbers or different patterns.
