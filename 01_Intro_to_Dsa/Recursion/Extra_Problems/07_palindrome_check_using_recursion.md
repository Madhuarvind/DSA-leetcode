# ✅ Palindrome Check Using Recursion

**Problem Statement:** Check if a given string is a palindrome using recursion.

---

## 📌 What is a Palindrome?

A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization).

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

**Intuition:** A string is a palindrome if the first and last characters are the same, and the substring between them is also a palindrome.

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
using namespace std;

bool isPalindrome(const string& str, int start, int end) {
    if (start >= end) return true; // Base case
    if (str[start] != str[end]) return false; // Check first and last characters
    return isPalindrome(str, start + 1, end - 1); // Recursive call
}

int main() {
    string str = "madam";
    cout << (isPalindrome(str, 0, str.size() - 1) ? "True" : "False") << endl;
    return 0;
}
```

**Output:**
```
True
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the length of the string.
- Space Complexity: `O(N)` due to the call stack.

---

## 🧷 Implementations

### Java

<details>
<summary>Palindrome Check Using Recursion</summary>

```java
public class Main {
    static boolean isPalindrome(String str, int start, int end) {
        if (start >= end) return true; // Base case
        if (str.charAt(start) != str.charAt(end)) return false; // Check first and last characters
        return isPalindrome(str, start + 1, end - 1); // Recursive call
    }

    public static void main(String[] args) {
        String str = "madam";
        System.out.println(isPalindrome(str, 0, str.length() - 1));
    }
}
```

</details>

### Python

<details>
<summary>Palindrome Check Using Recursion</summary>

```python
def is_palindrome(s, start, end):
    if start >= end:
        return True  # Base case
    if s[start] != s[end]:
        return False  # Check first and last characters
    return is_palindrome(s, start + 1, end - 1)  # Recursive call

s = "madam"
print(is_palindrome(s, 0, len(s) - 1))
```

</details>

### JavaScript

<details>
<summary>Palindrome Check Using Recursion</summary>

```javascript
function isPalindrome(s, start, end) {
    if (start >= end) return true; // Base case
    if (s[start] !== s[end]) return false; // Check first and last characters
    return isPalindrome(s, start + 1, end - 1); // Recursive call
}

let str = "madam";
console.log(isPalindrome(str, 0, str.length - 1));
```

</details>

---

## 🧭 Edge Cases to Consider

* Empty string (should return true)
* Single character string (should return true)

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

* Recursion is a powerful tool but can lead to stack overflow if not handled properly.
* Understanding recursion is crucial for solving complex problems like tree traversals and dynamic programming.
