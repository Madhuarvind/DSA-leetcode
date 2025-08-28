# ✅ Power Using Recursion

**Problem Statement:** Calculate the power of a number N raised to the exponent P using recursion.

---

## 📌 What is Power?

The power of a number is the result of multiplying that number by itself a certain number of times. It is denoted as \( N^P \).

### Formula:
- \( N^P = N \times N \times ... \) (P times)

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 2, P = 3`  
**Output:**  
`8` (2^3 = 2 × 2 × 2)

### Example 2:
**Input:**  
`N = 5, P = 0`  
**Output:**  
`1` (5^0 = 1)

---

## 💡 Approach

### Recursive Approach

**Intuition:** The power can be defined in terms of the power of (P - 1):
- \( N^P = N \times N^{(P - 1)} \)

#### Pseudocode
```
function power(N, P):
    if P == 0:
        return 1
    return N * power(N, P - 1)
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

int power(int N, int P) {
    if (P == 0) return 1; // Base case
    return N * power(N, P - 1); // Recursive call
}

int main() {
    int N = 2, P = 3;
    cout << "Power: " << power(N, P) << endl;
    return 0;
}
```

**Output:**
```
Power: 8
```

**Complexity Analysis:**
- Time Complexity: `O(P)` where P is the exponent.
- Space Complexity: `O(P)` due to the call stack.

---

## 🧷 Implementations

### Java

<details>
<summary>Power Using Recursion</summary>

```java
public class Main {
    static int power(int N, int P) {
        if (P == 0) return 1; // Base case
        return N * power(N, P - 1); // Recursive call
    }

    public static void main(String[] args) {
        int N = 2, P = 3;
        System.out.println("Power: " + power(N, P));
    }
}
```

</details>

### Python

<details>
<summary>Power Using Recursion</summary>

```python
def power(N, P):
    if P == 0:
        return 1  # Base case
    return N * power(N, P - 1)  # Recursive call

N = 2
P = 3
print("Power:", power(N, P))
```

</details>

### JavaScript

<details>
<summary>Power Using Recursion</summary>

```javascript
function power(N, P) {
    if (P === 0) return 1; // Base case
    return N * power(N, P - 1); // Recursive call
}

let N = 2;
let P = 3;
console.log("Power:", power(N, P));
```

</details>

---

## 🧭 Edge Cases to Consider

* `P = 0` (should return 1)
* Negative values of P (should handle gracefully)

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Recursive     | `O(P)`          | `O(P)`           |

---

## 🙌 Credits

Special thanks to **Striver** for the comprehensive A2Z DSA Course on TakeUforward.

---

## 📣 Notes

* Recursion is a powerful tool but can lead to stack overflow if not handled properly.
* Understanding recursion is crucial for solving complex problems like tree traversals and dynamic programming.
