# ✅ Spiral Traversal of Matrix

**Topic:** Printing all elements of a matrix in spiral order.

---

## 📌 Problem Statement

Given an `m x n` matrix, return all elements of the matrix in spiral order.

---

## 🧪 Examples

### Example 1:
**Input:**  
`matrix = [[1,2,3],[4,5,6],[7,8,9]]`  
**Output:**  
`[1,2,3,6,9,8,7,4,5]`  
**Explanation:** The spiral order is: 1→2→3→6→9→8→7→4→5.

### Example 2:
**Input:**  
`matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]`  
**Output:**  
`[1,2,3,4,8,12,11,10,9,5,6,7]`

---

## 💡 Approach

### Optimal Solution

**Intuition:** Use four pointers to track the boundaries and traverse in spiral order.

#### Pseudocode
```
top = 0, bottom = m-1, left = 0, right = n-1
result = []

while top <= bottom and left <= right:
    # Traverse from left to right
    for j from left to right:
        result.append(matrix[top][j])
    top++
    
    # Traverse from top to bottom
    for i from top to bottom:
        result.append(matrix[i][right])
    right--
    
    if top <= bottom:
        # Traverse from right to left
        for j from right to left:
            result.append(matrix[bottom][j])
        bottom--
    
    if left <= right:
        # Traverse from bottom to top
        for i from bottom to top:
            result.append(matrix[i][left])
        left++

return result
```

#### Code (C++)
```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;
    
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
    
    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int j = left; j <= right; j++) {
            result.push_back(matrix[top][j]);
        }
        top++;
        
        // Traverse from top to bottom
        for (int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][right]);
        }
        right--;
        
        if (top <= bottom) {
            // Traverse from right to left
            for (int j = right; j >= left; j--) {
                result.push_back(matrix[bottom][j]);
            }
            bottom--;
        }
        
        if (left <= right) {
            // Traverse from bottom to top
            for (int i = bottom; i >= top; i--) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    
    return result;
}

int main() {
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> result = spiralOrder(matrix);
    
    cout << "Spiral Order: ";
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
```

**Output:**
```
Spiral Order: 1 2 3 6 9 8 7 4 5 
```

**Complexity Analysis:**
- Time Complexity: `O(M * N)` where M is the number of rows and N is the number of columns.
- Space Complexity: `O(M * N)` for the result vector.

---

## 🧷 Implementations

### Java

<details>
<summary>Spiral Traversal of Matrix</summary>

```java
import java.util.ArrayList;

public class Main {
    static ArrayList<Integer> spiralOrder(int[][] matrix) {
        ArrayList<Integer> result = new ArrayList<>();
        if (matrix.length == 0) return result;
        
        int top = 0, bottom = matrix.length - 1;
        int left = 0, right = matrix[0].length - 1;
        
        while (top <= bottom && left <= right) {
            // Traverse from left to right
            for (int j = left; j <= right; j++) {
                result.add(matrix[top][j]);
            }
            top++;
            
            // Traverse from top to bottom
            for (int i = top; i <= bottom; i++) {
                result.add(matrix[i][right]);
            }
            right--;
            
            if (top <= bottom) {
                // Traverse from right to left
                for (int j = right; j >= left; j--) {
                    result.add(matrix[bottom][j]);
                }
                bottom--;
            }
            
            if (left <= right) {
                // Traverse from bottom to top
                for (int i = bottom; i >= top; i--) {
                    result.add(matrix[i][left]);
                }
                left++;
            }
        }
        
        return result;
    }
    
    public static void main(String[] args) {
        int[][] matrix = {{1,2,3},{4,5,6},{7,8,9}};
        ArrayList<Integer> result = spiralOrder(matrix);
        
        System.out.print("Spiral Order: ");
        for (int num : result) {
            System.out.print(num + " ");
        }
    }
}
```

</details>

### Python

<details>
<summary>Spiral Traversal of Matrix</summary>

```python
def spiral_order(matrix):
    if not matrix:
        return []
    
    result = []
    top, bottom = 0, len(matrix) - 1
    left, right = 0, len(matrix[0]) - 1
    
    while top <= bottom and left <= right:
        # Traverse from left to right
        for j in range(left, right + 1):
            result.append(matrix[top][j])
        top += 1
        
        # Traverse from top to bottom
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1
        
        if top <= bottom:
            # Traverse from right to left
            for j in range(right, left - 1, -1):
                result.append(matrix[bottom][j])
            bottom -= 1
        
        if left <= right:
            # Traverse from bottom to top
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1
    
    return result

matrix = [[1,2,3],[4,5,6],[7,8,9]]
result = spiral_order(matrix)
print("Spiral Order:", result)
```

</details>

### JavaScript

<details>
<summary>Spiral Traversal of Matrix</summary>

```javascript
function spiralOrder(matrix) {
    if (matrix.length === 0) return [];
    
    let result = [];
    let top = 0, bottom = matrix.length - 1;
    let left = 0, right = matrix[0].length - 1;
    
    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (let j = left; j <= right; j++) {
            result.push(matrix[top][j]);
        }
        top++;
        
        // Traverse from top to bottom
        for (let i = top; i <= bottom; i++) {
            result.push(matrix[i][right]);
        }
        right--;
        
        if (top <= bottom) {
            // Traverse from right to left
            for (let j = right; j >= left; j--) {
                result.push(matrix[bottom][j]);
            }
            bottom--;
        }
        
        if (left <= right) {
            // Traverse from bottom to top
            for (let i = bottom; i >= top; i--) {
                result.push(matrix[i][left]);
            }
            left++;
        }
    }
    
    return result;
}

let matrix = [[1,2,3],[4,5,6],[7,8,9]];
let result = spiralOrder(matrix);
console.log("Spiral Order:", result);
```

</details>

---

## 🧭 Edge Cases to Consider

* Matrix is empty.
* Matrix contains only one row or one column.
* Matrix is a single element.

---

## 🧾 Complexity Summary

| Approach                | Time Complexity | Space Complexity |
| ----------------------- | --------------- | ---------------- |
| Spiral Traversal of Matrix | `O(M * N)`    | `O(M * N)`       |

---

## 🙌 Credits

Special thanks to **TakeUforward** for the comprehensive explanation of the spiral traversal problem.

---

## 📣 Notes

* This problem is a classic example of matrix traversal using boundary pointers.
* Understanding this algorithm is useful for various matrix manipulation tasks.
