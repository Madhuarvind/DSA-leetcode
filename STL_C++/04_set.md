# Set in C++ STL

## What is a Set?

A **set** in C++ STL is a container that stores **unique elements** in a **particular order**. Duplicate values are not allowed. The underlying implementation is usually a balanced binary search tree (like Red-Black Tree).

* **Average Case Time Complexity**: O(log n) for most operations (insertion, deletion, search)
* **Worst Case Time Complexity**: O(n)

---

## Syntax

```cpp
set<object_type> variable_name;
```

### Example

```cpp
set<int> s;
set<string> str;
```

---

## Commonly Used Functions in Set

* `insert(x)` – Inserts an element `x` into the set.
* `begin()` – Returns an iterator pointing to the first element.
* `end()` – Returns an iterator to the position after the last element.
* `count(x)` – Returns `1` if element is present, otherwise `0`.
* `clear()` – Deletes all elements from the set.
* `find(x)` – Returns an iterator to element `x` if found, else `end()`.
* `erase(x)` – Deletes a specific element or a range.
* `size()` – Returns the size of the set.
* `empty()` – Checks if the set is empty.

---

## Example Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    cout << "Elements present in the set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    int n = 2;
    if (s.find(n) != s.end())
        cout << n << " is present in set" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "The size of the set is: " << s.size() << endl;

    if (!s.empty())
        cout << "The set is not empty" << endl;
    else
        cout << "The set is empty" << endl;

    s.clear();
    cout << "Size of the set after clearing all the elements: " << s.size();
}
```

---

## Output

```
Elements present in the set: 1 2 3 4 5 6 7 8 9 10
2 is present in set
Elements after deleting the first element: 2 3 4 5 6 7 8 9 10
The size of the set is: 9
The set is not empty
Size of the set after clearing all the elements: 0
```

---

## Other Useful Functions

* `cbegin()` – Refers to the first element.
* `cend()` – Refers to the theoretical element after the last element.
* `rbegin()` – Points to the last element of the set.
* `rend()` – Points before the first element.
* `emplace(x)` – Inserts element `x` (faster than insert).
* `max_size()` – Returns the maximum elements the set can hold.

---

✅ Sets are widely used when you need **unique sorted elements** with efficient insertion and search.
