# ✅ Rotate Image by 90 Degrees

**Topic:** Rotating a square matrix by 90 degrees clockwise.

---

## 📌 Problem Statement

Given an `n x n` 2D matrix representing an image, rotate the image by 90 degrees (clockwise). You have to rotate the matrix in place.

---

## 🧪 Examples

### Example 1:
**Input:**  
`matrix = [[1,2,3],[4,5,6],[7,8,9]]`  
**Output:**  
`[[7,4,1],[8,5,2],[9,6,3]]`  
**Explanation:** The matrix is rotated 90 degrees clockwise.

### Example 2:
**Input:**  
`matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]`  
**Output:**  
`[[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]`

---

## 💡 Approach

### Optimal Solution

**Intuition:** First, transpose the matrix, then reverse each row.

#### Pseudocode
```
for i from 0 to n-1:
    for j from i to n-1:
        swap(matrix[i][j], matrix[j][i])

for i from 0 to n-1:
    reverse(matrix[i])
```

#### Code (C++)
```cpp
#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    // Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    
    cout << "Rotated Matrix: " << endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
```

**Output:**
```
Rotated Matrix: 
7 4 1 
8 5 2 
9 6 3 
```

**Complexity Analysis:**
- Time Complexity: `O(N^2)` where N is the number of rows/columns in the matrix.
- Space Complexity: `O(1)` since we are modifying the matrix in place.

---

## 🧷 Implementations

### Java

<details>
<summary>Rotate Image by 90 Degrees</summary>

```java
public class Main {
    static void rotate(int[][] matrix) {
        int n = matrix.length;
        
        // Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        // Reverse each row
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][n - j - 1];
                matrix[i][n - j - 1] = temp;
            }
        }
    }
    
    public static void main(String[] args) {
        int[][] matrix = {{1,2,3},{4,5,6},{7,8,9}};
        rotate(matrix);
        
        System.out.println("Rotated Matrix:");
        for (int[] row : matrix) {
            for (int num : row) {
                System.out.print(num + " ");
            }
            System.out.println();
        }
    }
}
```

</details>

### Python

<details>
<summary>Rotate Image by 90 Degrees</summary>

```python
def rotate(matrix):
    n = len(matrix)
    
    # Transpose the matrix
    for i in range(n):
        for j in range(i, n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
    
    # Reverse each row
    for i in range(n):
        matrix[i].reverse()

matrix = [[1,2,3],[4,5,6],[7,8,9]]
rotate(matrix)
print("Rotated Matrix:")
for row in matrix:
    print(row)
```

</details>

### JavaScript

<details>
<summary>Rotate Image by 90 Degrees</summary>

```javascript
function rotate(matrix) {
    const n = matrix.length;
    
    // Transpose the matrix
    for (let i = 0; i < n; i++) {
        for (let j = i; j < n; j++) {
            [matrix[i][j], matrix[j][i]] = [matrix[j][i], matrix[i][j]];
        }
    }
    
    // Reverse each row
    for (let i = 0; i < n; i++) {
        matrix[i].reverse();
    }
}

let matrix = [[1,2,3],[4,5,6],[7,8,9]];
rotate(matrix);
console.log("Rotated Matrix:", matrix);
```

</details>

---

## 🧭 Edge Cases to Consider

* Matrix is empty.
* Matrix contains only one row or one column.
* Matrix is already in the desired state.

---

## 🧾 Complexity Summary

| Approach                | Time Complexity | Space Complexity |
| ----------------------- | --------------- | ---------------- |
| Rotate Image by 90 Degrees| `O(N^2)`       | `O(1)`           |

---

## 🙌 Credits

Special thanks to **TakeUforward** for the comprehensive explanation of the rotate image problem.

---

## 📣 Notes

* This problem is a classic example of in-place matrix manipulation.
* Understanding this algorithm is useful for various image processing tasks.
