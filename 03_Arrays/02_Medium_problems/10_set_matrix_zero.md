# ✅ Set Matrix Zeroes

**Topic:** Setting entire row and column to zero if an element is zero.

---

## 📌 Problem Statement

Given an `m x n` matrix, if an element is `0`, set its entire row and column to `0`. Do it in place.

---

## 🧪 Examples

### Example 1:
**Input:**  
`matrix = [[1,1,1],[1,0,1],[1,1,1]]`  
**Output:**  
`[[1,0,1],[0,0,0],[1,0,1]]`  
**Explanation:** The element at (1,1) is zero, so the entire row and column are set to zero.

### Example 2:
**Input:**  
`matrix = [[0,1],[1,0]]`  
**Output:**  
`[[0,0],[0,0]]`  
**Explanation:** The element at (0,0) is zero, so the entire row and column are set to zero.

---

## 💡 Approach

### Optimal Solution

**Intuition:** Use the first row and first column to mark the rows and columns that need to be zeroed.

#### Pseudocode
```
set first_row_zero = false
set first_col_zero = false

for each cell in first row:
    if cell is 0:
        set first_row_zero = true

for each cell in first column:
    if cell is 0:
        set first_col_zero = true

for i from 1 to m-1:
    for j from 1 to n-1:
        if matrix[i][j] is 0:
            mark first row and first column

for i from 1 to m-1:
    for j from 1 to n-1:
        if matrix[0][j] is 0 or matrix[i][0] is 0:
            set matrix[i][j] to 0

if first_row_zero:
    set entire first row to 0

if first_col_zero:
    set entire first column to 0
```

#### Code (C++)
```cpp
#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    bool first_row_zero = false;
    bool first_col_zero = false;
    
    for (int j = 0; j < matrix[0].size(); j++) {
        if (matrix[0][j] == 0) {
            first_row_zero = true;
            break;
        }
    }
    
    for (int i = 0; i < matrix.size(); i++) {
        if (matrix[i][0] == 0) {
            first_col_zero = true;
            break;
        }
    }
    
    for (int i = 1; i < matrix.size(); i++) {
        for (int j = 1; j < matrix[0].size(); j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    
    for (int i = 1; i < matrix.size(); i++) {
        for (int j = 1; j < matrix[0].size(); j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
    
    if (first_row_zero) {
        for (int j = 0; j < matrix[0].size(); j++) {
            matrix[0][j] = 0;
        }
    }
    
    if (first_col_zero) {
        for (int i = 0; i < matrix.size(); i++) {
            matrix[i][0] = 0;
        }
    }
}

int main() {
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(matrix);
    
    cout << "Matrix after setting zeroes: " << endl;
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
Matrix after setting zeroes: 
1 0 1 
0 0 0 
1 0 1 
```

**Complexity Analysis:**
- Time Complexity: `O(M * N)` where M is the number of rows and N is the number of columns.
- Space Complexity: `O(1)` since we are modifying the matrix in place.

---

## 🧷 Implementations

### Java

<details>
<summary>Set Matrix Zeroes</summary>

```java
public class Main {
    static void setZeroes(int[][] matrix) {
        boolean firstRowZero = false;
        boolean firstColZero = false;
        
        for (int j = 0; j < matrix[0].length; j++) {
            if (matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }
        
        for (int i = 0; i < matrix.length; i++) {
            if (matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }
        
        for (int i = 1; i < matrix.length; i++) {
            for (int j = 1; j < matrix[0].length; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for (int i = 1; i < matrix.length; i++) {
            for (int j = 1; j < matrix[0].length; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        if (firstRowZero) {
            for (int j = 0; j < matrix[0].length; j++) {
                matrix[0][j] = 0;
            }
        }
        
        if (firstColZero) {
            for (int i = 0; i < matrix.length; i++) {
                matrix[i][0] = 0;
            }
        }
    }
    
    public static void main(String[] args) {
        int[][] matrix = {{1,1,1},{1,0,1},{1,1,1}};
        setZeroes(matrix);
        
        System.out.println("Matrix after setting zeroes:");
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
<summary>Set Matrix Zeroes</summary>

```python
def set_zeroes(matrix):
    first_row_zero = False
    first_col_zero = False
    
    for j in range(len(matrix[0])):
        if matrix[0][j] == 0:
            first_row_zero = True
            
    for i in range(len(matrix)):
        if matrix[i][0] == 0:
            first_col_zero = True
            
    for i in range(1, len(matrix)):
        for j in range(1, len(matrix[0])):
            if matrix[i][j] == 0:
                matrix[i][0] = 0
                matrix[0][j] = 0
                
    for i in range(1, len(matrix)):
        for j in range(1, len(matrix[0])):
            if matrix[i][0] == 0 or matrix[0][j] == 0:
                matrix[i][j] = 0
                
    if first_row_zero:
        for j in range(len(matrix[0])):
            matrix[0][j] = 0
            
    if first_col_zero:
        for i in range(len(matrix)):
            matrix[i][0] = 0

matrix = [[1,1,1],[1,0,1],[1,1,1]]
set_zeroes(matrix)
print("Matrix after setting zeroes:")
for row in matrix:
    print(row)
```

</details>

### JavaScript

<details>
<summary>Set Matrix Zeroes</summary>

```javascript
function setZeroes(matrix) {
    let firstRowZero = false;
    let firstColZero = false;
    
    for (let j = 0; j < matrix[0].length; j++) {
        if (matrix[0][j] === 0) {
            firstRowZero = true;
            break;
        }
    }
    
    for (let i = 0; i < matrix.length; i++) {
        if (matrix[i][0] === 0) {
            firstColZero = true;
            break;
        }
    }
    
    for (let i = 1; i < matrix.length; i++) {
        for (let j = 1; j < matrix[0].length; j++) {
            if (matrix[i][j] === 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    
    for (let i = 1; i < matrix.length; i++) {
        for (let j = 1; j < matrix[0].length; j++) {
            if (matrix[i][0] === 0 || matrix[0][j] === 0) {
                matrix[i][j] = 0;
            }
        }
    }
    
    if (firstRowZero) {
        for (let j = 0; j < matrix[0].length; j++) {
            matrix[0][j] = 0;
        }
    }
    
    if (firstColZero) {
        for (let i = 0; i < matrix.length; i++) {
            matrix[i][0] = 0;
        }
    }
}

let matrix = [[1,1,1],[1,0,1],[1,1,1]];
setZeroes(matrix);
console.log("Matrix after setting zeroes:", matrix);
```

</details>

---

## 🧭 Edge Cases to Consider

* All elements are zero.
* Matrix contains only one row or one column.
* Matrix is already in the desired state.

---

## 🧾 Complexity Summary

| Approach                | Time Complexity | Space Complexity |
| ----------------------- | --------------- | ---------------- |
| Set Matrix Zeroes      | `O(M * N)`      | `O(1)`           |

---

## 🙌 Credits

Special thanks to **TakeUforward** for the comprehensive explanation of the set matrix zeroes problem.

---

## 📣 Notes

* This problem is a classic example of in-place modification of a matrix.
* Understanding this algorithm is useful for various matrix manipulation tasks.
