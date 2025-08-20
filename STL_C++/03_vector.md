# Vector in C++ STL

## 📌 What is a Vector?

Vectors in STL are dynamic arrays that can grow or shrink in size whenever elements are added or removed. They store elements in contiguous memory locations, making element access efficient.

## 📝 Syntax

```cpp
vector<object_type> variable_name;
```

### Example

```cpp
vector<int> v1;
vector<char> v2;
vector<string> v3;
```

---

## ⚡ Commonly Used Functions

### 1. **begin()**

Returns an iterator pointing to the first element.

```cpp
auto it = v1.begin();
```

### 2. **end()**

Returns an iterator pointing to the position after the last element.

```cpp
auto it = v1.end();
```

### 3. **push\_back()**

Inserts an element at the end.

```cpp
v1.push_back(1);
v1.push_back(2);
```

### 4. **insert()**

Inserts an element at a given position.

```cpp
auto it = v1.begin();
v1.insert(it, 5); // insert 5 at beginning
```

### 5. **erase()**

Removes a specific element or range.

```cpp
auto it = v1.begin();
v1.erase(it); // remove first element
```

### 6. **pop\_back()**

Deletes the last element.

```cpp
v1.pop_back();
```

### 7. **front()**

Returns reference to the first element.

```cpp
v1.front();
```

### 8. **back()**

Returns reference to the last element.

```cpp
v1.back();
```

### 9. **clear()**

Deletes all elements.

```cpp
v1.clear();
```

### 10. **empty()**

Checks if vector is empty.

```cpp
v1.empty();
```

### 11. **size()**

Returns current number of elements.

```cpp
v1.size();
```

---

## 💻 Example Code

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v;

  for (int i = 0; i < 10; i++) {
    v.push_back(i); // inserting elements
  }

  cout << "The elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";

  cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();
  cout << "\nThe size of the vector: " << v.size();

  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  v.pop_back();

  cout << "\nPrinting vector after removing last element:\n";
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << "\nInserting 5 at the beginning:\n";
  v.insert(v.begin(), 5);
  cout << "The first element is: " << v[0] << endl;

  cout << "Erasing the first element" << endl;
  v.erase(v.begin());
  cout << "Now the first element is: " << v[0] << endl;

  if (v.empty())
    cout << "\nVector is empty";
  else
    cout << "\nVector is not empty" << endl;

  v.clear();
  cout << "Size of the vector after clearing: " << v.size();
}
```

---

## ✅ Output

```
The elements in the vector: 0 1 2 3 4 5 6 7 8 9
The front element of the vector: 0
The last element of the vector: 9
The size of the vector: 10
Deleting element from the end: 9
Printing vector after removing last element:
0 1 2 3 4 5 6 7 8
Inserting 5 at the beginning:
The first element is: 5
Erasing the first element
Now the first element is: 0
Vector is not empty
Size of the vector after clearing: 0
```

---

## 📚 Other Useful Functions

* **cbegin()** – constant iterator to first element
* **cend()** – constant iterator to past-the-last element
* **rbegin()** – reverse iterator to last element
* **rend()** – reverse iterator before first element
* **crbegin()** – constant reverse iterator to last element
* **crend()** – constant reverse iterator before first element
* **max\_size()** – maximum possible elements
* **capacity()** – current allocated capacity

---

✨ With vectors, you get **dynamic resizing**, **random access**, and efficient **element manipulation** making them one of the most used STL containers.
