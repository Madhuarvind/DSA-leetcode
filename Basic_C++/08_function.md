# ⚙️ 10. Functions in C++ – Pass by Value & Reference | Striver’s A2Z DSA Course

---

## ✅ What Are Functions?

A **function** is a block of code that performs a specific task.  
It improves code **reusability**, **modularity**, and **readability**.

```cpp
// Syntax:
returnType functionName(parameters) {
    // code
    return value;
}
```

---

## 📌 Function Categories

| Type          | Description                            |
|---------------|----------------------------------------|
| 🟢 User-defined | Created by the programmer               |
| 🟢 Library      | Provided by C++ standard library (e.g. pow(), sqrt()) |

---

## 1️⃣ Pass by Value

A copy of the argument is passed to the function.  
🔸 Changes don’t affect the original variable.

```cpp
#include <iostream>
using namespace std;

void update(int x) {
    x = x + 10;
    cout << "[Inside] x = " << x << endl;
}

int main() {
    int a = 5;
    update(a);
    cout << "[Outside] a = " << a << endl;
    return 0;
}
```

🖥️ Output:
```
[Inside] x = 15  
[Outside] a = 5
```

📌 No change to the original variable.

---

## 2️⃣ Pass by Reference

The actual memory address is passed.  
🔸 Changes **do** affect the original variable.

```cpp
#include <iostream>
using namespace std;

void update(int &x) {
    x = x + 10;
    cout << "[Inside] x = " << x << endl;
}

int main() {
    int a = 5;
    update(a);
    cout << "[Outside] a = " << a << endl;
    return 0;
}
```

🖥️ Output:
```
[Inside] x = 15  
[Outside] a = 15
```

📌 Reference (`&`) modifies the original variable.

---

## 🧪 Example: Swap Two Numbers

### ✅ Using Pass by Value (Fails)

```cpp
#include <iostream>
using namespace std;

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swap(x, y);
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
```

🖥️ Output:
```
x = 10, y = 20
```

🚫 No actual swap happens in `main()`.

---

### ✅ Using Pass by Reference (Works)

```cpp
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swap(x, y);
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
```

🖥️ Output:
```
x = 20, y = 10
```

✅ Swaps values directly in `main()`.

---

## 🧠 Summary Table

| Method             | Description                     | Can Modify Original? |
|--------------------|----------------------------------|-----------------------|
| Pass by Value      | Passes a copy of the value       | ❌ No                 |
| Pass by Reference  | Passes a reference (address)     | ✅ Yes                |

---

🙌 Special thanks to **Gauri Tomar** for contributing this content to TakeUForward.
