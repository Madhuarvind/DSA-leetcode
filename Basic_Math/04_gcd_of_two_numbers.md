# ✅ GCD of Two Numbers

**Problem Statement:** Given two integers A and B, find their greatest common divisor (GCD).

---

## 📌 Problem Statement

Write a function to compute the GCD of two given integers A and B.

---

## 🧪 Examples

### Example 1:
**Input:**  
`A = 48, B = 18`  
**Output:**  
`6`

### Example 2:
**Input:**  
`A = 56, B = 98`  
**Output:**  
`14`

---

## 💡 Approach

### 1) Euclidean Algorithm

**Intuition:** The GCD of two numbers can be found using the formula:
- GCD(A, B) = GCD(B, A % B)

#### Pseudocode
```
while B != 0:
    A, B = B, A % B
return A
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 48, b = 18;
    cout << "GCD: " << gcd(a, b) << endl;
    return 0;
}
```

**Output:**
```
GCD: 6
```

**Complexity Analysis:**
- Time Complexity: `O(log(min(A, B)))`
- Space Complexity: `O(1)` (no extra space used)

---

## 🧷 Implementations

### Java

<details>
<summary>GCD of Two Numbers</summary>

```java
public class Main {
    static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public static void main(String[] args) {
        int a = 48, b = 18;
        System.out.println("GCD: " + gcd(a, b));
    }
}
```

</details>

### Python

<details>
<summary>GCD of Two Numbers</summary>

```python
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

a = 48
b = 18
print("GCD:", gcd(a, b))
```

</details>

### JavaScript

<details>
<summary>GCD of Two Numbers</summary>

```javascript
function gcd(a, b) {
    while (b !== 0) {
        let temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

let a = 48;
let b = 18;
console.log("GCD:", gcd(a, b));
```

</details>

---

## 🧭 Edge Cases to Consider

* If either number is 0, the GCD is the other number.
* Negative numbers (GCD is always positive).

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Euclidean     | `O(log(min(A, B)))` | `O(1)`           |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* This problem is a common exercise for beginners to understand number theory.
* Variations can include finding the LCM (Least Common Multiple) using GCD.
