# ✅ Tower of Hanoi

**Problem Statement:** Solve the Tower of Hanoi problem using recursion.

---

## 📌 What is Tower of Hanoi?

The Tower of Hanoi is a classic problem in recursion. It consists of three rods and a number of disks of different sizes which can slide onto any rod. The puzzle starts with the disks stacked in ascending order of size on one rod, the smallest at the top.

### Rules:
1. Only one disk can be moved at a time.
2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or on an empty rod.
3. No larger disk may be placed on top of a smaller disk.

---

## 🧪 Examples

### Example 1:
**Input:**  
`N = 2`  
**Output:**  
```
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
```

### Example 2:
**Input:**  
`N = 3`  
**Output:**  
```
Move disk 1 from A to B
Move disk 2 from A to C
Move disk 1 from B to C
Move disk 3 from A to B
Move disk 1 from C to A
Move disk 2 from C to B
Move disk 1 from A to B
```

---

## 💡 Approach

### Recursive Approach

**Intuition:** To move N disks from source rod A to destination rod C using auxiliary rod B:
1. Move the top N-1 disks from A to B using C as auxiliary.
2. Move the Nth disk from A to C.
3. Move the N-1 disks from B to C using A as auxiliary.

#### Pseudocode
```
function towerOfHanoi(N, source, destination, auxiliary):
    if N == 1:
        print("Move disk 1 from", source, "to", destination)
        return
    towerOfHanoi(N - 1, source, auxiliary, destination)
    print("Move disk", N, "from", source, "to", destination)
    towerOfHanoi(N - 1, auxiliary, destination, source)
```

#### Code (C++)
```cpp
#include <iostream>
using namespace std;

void towerOfHanoi(int N, char source, char destination, char auxiliary) {
    if (N == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(N - 1, source, auxiliary, destination);
    cout << "Move disk " << N << " from " << source << " to " << destination << endl;
    towerOfHanoi(N - 1, auxiliary, destination, source);
}

int main() {
    int N = 3; // Number of disks
    towerOfHanoi(N, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}
```

**Output:**
```
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C
```

**Complexity Analysis:**
- Time Complexity: `O(2^N)` where N is the number of disks.
- Space Complexity: `O(N)` due to the call stack.

---

## 🧷 Implementations

### Java

<details>
<summary>Tower of Hanoi</summary>

```java
public class Main {
    static void towerOfHanoi(int N, char source, char destination, char auxiliary) {
        if (N == 1) {
            System.out.println("Move disk 1 from " + source + " to " + destination);
            return;
        }
        towerOfHanoi(N - 1, source, auxiliary, destination);
        System.out.println("Move disk " + N + " from " + source + " to " + destination);
        towerOfHanoi(N - 1, auxiliary, destination, source);
    }

    public static void main(String[] args) {
        int N = 3; // Number of disks
        towerOfHanoi(N, 'A', 'C', 'B'); // A, B and C are names of rods
    }
}
```

</details>

### Python

<details>
<summary>Tower of Hanoi</summary>

```python
def tower_of_hanoi(n, source, destination, auxiliary):
    if n == 1:
        print(f"Move disk 1 from {source} to {destination}")
        return
    tower_of_hanoi(n - 1, source, auxiliary, destination)
    print(f"Move disk {n} from {source} to {destination}")
    tower_of_hanoi(n - 1, auxiliary, destination, source)

n = 3  # Number of disks
tower_of_hanoi(n, 'A', 'C', 'B')  # A, B and C are names of rods
```

</details>

### JavaScript

<details>
<summary>Tower of Hanoi</summary>

```javascript
function towerOfHanoi(n, source, destination, auxiliary) {
    if (n === 1) {
        console.log(`Move disk 1 from ${source} to ${destination}`);
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    console.log(`Move disk ${n} from ${source} to ${destination}`);
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

let n = 3; // Number of disks
towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
```

</details>

---

## 🧭 Edge Cases to Consider

* `N = 0` (should not perform any moves)
* Negative values of N (should handle gracefully)

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Recursive     | `O(2^N)`       | `O(N)`           |

---

## 🙌 Credits

Special thanks to **Striver** for the comprehensive A2Z DSA Course on TakeUforward.

---

## 📣 Notes

* Recursion is a powerful tool but can lead to stack overflow if not handled properly.
* Understanding recursion is crucial for solving complex problems like tree traversals and dynamic programming.
