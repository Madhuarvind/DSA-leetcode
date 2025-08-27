
# ✅ Reverse Digits of a Number

**Problem Statement:** Given an integer N, reverse the digits of the number.

---

## 📌 Problem Statement

Write a function to reverse the digits of a given integer N.

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 12345`  
**Output:**  
`54321`

### Example 2:
**Input:**  
`N = 0`  
**Output:**  
`0`

### Example 3:
**Input:**  
`N = -9876`  
**Output:**  
`-6789`

---

## 💡 Approach

### 1) Iterative Approach

**Intuition:** Use a loop to extract the last digit and build the reversed number.

#### Pseudocode
```
reversed = 0
while N != 0:
    digit = N % 10
    reversed = reversed * 10 + digit
    N = N // 10
return reversed
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

int reverseDigits(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main() {
    int n = -9876;
    cout << "Reversed number: " << reverseDigits(n) << endl;
    return 0;
}
```

**Output:**
```
Reversed number: -6789
```

**Complexity Analysis:**
- Time Complexity: `O(log10(N))` (number of digits)
- Space Complexity: `O(1)` (no extra space used)

---

## 🧷 Implementations

### Java

<details>
<summary>Reverse Digits of a Number</summary>

```java
public class Main {
    static int reverseDigits(int n) {
        int reversed = 0;
        while (n != 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n /= 10;
        }
        return reversed;
    }

    public static void main(String[] args) {
        int n = -9876;
        System.out.println("Reversed number: " + reverseDigits(n));
    }
}
```

</details>

### Python

<details>
<summary>Reverse Digits of a Number</summary>

```python
def reverse_digits(n):
    reversed_num = 0
    while n != 0:
        digit = n % 10
        reversed_num = reversed_num * 10 + digit
        n //= 10
    return reversed_num

n = -9876
print("Reversed number:", reverse_digits(n))
```

</details>

### JavaScript

<details>
<summary>Reverse Digits of a Number</summary>

```javascript
function reverseDigits(n) {
    let reversed = 0;
    while (n !== 0) {
        let digit = n % 10;
        reversed = reversed * 10 + digit;
        n = Math.floor(n / 10);
    }
    return reversed;
}

let n = -9876;
console.log("Reversed number:", reverseDigits(n));
```

</details>

---

## 🧭 Edge Cases to Consider

* `N = 0` (should return 0)
* Negative numbers (should maintain the sign)

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
* Variations can include reversing digits in different bases.
