# ✅ Check if the Given String is Palindrome

**Topic:** Determining if a string is a palindrome using recursion

---

## 📌 What is a Palindrome?

A palindrome is a string that reads the same forward and backward. Examples include "madam", "racecar", and "level".

---

## 🧪 Examples

### Example 1:
**Input:**  
`str = "madam"`  
**Output:**  
`True`

### Example 2:
**Input:**  
`str = "hello"`  
**Output:**  
`False`

---

## 💡 Approach

### Recursive Approach

**Intuition:** A string is a palindrome if the first and last characters are the same, and the substring formed by removing these characters is also a palindrome.

#### Pseudocode
```
function isPalindrome(str, start, end):
    if start >= end:
        return True
    if str[start] != str[end]:
        return False
    return isPalindrome(str, start + 1, end - 1)
```

#### Code (C++)
```cpp
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int start, int end) {
    if (start >= end) return true; // Base case
    if (str[start] != str[end]) return false; // Mismatch
    return isPalindrome(str, start + 1, end - 1); // Recursive call
}

int main() {
    string str = "madam";
    bool result = isPalindrome(str, 0, str.length() - 1);
    cout << (result ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}
```

**Output:**
```
Palindrome
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the length of the string.
- Space Complexity: `O(N)` due to the call stack.

---

## 🧷 Implementations

### Java

<details>
<summary>Check Palindrome - Recursive Approach</summary>

```java
public class Main {
    static boolean isPalindrome(String str, int start, int end) {
        if (start >= end) return true; // Base case
        if (str.charAt(start) != str.charAt(end)) return false; // Mismatch
        return isPalindrome(str, start + 1, end - 1); // Recursive call
    }

    public static void main(String[] args) {
        String str = "madam";
        boolean result = isPalindrome(str, 0, str.length() - 1);
        System.out.println(result ? "Palindrome" : "Not a palindrome");
    }
}
```

</details>

### Python

<details>
<summary>Check Palindrome - Recursive Approach</summary>

```python
def is_palindrome(s, start, end):
    if start >= end:
        return True  # Base case
    if s[start] != s[end]:
        return False  # Mismatch
    return is_palindrome(s, start + 1, end - 1)  # Recursive call

s = "madam"
result = is_palindrome(s, 0, len(s) - 1)
print("Palindrome" if result else "Not a palindrome")
```

</details>

### JavaScript

<details>
<summary>Check Palindrome - Recursive Approach</summary>

```javascript
function isPalindrome(s, start, end) {
    if (start >= end) return true; // Base case
    if (s[start] !== s[end]) return false; // Mismatch
    return isPalindrome(s, start + 1, end - 1); // Recursive call
}

let str = "madam";
let result = isPalindrome(str, 0, str.length - 1);
console.log(result ? "Palindrome" : "Not a palindrome");
```

</details>

---

## 🧭 Edge Cases to Consider

* Empty string (should return true)
* Single character string (should return true)
* Strings with spaces or punctuation (consider normalizing input)

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Recursive     | `O(N)`          | `O(N)`           |

---

## 🙌 Credits

Special thanks to **Striver** for the comprehensive A2Z DSA Course on TakeUforward.

---

## 📣 Notes

* Recursion is a powerful tool but can lead to stack overflow for large strings.
* Consider normalizing the string (removing spaces, punctuation) for a more robust solution.
* Understanding recursion is crucial for solving complex problems like string manipulations and tree traversals.
