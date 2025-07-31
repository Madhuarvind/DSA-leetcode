# 🚀 C++ Basics – Input / Output

📘 **Source**: [TakeUForward A2Z DSA Sheet](https://takeuforward.org/)  
✍️ **Topic**: Understanding Basic I/O in C++

---

## 📌 Introduction

When starting your C++ journey, it's best to focus on the fundamentals. This lesson covers:

- Including libraries
- The structure of a C++ program
- `cout` and `cin`
- Use of `\n` vs `std::endl`
- Importance of `using namespace std;`
- A shortcut to include all libraries

---

## 📚 1. Including Libraries

C++ programs start by including libraries for built-in functions.

```cpp
#include<iostream>     // for input/output
#include<math.h>       // for mathematical functions

For competitive programming:

cpp
Copy
Edit
#include<bits/stdc++.h> // includes all standard libraries
✅ Use this to save time in contests.
⚠️ Not standard in large-scale projects (compile time issue).