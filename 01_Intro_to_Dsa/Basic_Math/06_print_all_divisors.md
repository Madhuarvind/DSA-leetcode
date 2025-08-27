# ✅ Print All Divisors of a Number

**Problem Statement:** Given an integer N, print all divisors of the number.

---

## 📌 Problem Statement

Write a function to print all divisors of a given integer N.

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 12`  
**Output:**  
`1 2 3 4 6 12`

### Example 2:
**Input:**  
`N = 15`  
**Output:**  
`1 3 5 15`

### Example 3:
**Input:**  
`N = 7`  
**Output:**  
`1 7`

---

## 💡 Approach

### 1) Iterative Approach

**Intuition:** Iterate from 1 to N and check if the number is a divisor.

#### Pseudocode
```
for i from 1 to N:
    if N % i == 0:
        print(i)
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

void printDivisors(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n = 12;
    printDivisors(n);
    return 0;
}
```

**Output:**
```
1 2 3 4 6 12
```

**Complexity Analysis:**
- Time Complexity: `O(N)`
- Space Complexity: `O(1)` (no extra space used)

---

## 🧷 Implementations

### Java

<details>
<summary>Print All Divisors</summary>

```java
public class Main {
    static void printDivisors(int n) {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int n = 12;
        printDivisors(n);
    }
}
```

</details>

### Python

<details>
<summary>Print All Divisors</summary>

```python
def print_divisors(n):
    for i in range(1, n + 1):
        if n % i == 0:
            print(i, end=" ")
    print()

n = 12
print_divisors(n)
```

</details>

### JavaScript

<details>
<summary>Print All Divisors</summary>

```javascript
function printDivisors(n) {
    let divisors = "";
    for (let i = 1; i <= n; i++) {
        if (n % i === 0) {
            divisors += i + " ";
        }
    }
    console.log(divisors);
}

let n = 12;
printDivisors(n);
```

</details>

---

## 🧭 Edge Cases to Consider

* `N = 0` (should handle gracefully)
* Negative numbers (should consider absolute value)

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Iterative     | `O(N)`         | `O(1)`           |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* This problem is a common exercise for beginners to understand number theory.
* Variations can include finding the sum of divisors or the number of divisors.
