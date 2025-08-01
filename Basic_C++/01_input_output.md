# 🧾 01. C++ Basic Input/Output

When you embark on your C++ programming journey, it's perfectly okay not to dive too deep into the intricacies of the language right from the start. It's advisable to initially focus on grasping the big picture and building a strong foundation. In this guide, we'll walk you through:

- The basic skeleton of a C++ program  
- Input/output operations  
- Use of namespaces  
- Taking user input

---

## 📚 Including Libraries

C++ uses libraries to access various functionalities.

- `#include<iostream>` — for input/output operations.  
- `#include<math.h>` — to use mathematical functions.  
- `#include<bits/stdc++.h>` — includes almost all standard libraries (used often in contests).

Example:

```cpp
#include<iostream>
```

---

## 🏗️ The Generic Skeleton of a C++ Program

A basic C++ program contains:

```cpp
#include<iostream>

int main() {
    // Your code here
    return 0;
}
```

---

## 🖨️ Output with `cout`

To display output:

```cpp
#include<iostream>

int main() {
    std::cout << "Hey, Striver!";
    return 0;
}
```

🖥️ Output:
```
Hey, Striver!
```

---

### ❌ Common Mistake Without New Line

```cpp
#include<iostream>

int main() {
    std::cout << "Hey, Striver!";
    std::cout << "Hey, Striver!";
    return 0;
}
```

🖥️ Output:
```
Hey, Striver!Hey, Striver!
```

---

## 🔁 Line Breaks with `\n` and `std::endl`

### ✔️ Using `\n`:

```cpp
#include<iostream>

int main() {
    std::cout << "Hey, Striver!\n";
    std::cout << "Hey, Striver!";
    return 0;
}
```

### ✔️ Using `std::endl`:

```cpp
#include<iostream>

int main() {
    std::cout << "Hey, Striver!" << std::endl;
    std::cout << "Hey, Striver!";
    return 0;
}
```

📌 `\n` is faster than `std::endl` as it doesn’t flush the output buffer.

---

## ⚙️ `using namespace std;`

Instead of writing `std::cout`, we can simplify:

```cpp
#include<iostream>
using namespace std;

int main() {
    cout << "Hey, Striver!" << endl;
    cout << "Hey, Striver!";
    return 0;
}
```

✅ Cleaner code, but avoid in large projects to prevent naming conflicts.

---

## ⌨️ Taking User Input with `cin`

```cpp
#include<iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << "Value of x: " << x;
    return 0;
}
```

🖥️ Input:
```
10
```

🖥️ Output:
```
Value of x: 10
```

---

## 🧮 Multiple Inputs

```cpp
#include<iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Value of x: " << x << " and y: " << y;
    return 0;
}
```

🖥️ Input:
```
10 20
```

🖥️ Output:
```
Value of x: 10 and y: 20
```

---

## 📦 Bonus: Use of `#include<bits/stdc++.h>`

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Value of x: " << x << " and y: " << y;
    return 0;
}
```

✅ Includes most standard libraries.  
⚠️ Not part of the official standard, so not ideal for production code.

---

> ✨ Special thanks to Gauri Tomar for contributing to this article on takeUforward.

---

📌 _Want to learn DSA from scratch?_  
Check out the [Striver A2Z DSA Course](https://takeuforward.org/dsa/strivers-a2z-dsa-course-sheet-2/) with videos and blogs.
