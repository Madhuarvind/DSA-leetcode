# 📚 02. C++ Data Types

**Last Updated:** 23 Jul, 2025

Data types specify the type of data that a variable can store. Whenever a variable is defined in C++, the compiler allocates memory for that variable based on the data type declared. Each data type requires a different amount of memory.

C++ supports a wide variety of data types, allowing the programmer to choose the one best suited to the application.

---

## ✨ Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Creating a variable to store integer
    int var = 10;
    cout << var;
    return 0;
}
```

🖥️ Output:
```
10
```

📝 **Explanation**: The keyword `int` specifies that the variable `var` will store an integer.

---

## 📊 Classification of Data Types

In C++, data types are classified into:

- **Primitive Data Types**: `int`, `char`, `float`, `double`, `bool`, `void`
- **Derived Data Types**: arrays, pointers, references
- **User-defined Data Types**: structs, unions, enums, classes

We’ll focus here on **primitive types**.

---

## 1. 🔠 Character Data Type (`char`)

Used to store a single character. Size: **1 byte**.

```cpp
#include <iostream>
using namespace std;

int main() {
    char c = 'A';
    cout << c;
    return 0;
}
```

🖥️ Output:
```
A
```

---
