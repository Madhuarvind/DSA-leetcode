# ✅ Check if a Number is Prime

**Problem Statement:** Given an integer N, check if it is a prime number.

---

## 📌 Problem Statement

Write a function to determine if a given integer N is a prime number.

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 7`  
**Output:**  
`True`

### Example 2:
**Input:**  
`N = 10`  
**Output:**  
`False`

### Example 3:
**Input:**  
`N = 1`  
**Output:**  
`False`

---

## 💡 Approach

### 1) Iterative Approach

**Intuition:** A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.

#### Pseudocode
```
if N <= 1:
    return False
for i from 2 to sqrt(N):
    if N % i == 0:
        return False
return True
```

#### Code (C++)
```cpp
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 7;
    cout << (isPrime(n) ? "True" : "False") << endl;
    return 0;
}
```

**Output:**
```
True
```

**Complexity Analysis:**
- Time Complexity: `O(sqrt(N))`
- Space Complexity: `O(1)` (no extra space used)

---

## 🧷 Implementations

### Java

<details>
<summary>Check Prime Number</summary>

```java
public class Main {
    static boolean isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int n = 7;
        System.out.println(isPrime(n));
    }
}
```

</details>

### Python

<details>
<summary>Check Prime Number</summary>

```python
import math

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

n = 7
print(is_prime(n))
```

</details>

### JavaScript

<details>
<summary>Check Prime Number</summary>

```javascript
function isPrime(n) {
    if (n <= 1) return false;
    for (let i = 2; i <= Math.sqrt(n); i++) {
        if (n % i === 0) {
            return false;
        }
    }
    return true;
}

let n = 7;
console.log(isPrime(n));
```

</details>

---

## 🧭 Edge Cases to Consider

* `N = 0` (should return false)
* `N = 1` (should return false)
* Negative numbers (should return false)

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Iterative     | `O(sqrt(N))`   | `O(1)`           |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* This problem is a common exercise for beginners to understand number theory.
* Variations can include finding all prime numbers up to a given number.
