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

## 2. 🔢 Integer Data Type (`int`)

Used to store whole numbers. Size: **4 bytes** (on 64-bit systems).  
Range: **-2,147,483,648 to 2,147,483,647**

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 25;
    cout << x << endl;

    // Hexadecimal representation
    x = 0x15;
    cout << x;
    return 0;
}
```

🖥️ Output:
```
25
21
```

---

## 3. ✅ Boolean Data Type (`bool`)

Stores logical values: `true (1)` or `false (0)`. Size: **1 byte**

```cpp
#include <iostream>
using namespace std;

int main() {
    bool isTrue = true;
    cout << isTrue;
    return 0;
}
```

🖥️ Output:
```
1
```

---

## 4. 🔣 Floating Point Data Type (`float`)

Stores decimal numbers. Size: **4 bytes**  
Range: **1.2e-38 to 3.4e+38**

```cpp
#include <iostream>
using namespace std;

int main() {
    float f = 36.5;
    cout << f;
    return 0;
}
```

🖥️ Output:
```
36.5
```

---

## 5. 🔬 Double Data Type (`double`)

Double-precision float. Size: **8 bytes**  
Range: **1.7e-308 to 1.7e+308**

```cpp
#include <iostream>
using namespace std;

int main() {
    double pi = 3.1415926535;
    cout << pi;
    return 0;
}
```

🖥️ Output:
```
3.14159
```

---

## 6. ❌ Void Data Type (`void`)

Represents absence of value. Cannot be used to declare variables.

- Used in functions that **don’t return anything**
- Used for **void pointers**

---

## 🔐 Type Safety in C++

C++ is a **strongly typed** language. Variables must be declared with a data type and only compatible values can be assigned.

```cpp
#include <iostream>
using namespace std;

int main() {
    bool a = 10.248f;  // float assigned to bool
    cout << a;
    return 0;
}
```

🖥️ Output:
```
1
```

📝 The float is converted to 1 (true), but data is lost. Strong typing prevents unsafe operations.

---

## 🔄 Data Type Conversion

Converts one type to another. Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 3;
    char c = 'C';

    cout << (int)c << endl;  // ASCII of 'C'
    int sum = n + c;
    cout << sum;
    return 0;
}
```

🖥️ Output:
```
67
70
```

---
