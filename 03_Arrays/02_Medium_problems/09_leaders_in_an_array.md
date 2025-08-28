# ✅ Leaders in an Array

**Topic:** Finding all leaders in an array.

---

## 📌 Problem Statement

In an array, a leader is an element that is greater than all the elements to its right. The rightmost element is always a leader. Given an array `arr[]`, find all the leaders in the array.

---

## 🧪 Examples

### Example 1:
**Input:**  
`arr = [16, 17, 4, 3, 5, 2]`  
**Output:**  
`[17, 5, 2]`  
**Explanation:** The leaders are 17, 5, and 2.

### Example 2:
**Input:**  
`arr = [1, 2, 3, 4]`  
**Output:**  
`[4]`  
**Explanation:** The only leader is 4.

---

## 💡 Approach

### Optimal Solution

**Intuition:** Traverse the array from right to left, keeping track of the maximum element seen so far. If the current element is greater than this maximum, it is a leader.

#### Pseudocode
```
max_from_right = -infinity
leaders = []

for i from n-1 to 0:
    if arr[i] > max_from_right:
        leaders.append(arr[i])
        max_from_right = arr[i]

return leaders
```

#### Code (C++)
```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> findLeaders(vector<int>& arr) {
    vector<int> leaders;
    int max_from_right = INT_MIN;
    
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            leaders.push_back(arr[i]);
            max_from_right = arr[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leaders = findLeaders(arr);
    
    cout << "Leaders in the array: ";
    for (int leader : leaders) {
        cout << leader << " ";
    }
    return 0;
}
```

**Output:**
```
Leaders in the array: 17 5 2
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the number of elements in the array.
- Space Complexity: `O(K)` where K is the number of leaders.

---

## 🧷 Implementations

### Java

<details>
<summary>Leaders in an Array</summary>

```java
import java.util.ArrayList;

public class Main {
    static ArrayList<Integer> findLeaders(int[] arr) {
        ArrayList<Integer> leaders = new ArrayList<>();
        int maxFromRight = Integer.MIN_VALUE;
        
        for (int i = arr.length - 1; i >= 0; i--) {
            if (arr[i] > maxFromRight) {
                leaders.add(arr[i]);
                maxFromRight = arr[i];
            }
        }
        
        Collections.reverse(leaders);
        return leaders;
    }
    
    public static void main(String[] args) {
        int[] arr = {16, 17, 4, 3, 5, 2};
        ArrayList<Integer> leaders = findLeaders(arr);
        
        System.out.print("Leaders in the array: ");
        for (int leader : leaders) {
            System.out.print(leader + " ");
        }
    }
}
```

</details>

### Python

<details>
<summary>Leaders in an Array</summary>

```python
def find_leaders(arr):
    leaders = []
    max_from_right = float('-inf')
    
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] > max_from_right:
            leaders.append(arr[i])
            max_from_right = arr[i]
    
    return leaders[::-1]

arr = [16, 17, 4, 3, 5, 2]
leaders = find_leaders(arr)
print("Leaders in the array:", leaders)
```

</details>

### JavaScript

<details>
<summary>Leaders in an Array</summary>

```javascript
function findLeaders(arr) {
    let leaders = [];
    let maxFromRight = -Infinity;
    
    for (let i = arr.length - 1; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            leaders.push(arr[i]);
            maxFromRight = arr[i];
        }
    }
    
    return leaders.reverse();
}

let arr = [16, 17, 4, 3, 5, 2];
let leaders = findLeaders(arr);
console.log("Leaders in the array:", leaders);
```

</details>

---

## 🧭 Edge Cases to Consider

* All elements are the same.
* Array contains only one element.
* Array is sorted in ascending or descending order.

---

## 🧾 Complexity Summary

| Approach                | Time Complexity | Space Complexity |
| ----------------------- | --------------- | ---------------- |
| Leaders in an Array     | `O(N)`          | `O(K)`           |

---

## 🙌 Credits

Special thanks to **TakeUforward** for the comprehensive explanation of the leaders in an array problem.

---

## 📣 Notes

* This problem is a classic example of using a single pass algorithm to find leaders efficiently.
* Understanding this algorithm is useful for various array manipulation tasks.
