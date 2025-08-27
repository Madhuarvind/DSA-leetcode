# 🔄 06. Switch Case Statements – Striver’s A2Z DSA Course

---

## 🚀 Overview

In C++, the `switch` statement is used for selecting one of many blocks of code to be executed. It's an alternative to long `if-else-if` chains when comparing a single variable against multiple constant values.

> ✅ Use `if-else` when:
> - Complex conditions
> - Range-based conditions
> 
> ✅ Use `switch` when:
> - Comparing **a single variable** with **multiple constant values**

---

## 📊 Flowchart of Switch Case

![Switch Case Flowchart](/mnt/data/55cf4cf8-1469-49ce-8aef-0e36639c1894.png)

---

## 🧪 Example: Day of the Week

```cpp
#include <iostream>
using namespace std;

int main() {
    int day = 4;

    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid";
    }

    return 0;
}
```

🟢 **Output:** `Thursday`

---

## 🔑 Key Concepts

### ✅ 1. Constant Expression in `switch`

```cpp
const int x = 10, y = 5;
switch (x + y) {
    case 15:
        cout << "Result is 15.";
        break;
    case 20:
        cout << "Result is 20.";
        break;
}
```

✔ Output: `Result is 15.`

---

### ✅ 2. Works with Integer and Character Types

```cpp
char grade = 'B';

switch (grade) {
    case 'A':
        cout << "Excellent!";
        break;
    case 'B':
        cout << "Good!";
        break;
    default:
        cout << "Not specified.";
}
```

✔ Output: `Good!`

---

### ✅ 3. Role of `break`

- Prevents "fall-through"
- Without it, all following cases will execute until a `break` is found or switch ends

---

### ✅ 4. Optional `default` Case

Acts as a fallback when no `case` matches.

---

### 🚫 5. No Duplicate Case Values

```cpp
switch (day) {
    case 2:
        cout << "Tuesday.";
        break;
    case 2: // ❌ Not allowed
        cout << "Duplicate case.";
        break;
}
```

---

### ⚠️ 6. Nested Switch Statements (Avoid)

```cpp
int x = 2, y = 3;

switch (x) {
    case 1:
        cout << "x is 1.";
        switch (y) {
            case 1:
                cout << "y is 1.";
                break;
            default:
                cout << "y is not 1.";
        }
        break;
    default:
        cout << "x is not 1.";
}
```

✔ Output: `x is not 1.`

> 🔁 Nesting is legal, but should be avoided for clarity and maintainability.

---

## 📝 Summary

| Feature                 | Supported in `switch`? |
|------------------------|-------------------------|
| Integer types           | ✅ Yes                 |
| Character types         | ✅ Yes                 |
| String or float types   | ❌ No                  |
| Constants in case label | ✅ Yes                 |
| Duplicate cases         | ❌ No                  |
| Default case            | ✅ Optional            |
| Nested switch           | ⚠️ Yes, but not recommended |

---

🙌 Special thanks to **Gauri Tomar** for contributing to this article on [TakeUForward](https://takeuforward.org/).

---
