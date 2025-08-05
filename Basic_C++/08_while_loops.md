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
