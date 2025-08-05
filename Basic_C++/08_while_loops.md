# 🔄 08. While Loops in Programming – Striver’s A2Z DSA Course

---

## 📘 What is a While Loop?

A **while loop** allows code to be executed repeatedly based on a condition. As long as the condition is true, the loop body will execute.

---

## 🔁 Working of a While Loop

1. **Test Expression Evaluation** – Check if the condition is true.
2. **Execute Block** – If true, run the loop body.
3. **Re-evaluation** – Check the condition again.
4. **Termination** – When condition becomes false, exit the loop.

---

## 🔤 Syntax

```cpp
while (condition) {
    // body of the loop
}
```

If the **initial condition is false**, the loop will **not execute** at all.

---

## 🧪 Example: Factorial Using While Loop

Calculate the factorial of a number `n` using a while loop.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int factorial = 1;

    while (n > 0) {
        factorial *= n;
        n--;
    }

    cout << "Factorial of 5 is: " << factorial << endl;
    return 0;
}
```

### ✅ Output:

```
Factorial of 5 is: 120
```

---

## 🔐 Termination Conditions

Clearly defining when the loop ends is **critical** to avoid **infinite loops**.

**Bad termination** can:
- Cause program crashes
- Consume excessive memory or CPU

✅ Always make sure the condition will eventually become **false**.

---

## ⚙️ Optimizing While Loops

Improve efficiency by reducing unnecessary iterations.

### 🔹 `break`

Used to **exit** the loop early, even if the condition is still true.

### 🔹 `continue`

Skips the **current iteration** and jumps to the next one.

---

## 💻 Example: `break` and `continue` in Action

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;

    // break example
    for (int num : numbers) {
        if (num == target) {
            cout << "Target found: " << target << endl;
            break;
        }
        cout << "Checking: " << num << endl;
    }

    // continue example
    for (int num : numbers) {
        if (num % 2 == 0) {
            continue;
        }
        cout << "Odd number: " << num << endl;
    }

    return 0;
}
```

### ✅ Output:

```
Checking: 1
Checking: 2
Checking: 3
Checking: 4
Checking: 5
Target found: 6
Odd number: 1
Odd number: 3
Odd number: 5
Odd number: 7
Odd number: 9
```

---

## 🧠 Summary

| Concept               | Description                                      |
|----------------------|--------------------------------------------------|
| While Loop            | Executes while condition is true                 |
| Infinite Loop Risk    | Caused by poorly defined exit conditions         |
| `break`               | Exit the loop immediately                        |
| `continue`            | Skip current iteration and continue with next    |
| Best Use Case         | When iteration count isn't known beforehand      |

---

🙌 Special thanks to **Gauri Tomar** for contributing to this article on [TakeUForward](https://takeuforward.org/)

---