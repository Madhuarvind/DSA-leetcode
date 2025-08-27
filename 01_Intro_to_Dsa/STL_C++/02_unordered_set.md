# 🔑 Unordered Set in C++ STL

## 📌 What is an Unordered Set?

An **unordered\_set** in C++ STL is a container that stores **unique elements** in **no particular order**.

* Average case time complexity: **O(1)** for insertion, deletion, and search
* Worst case time complexity: **O(n)**

---

## ⚙️ Syntax

```cpp
unordered_set<object_type> variable_name;
```

### Example

```cpp
unordered_set<int> s;
unordered_set<string> str;
```

---

## 🛠️ Common Functions in `unordered_set`

### 🔹 Insert Elements

```cpp
unordered_set<int> s;
s.insert(1);
s.insert(2);
```

### 🔹 Begin & End

```cpp
s.begin();   // Iterator to first element
s.end();     // Iterator to element after the last
```

### 🔹 Count (check existence)

```cpp
s.count(2);   // returns 1 if present, else 0
```

### 🔹 Clear

```cpp
s.clear();   // Removes all elements
```

### 🔹 Find

```cpp
if(s.find(2) != s.end())
    cout << "Found";
```

### 🔹 Erase

```cpp
s.erase(2);                  // Remove specific element
s.erase(s.begin());          // Remove first element
```

### 🔹 Size & Empty

```cpp
s.size();   // Number of elements
s.empty();  // Check if set is empty
```

---

## 📝 Example Code

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> s;
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    cout << "Elements present in the unordered set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in unordered set" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "The size of the unordered set is: " << s.size() << endl;

    if (!s.empty())
        cout << "The unordered set is not empty" << endl;
    else
        cout << "The unordered set is empty" << endl;

    s.clear();
    cout << "Size of the unordered set after clearing all the elements: " << s.size();
}
```

### ✅ Output

```
Elements present in the unordered set: 10 9 8 7 2 1 3 4 5 6
2 is present in unordered set
Elements after deleting the first element: 9 8 7 2 1 3 4 5 6
The size of the unordered set is: 9
The unordered set is not empty
Size of the unordered set after clearing all the elements: 0
```

---

## 📚 Other Useful Functions

* **`cbegin()`** → Iterator to first element (const)
* **`cend()`** → Iterator after last element (const)
* **`bucket_size()`** → Number of elements in a specific bucket
* **`emplace()`** → Insert element in place
* **`max_size()`** → Maximum elements it can hold
* **`max_bucket_count()`** → Maximum number of buckets available

---

🚀 The `unordered_set` is widely used for **fast lookups, uniqueness checks, and frequency counting** in C++ programming.
