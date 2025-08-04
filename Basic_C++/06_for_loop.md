# 🔁 07. Understanding For Loop – Striver’s A2Z DSA Course

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
