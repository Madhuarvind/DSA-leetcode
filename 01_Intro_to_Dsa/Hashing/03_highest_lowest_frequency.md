# ✅ Find the Highest and Lowest Frequency Element in an Array

**Problem Statement:** Given an array of integers, find the element with the highest and lowest frequency.

---

## 📌 Problem Statement

Write a function to determine the element with the highest frequency and the element with the lowest frequency in a given array.

---

## 🧪 Examples

### Example 1:
**Input:**  
`arr = [1, 2, 2, 3, 3, 3]`  
**Output:**  
`Highest Frequency: 3 (3 times), Lowest Frequency: 1 (1 time)`

### Example 2:
**Input:**  
`arr = [4, 5, 6, 4, 5, 4]`  
**Output:**  
`Highest Frequency: 4 (3 times), Lowest Frequency: 6 (1 time)`

---

## 💡 Approach

### 1) Using Hash Map

**Intuition:** Use a hash map (or dictionary) to store the frequency of each element, then iterate through the map to find the highest and lowest frequencies.

#### Pseudocode
```
frequency_map = {}
for each element in arr:
    frequency_map[element] += 1

highest_freq = max(frequency_map.values())
lowest_freq = min(frequency_map.values())

return highest_freq, lowest_freq
```

#### Code (C++)
```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findFrequency(const vector<int>& arr) {
    unordered_map<int, int> frequency_map;
    for (int num : arr) {
        frequency_map[num]++;
    }

    int highest_freq = 0, lowest_freq = INT_MAX;
    int highest_elem, lowest_elem;

    for (const auto& pair : frequency_map) {
        if (pair.second > highest_freq) {
            highest_freq = pair.second;
            highest_elem = pair.first;
        }
        if (pair.second < lowest_freq) {
            lowest_freq = pair.second;
            lowest_elem = pair.first;
        }
    }

    cout << "Highest Frequency: " << highest_elem << " (" << highest_freq << " times)" << endl;
    cout << "Lowest Frequency: " << lowest_elem << " (" << lowest_freq << " time)" << endl;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    findFrequency(arr);
    return 0;
}
```

**Output:**
```
Highest Frequency: 3 (3 times)
Lowest Frequency: 1 (1 time)
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the number of elements in the array.
- Space Complexity: `O(K)` where K is the number of unique elements.

---

## 🧷 Implementations

### Java

<details>
<summary>Highest and Lowest Frequency</summary>

```java
import java.util.HashMap;

public class Main {
    static void findFrequency(int[] arr) {
        HashMap<Integer, Integer> frequencyMap = new HashMap<>();
        for (int num : arr) {
            frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
        }

        int highestFreq = 0, lowestFreq = Integer.MAX_VALUE;
        int highestElem = 0, lowestElem = 0;

        for (var entry : frequencyMap.entrySet()) {
            if (entry.getValue() > highestFreq) {
                highestFreq = entry.getValue();
                highestElem = entry.getKey();
            }
            if (entry.getValue() < lowestFreq) {
                lowestFreq = entry.getValue();
                lowestElem = entry.getKey();
            }
        }

        System.out.println("Highest Frequency: " + highestElem + " (" + highestFreq + " times)");
        System.out.println("Lowest Frequency: " + lowestElem + " (" + lowestFreq + " time)");
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 2, 3, 3, 3};
        findFrequency(arr);
    }
}
```

</details>

### Python

<details>
<summary>Highest and Lowest Frequency</summary>

```python
def find_frequency(arr):
    frequency_map = {}
    for num in arr:
        frequency_map[num] = frequency_map.get(num, 0) + 1

    highest_freq = 0
    lowest_freq = float('inf')
    highest_elem = lowest_elem = None

    for key, value in frequency_map.items():
        if value > highest_freq:
            highest_freq = value
            highest_elem = key
        if value < lowest_freq:
            lowest_freq = value
            lowest_elem = key

    print(f"Highest Frequency: {highest_elem} ({highest_freq} times)")
    print(f"Lowest Frequency: {lowest_elem} ({lowest_freq} time)")

arr = [1, 2, 2, 3, 3, 3]
find_frequency(arr)
```

</details>

### JavaScript

<details>
<summary>Highest and Lowest Frequency</summary>

```javascript
function findFrequency(arr) {
    const frequencyMap = {};
    arr.forEach(num => {
        frequencyMap[num] = (frequencyMap[num] || 0) + 1;
    });

    let highestFreq = 0, lowestFreq = Infinity;
    let highestElem, lowestElem;

    for (const [key, value] of Object.entries(frequencyMap)) {
        if (value > highestFreq) {
            highestFreq = value;
            highestElem = key;
        }
        if (value < lowestFreq) {
            lowestFreq = value;
            lowestElem = key;
        }
    }

    console.log(`Highest Frequency: ${highestElem} (${highestFreq} times)`);
    console.log(`Lowest Frequency: ${lowestElem} (${lowestFreq} time)`);
}

const arr = [1, 2, 2, 3, 3, 3];
findFrequency(arr);
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
* Variations can include finding the most frequent element or the least frequent element.
