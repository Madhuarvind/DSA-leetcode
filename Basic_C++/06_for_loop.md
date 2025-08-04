# 🔁 07. Understanding For Loop 
---

## 🚀 What is a For Loop?

A **for loop** is a control structure that allows repeated execution of a block of code. It’s ideal for situations where the number of iterations is **known in advance**.

### 🔹 Components of a For Loop:

1. **Initialization** – set up a counter (e.g. `int i = 0`)
2. **Condition** – loop continues as long as this is true (`i <= 10`)
3. **Increment/Decrement** – update counter (`i++`)

---

## 💻 Example: Basic For Loop

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Hey, Striver, this is the " << i << "'th iteration" << endl;
    }
    return 0;
}
```

### ✅ Output:

```
Hey, Striver, this is the 1'th iteration
Hey, Striver, this is the 2'th iteration
...
Hey, Striver, this is the 10'th iteration
```

- Loop starts from `i = 1`
- Ends when `i > 10`
- `i++` increases `i` by 1 each time

---

## 🔄 For Loop Execution Flow

1. **Start** → Enters loop
2. **Initialize** → Set counter `i = 0`
3. **Condition Check** → Is `i < N`?
4. ✅ **True** → Run loop body → Increment `i`
5. 🔁 Go back to condition
6. ❌ **False** → Exit loop → Run code after loop

---

## 🔁 Nested For Loops

Used when you need to loop inside another loop (e.g. 2D arrays, patterns).

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    return 0;
}
```

### ✅ Output:

```
i = 0, j = 0
i = 0, j = 1
i = 0, j = 2
i = 1, j = 0
...
i = 2, j = 2
```

---

## ⚡ Conditional Statements in For Loops

You can include `if`, `else if`, or `else` inside a loop to handle custom logic.

```cpp
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
        // Even number logic
    } else {
        // Odd number logic
    }
}
```

---

## 🛠 Customizing For Loop

You can change step sizes, start points, and end conditions.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 25; i += 5) {
        cout << "i = " << i << endl;
    }
    return 0;
}
```

### ✅ Output:

```
i = 1
i = 6
i = 11
i = 16
i = 21
```

- Starts at 1
- Increments by 5
- Ends when `i > 25`

---

## 🧠 Summary

| Feature               | Description                                    |
|----------------------|------------------------------------------------|
| `Initialization`      | Sets up loop control variable                 |
| `Condition`           | Loop continues while true                     |
| `Increment/Decrement` | Updates variable each iteration               |
| `Nested Loops`        | Loop inside loop for 2D structures            |
| `Conditionals Inside` | Add decision-making with `if-else` logic      |
| `Custom Steps`        | Use `i += X`, `i -= X`, or different ranges   |

---

