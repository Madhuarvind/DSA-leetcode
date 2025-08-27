# ✅ Count Digits in a Number

**Problem Statement:** Given an integer N, count the number of digits in the number.

---

## 📌 Problem Statement

Write a function to count the number of digits in a given integer N.

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 12345`  
**Output:**  
`5`

### Example 2:
**Input:**  
`N = 0`  
**Output:**  
`1`

### Example 3:
**Input:**  
`N = -9876`  
**Output:**  
`4`

---

## 💡 Approach

### 1) Iterative Approach

**Intuition:** Use a loop to divide the number by 10 until it becomes 0, counting the iterations.

#### Pseudocode
```
count = 0
while N != 0:
    N = N // 10
    count += 1
return count
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

int countDigits(int n) {
    if (n == 0) return 1; // Special case for 0
    n = abs(n); // Handle negative numbers
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int n = -9876;
    cout << "Number of digits: " << countDigits(n) << endl;
    return 0;
}
```

**Output:**
```
Number of digits: 4
```

**Complexity Analysis:**
- Time Complexity: `O(log10(N))` (number of digits)
- Space Complexity: `O(1)` (no extra space used)

---

## 🧷 Implementations

### Java

<details>
<summary>Count Digits in a Number</summary>

```java
public class Main {
    static int countDigits(int n) {
        if (n == 0) return 1; // Special case for 0
        n = Math.abs(n); // Handle negative numbers
        int count = 0;
        while (n != 0) {
            n /= 10;
            count++;
        }
        return count;
    }

    public static void main(String[] args) {
        int n = -9876;
        System.out.println("Number of digits: " + countDigits(n));
    }
}
```

</details>

### Python

<details>
<summary>Count Digits in a Number</summary>

```python
def count_digits(n):
    if n == 0:
        return 1  # Special case for 0
    n = abs(n)  # Handle negative numbers
    count = 0
    while n != 0:
        n //= 10
        count += 1
    return count

n = -9876
print("Number of digits:", count_digits(n))
```

</details>

### JavaScript

<details>
<summary>Count Digits in a Number</summary>

```javascript
function countDigits(n) {
    if (n === 0) return 1; // Special case for 0
    n = Math.abs(n); // Handle negative numbers
    let count = 0;
    while (n !== 0) {
        n = Math.floor(n / 10);
        count++;
    }
    return count;
}

let n = -9876;
console.log("Number of digits:", countDigits(n));
```

</details>

---

## 🧭 Edge Cases to Consider

* `N = 0` (should return 1)
* Negative numbers (should count digits without the sign)

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Iterative     | `O(log10(N))`  | `O(1)`           |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* This problem is a common exercise for beginners to understand number manipulation.
* Variations can include counting digits in different bases.
