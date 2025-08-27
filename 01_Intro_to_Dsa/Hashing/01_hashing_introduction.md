# ✅ Hashing: Introduction, Maps, Time Complexity & Collisions

**Topic:** Understanding Hashing, Hash Maps, Time Complexity, and Collision Handling

---

## 📌 What is Hashing?

Hashing is a technique that maps data of arbitrary size to fixed-size values. The values returned by a hash function are called hash values, hash codes, or simply hashes.

---

## 🎯 Key Concepts

### 1. Hash Function
A function that converts an input (or 'key') into a fixed-size value (hash value).

**Properties of a good hash function:**
- Deterministic: Same input → Same output
- Uniform distribution: Keys should be evenly distributed
- Efficient computation: Should be fast to compute
- Minimal collisions: Should minimize hash collisions

### 2. Hash Table
A data structure that implements an associative array abstract data type, a structure that can map keys to values.

### 3. Time Complexity
| Operation | Average Case | Worst Case |
|-----------|-------------|------------|
| Insert    | O(1)        | O(n)       |
| Search    | O(1)        | O(n)       |
| Delete    | O(1)        | O(n)       |

---

## 🧪 Common Hash Functions

### Division Method
```cpp
int hash(int key, int table_size) {
    return key % table_size;
}
```

### Multiplication Method
```cpp
int hash(int key, int table_size) {
    double A = 0.6180339887; // Golden ratio
    return floor(table_size * fmod(key * A, 1));
}
```

---

## 💡 Collision Handling Techniques

### 1. Separate Chaining
Each bucket contains a linked list of entries.

**Implementation:**
```cpp
#include <list>
#include <vector>
using namespace std;

class HashTable {
private:
    vector<list<pair<int, int>>> table;
    int size;
    
    int hash(int key) {
        return key % size;
    }

public:
    HashTable(int s) : size(s) {
        table.resize(size);
    }

    void insert(int key, int value) {
        int index = hash(key);
        table[index].push_back({key, value});
    }

    int search(int key) {
        int index = hash(key);
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        return -1; // Not found
    }
};
```

### 2. Open Addressing
All elements are stored in the hash table itself.

**Types:**
- Linear Probing: `h(k, i) = (h'(k) + i) % m`
- Quadratic Probing: `h(k, i) = (h'(k) + c1*i + c2*i²) % m`
- Double Hashing: `h(k, i) = (h1(k) + i*h2(k)) % m`

**Linear Probing Implementation:**
```cpp
class HashTable {
private:
    vector<pair<int, int>> table;
    int size;
    int EMPTY = -1;
    
    int hash(int key) {
        return key % size;
    }

public:
    HashTable(int s) : size(s) {
        table.resize(size, {EMPTY, EMPTY});
    }

    void insert(int key, int value) {
        int index = hash(key);
        while (table[index].first != EMPTY && table[index].first != key) {
            index = (index + 1) % size;
        }
        table[index] = {key, value};
    }

    int search(int key) {
        int index = hash(key);
        while (table[index].first != EMPTY) {
            if (table[index].first == key) {
                return table[index].second;
            }
            index = (index + 1) % size;
        }
        return -1; // Not found
    }
};
```

---

## 🧷 Implementations

### C++ STL Hash Containers

```cpp
#include <unordered_map>
#include <unordered_set>
#include <iostream>
using namespace std;

void demoSTL() {
    // Unordered Map
    unordered_map<string, int> umap;
    umap["apple"] = 5;
    umap["banana"] = 3;
    
    // Unordered Set
    unordered_set<int> uset;
    uset.insert(10);
    uset.insert(20);
    
    cout << "Apple count: " << umap["apple"] << endl;
    cout << "Contains 10: " << (uset.find(10) != uset.end()) << endl;
}
```

### Java Hash Collections

```java
import java.util.*;

public class HashingDemo {
    public static void main(String[] args) {
        // HashMap
        HashMap<String, Integer> map = new HashMap<>();
        map.put("apple", 5);
        map.put("banana", 3);
        
        // HashSet
        HashSet<Integer> set = new HashSet<>();
        set.add(10);
        set.add(20);
        
        System.out.println("Apple count: " + map.get("apple"));
        System.out.println("Contains 10: " + set.contains(10));
    }
}
```

### Python Hash Structures

```python
def demo_hashing():
    # Dictionary
    hash_map = {}
    hash_map["apple"] = 5
    hash_map["banana"] = 3
    
    # Set
    hash_set = set()
    hash_set.add(10)
    hash_set.add(20)
    
    print("Apple count:", hash_map["apple"])
    print("Contains 10:", 10 in hash_set)
```

---

## 🧭 Best Practices

1. **Choose appropriate hash function** based on data distribution
2. **Handle collisions efficiently** using appropriate technique
3. **Monitor load factor** (α = n/m) and rehash when needed
4. **Use prime numbers** for table size to reduce collisions
5. **Consider data characteristics** when choosing collision resolution

---

## 🧾 Complexity Summary

| Technique         | Average Case | Worst Case | Space Complexity |
|-------------------|-------------|------------|------------------|
| Separate Chaining | O(1 + α)    | O(n)       | O(n + m)         |
| Linear Probing    | O(1/(1-α))  | O(n)       | O(m)             |
| Quadratic Probing | O(1/(1-α))  | O(n)       | O(m)             |
| Double Hashing    | O(1/(1-α))  | O(n)       | O(m)             |

---

## 🙌 Credits

Special thanks to **Striver** for the comprehensive A2Z DSA Course on TakeUforward.

---

## 📣 Notes

* Hashing is fundamental to many algorithms and data structures
* Understanding collision resolution is crucial for efficient implementations
* Modern languages provide built-in hash-based collections
* Load factor management is key to maintaining performance
