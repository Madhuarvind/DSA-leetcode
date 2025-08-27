# ✅ Check if a Number is an Armstrong Number

**Problem Statement:** Given an integer N, check if it is an Armstrong number.

---

## 📌 Problem Statement

Write a function to determine if a given integer N is an Armstrong number.

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 153`  
**Output:**  
`True`

### Example 2:
**Input:**  
`N = 123`  
**Output:**  
`False`

### Example 3:
**Input:**  
`N = 370`  
**Output:**  
`True`

---

## 💡 Approach

### 1) Iterative Approach

**Intuition:** An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

#### Pseudocode
```
count = number of digits in N
sum = 0
temp = N
while temp != 0:
    digit = temp % 10
    sum += digit^count
    temp //= 10
return sum == N
```

#### Code (C++)
```cpp
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0, count = 0;

    // Count the number of digits
    while (original != 0) {
        original /= 10;
        count++;
    }

    original = n; // Reset original number

    // Calculate the sum of digits raised to the power of count
    while (original != 0) {
        int digit = original % 10;
        sum += pow(digit, count);
        original /= 10;
    }

    return sum == n;
}

int main() {
    int n = 153;
    cout << (isArmstrong(n) ? "True" : "False") << endl;
    return 0;
}
```

**Output:**
```
True
```

**Complexity Analysis:**
- Time Complexity: `O(d)` where d is the number of digits in N.
- Space Complexity: `O(1)` (no extra space used)

---

## 🧷 Implementations

### Java

<details>
<summary>Armstrong Number</summary>

```java
public class Main {
    static boolean isArmstrong(int n) {
        int original = n, sum = 0, count = 0;

        // Count the number of digits
        while (original != 0) {
            original /= 10;
            count++;
        }

        original = n; // Reset original number

        // Calculate the sum of digits raised to the power of count
        while (original != 0) {
            int digit = original % 10;
            sum += Math.pow(digit, count);
            original /= 10;
        }

        return sum == n;
    }

    public static void main(String[] args) {
        int n = 153;
        System.out.println(isArmstrong(n));
    }
}
```

</details>

### Python

<details>
<summary>Armstrong Number</summary>

```python
def is_armstrong(n):
    original = n
    count = len(str(n))  # Count the number of digits
    sum = 0

    while original != 0:
        digit = original % 10
        sum += digit ** count
        original //= 10

    return sum == n

n = 153
print(is_armstrong(n))
```

</details>

### JavaScript

<details>
<summary>Armstrong Number</summary>

```javascript
function isArmstrong(n) {
    let original = n;
    const count = String(n).length; // Count the number of digits
    let sum = 0;

    while (original !== 0) {
        let digit = original % 10;
        sum += Math.pow(digit, count);
        original = Math.floor(original / 10);
    }

    return sum === n;
}

let n = 153;
console.log(isArmstrong(n));
```

</details>

---

## 🧭 Edge Cases to Consider

* Single-digit numbers (should return true)
* Negative numbers (should return false)

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Iterative     | `O(d)`         | `O(1)`           |

---

## 🙌 Credits

Special thanks to **Ayush Pandey** for contributing to this article on TakeUforward.

---

## 📣 Notes

* This problem is a common exercise for beginners to understand number manipulation.
* Variations can include checking for Armstrong numbers in different bases.
