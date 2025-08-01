# 🔁 03. If-Else Statements in C++

Conditional statements are a fundamental concept in programming that allow you to make decisions based on certain conditions. These statements enable your code to execute different blocks depending on whether specific conditions are **true** or **false**.

In this guide, we’ll cover:

- Basic `if-else`
- Using `else if` for multiple conditions
- Optimizing complex condition flows

---

## ✅ The `if-else` Statement

The `if` statement executes a block **only if** a specified condition is true.

The optional `else` block runs **if the condition is false**.

### 🔹 Syntax:

```cpp
if (condition) {
    // Executes if condition is true
} else {
    // Executes if condition is false
}
```

### 🔹 Example:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int age = 10;

    if (age >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are not an adult." << endl;
    }
}
```

🖥️ **Output:**
```
You are not an adult.
```

---

