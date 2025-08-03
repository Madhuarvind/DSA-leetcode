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

<<<<<<< HEAD
## 🔄 Simplifying Logic with `else if`

If you need to evaluate **multiple conditions**, use `else if` for cleaner and more readable code.

### 🎯 Problem: Grade a student based on marks

| Marks Range | Grade |
|-------------|--------|
| < 25        | F      |
| 25–44       | E      |
| 45–49       | D      |
| 50–59       | C      |
| 60–69       | B      |
| ≥ 70        | A      |

---

### 🔹 Full Code Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks = 54;

    if (marks < 25) {
        cout << "Grade: F" << endl;
    } else if (marks >= 25 && marks <= 44) {
        cout << "Grade: E" << endl;
    } else if (marks >= 45 && marks <= 49) {
        cout << "Grade: D" << endl;
    } else if (marks >= 50 && marks <= 59) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60 && marks <= 69) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: A" << endl;
    } else {
        cout << "Invalid marks entered." << endl;
    }

    return 0;
}
```

🖥️ **Output:**
```
Grade: C
```

---

## ♻️ Refactored for Better Readability

We can simplify comparisons by checking **only the upper bounds**, assuming previous conditions failed.

### 🔹 Refactored Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks = 54;
    char grade;

    if (marks < 25) {
        grade = 'F';
    } else if (marks <= 44) {
        grade = 'E';
    } else if (marks <= 49) {
        grade = 'D';
    } else if (marks <= 59) {
        grade = 'C';
    } else if (marks <= 69) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'A';
    } else {
        grade = 'X'; // X indicates invalid marks
    }

    cout << "Grade: " << grade << endl;

    return 0;
}
```

🖥️ **Output:**
```
Grade: C
```

---

## 🧠 Key Takeaways

- Use `if` when only one condition matters.
- Use `if-else` for binary decisions.
- Use `else if` chains when you have multiple possible outcomes.
- Avoid unnecessary conditions once logic ensures they’re not needed.
- Keep code readable and maintainable.

---

> ✨ Special thanks to Gauri Tomar for contributing to this article on takeUforward.

📚 _Explore more on:_ [Striver’s A2Z DSA Course](https://takeuforward.org/dsa/strivers-a2z-dsa-course-sheet-2/)
=======
