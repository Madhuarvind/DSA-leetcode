# ✅ Reverse a String Using Recursion

**Problem Statement:** Reverse a given string using recursion.

---

## 📌 What is String Reversal?

String reversal is the process of reversing the order of characters in a string. For example, the reverse of "hello" is "olleh".

---

## 🧪 Examples

### Example 1:
**Input:**  
`str = "hello"`  
**Output:**  
`"olleh"`

### Example 2:
**Input:**  
`str = "Recursion"`  
**Output:**  
`"noisruceR"`

---

## 💡 Approach

### Recursive Approach

**Intuition:** The reverse of a string can be defined in terms of the reverse of the substring excluding the first character:
- Reverse(str) = str[n-1] + Reverse(str[0:n-1])

#### Pseudocode
```
function reverseString(str):
    if str is empty:
        return ""
    return str[-1] + reverseString(str[:-1])
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

string reverseString(const string& str) {
    if (str.empty()) return ""; // Base case
    return str.back() + reverseString(str.substr(0, str.size() - 1)); // Recursive call
}

int main() {
    string str = "hello";
    cout << "Reversed String: " << reverseString(str) << endl;
    return 0;
}
```

**Output:**
```
Reversed String: olleh
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the length of the string.
- Space Complexity: `O(N)` due to the call stack.

---

## 🧷 Implementations

### Java

<details>
<summary>Reverse String Using Recursion</summary>

```java
public class Main {
    static String reverseString(String str) {
        if (str.isEmpty()) return ""; // Base case
        return str.charAt(str.length() - 1) + reverseString(str.substring(0, str.length() - 1)); // Recursive call
    }

    public static void main(String[] args) {
        String str = "hello";
        System.out.println("Reversed String: " + reverseString(str));
    }
}
```

</details>

### Python

<details>
<summary>Reverse String Using Recursion</summary>

```python
def reverse_string(s):
    if s == "":
        return ""  # Base case
    return s[-1] + reverse_string(s[:-1])  # Recursive call

s = "hello"
print("Reversed String:", reverse_string(s))
```

</details>

### JavaScript

<details>
<summary>Reverse String Using Recursion</summary>

```javascript
function reverseString(s) {
    if (s === "") return ""; // Base case
    return s[s.length - 1] + reverseString(s.slice(0, -1)); // Recursive call
}

let str = "hello";
console.log("Reversed String:", reverseString(str));
```

</details>

---

## 🧭 Edge Cases to Consider

* Empty string (should return an empty string)
* Single character string (should return the same character)

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
