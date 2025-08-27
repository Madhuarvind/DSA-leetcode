# ✅ Check if a Number is Palindrome

**Problem Statement:** Given an integer N, check if it is a palindrome.

---

## 📌 Problem Statement

Write a function to determine if a given integer N reads the same backward as forward.

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 121`  
**Output:**  
`True`

### Example 2:
**Input:**  
`N = -121`  
**Output:**  
`False`

### Example 3:
**Input:**  
`N = 10`  
**Output:**  
`False`

---

## 💡 Approach

### 1) String Conversion Approach

**Intuition:** Convert the number to a string and check if it is the same when reversed.

#### Pseudocode
```
str_num = str(N)
return str_num == str_num[::-1]
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    if (n < 0) return false; // Negative numbers are not palindromes
    int original = n, reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int n = 121;
    cout << (isPalindrome(n) ? "True" : "False") << endl;
    return 0;
}
```

**Output:**
```
True
```

**Complexity Analysis:**
- Time Complexity: `O(log10(N))` (number of digits)
- Space Complexity: `O(1)` (no extra space used)

---

## 🧷 Implementations

### Java

<details>
<summary>Palindrome Number</summary>

```java
public class Main {
    static boolean isPalindrome(int n) {
        if (n < 0) return false; // Negative numbers are not palindromes
        int original = n, reversed = 0;
        while (n != 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n /= 10;
        }
        return original == reversed;
    }

    public static void main(String[] args) {
        int n = 121;
        System.out.println(isPalindrome(n));
    }
}
```

</details>

### Python

<details>
<summary>Palindrome Number</summary>

```python
def is_palindrome(n):
    if n < 0:
        return False  # Negative numbers are not palindromes
    original = n
    reversed_num = 0
    while n != 0:
        digit = n % 10
        reversed_num = reversed_num * 10 + digit
        n //= 10
    return original == reversed_num

n = 121
print(is_palindrome(n))
```

</details>

### JavaScript

<details>
<summary>Palindrome Number</summary>

```javascript
function isPalindrome(n) {
    if (n < 0) return false; // Negative numbers are not palindromes
    let original = n;
    let reversed = 0;
    while (n !== 0) {
        let digit = n % 10;
        reversed = reversed * 10 + digit;
        n = Math.floor(n / 10);
    }
    return original === reversed;
}

let n = 121;
console.log(isPalindrome(n));
```

</details>

---

## 🧭 Edge Cases to Consider

* Negative numbers (should return false)
* Single-digit numbers (should return true)

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
* Variations can include checking for palindromes in different bases.
