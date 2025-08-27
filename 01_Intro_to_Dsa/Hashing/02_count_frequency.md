# ✅ Count Frequency of Each Element in an Array

**Problem Statement:** Given an array of integers, count the frequency of each element.

---

## 📌 Problem Statement

Write a function to count the frequency of each element in a given array.

---

## 🧪 Examples

### Example 1:
**Input:**  
`arr = [1, 2, 2, 3, 3, 3]`  
**Output:**  
`1: 1, 2: 2, 3: 3`

### Example 2:
**Input:**  
`arr = [4, 5, 6, 4, 5, 4]`  
**Output:**  
`4: 3, 5: 2, 6: 1`

---

## 💡 Approach

### 1) Using Hash Map

**Intuition:** Use a hash map (or dictionary) to store the frequency of each element.

#### Pseudocode
```
frequency_map = {}
for each element in arr:
    frequency_map[element] += 1
return frequency_map
```

#### Code (C++)
```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void countFrequency(const vector<int>& arr) {
    unordered_map<int, int> frequency_map;
    for (int num : arr) {
        frequency_map[num]++;
    }
    
    for (const auto& pair : frequency_map) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    countFrequency(arr);
    return 0;
}
```

**Output:**
```
1: 1
2: 2
3: 3
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the number of elements in the array.
- Space Complexity: `O(K)` where K is the number of unique elements.

---

## 🧷 Implementations

### Java

<details>
<summary>Count Frequency</summary>

```java
import java.util.HashMap;

public class Main {
    static void countFrequency(int[] arr) {
        HashMap<Integer, Integer> frequencyMap = new HashMap<>();
        for (int num : arr) {
            frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
        }
        
        for (var entry : frequencyMap.entrySet()) {
            System.out.println(entry.getKey() + ": " + entry.getValue());
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 2, 3, 3, 3};
        countFrequency(arr);
    }
}
```

</details>

### Python

<details>
<summary>Count Frequency</summary>

```python
def count_frequency(arr):
    frequency_map = {}
    for num in arr:
        frequency_map[num] = frequency_map.get(num, 0) + 1
    
    for key, value in frequency_map.items():
        print(f"{key}: {value}")

arr = [1, 2, 2, 3, 3, 3]
count_frequency(arr)
```

</details>

### JavaScript

<details>
<summary>Count Frequency</summary>

```javascript
function countFrequency(arr) {
    const frequencyMap = {};
    arr.forEach(num => {
        frequencyMap[num] = (frequencyMap[num] || 0) + 1;
    });
    
    for (const [key, value] of Object.entries(frequencyMap)) {
        console.log(`${key}: ${value}`);
    }
}

const arr = [1, 2, 2, 3, 3, 3];
countFrequency(arr);
```

</details>

---

## 🧭 Edge Cases to Consider

* Empty array (should return nothing)
* All elements are the same (should return one entry with the count)

---

## 🧾 Complexity Summary

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Hash Map      | `O(N)`          | `O(K)`           |

---

## 🙌 Credits

Special thanks to **Striver** for the comprehensive A2Z DSA Course on TakeUforward.

---

## 📣 Notes

* This problem is a common exercise for beginners to understand hash maps.
* Variations can include counting frequencies of characters in a string.
