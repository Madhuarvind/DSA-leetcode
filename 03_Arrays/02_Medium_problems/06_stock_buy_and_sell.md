# ✅ Stock Buy and Sell Problem

**Topic:** Finding the maximum profit from stock prices using the best time to buy and sell.

---

## 📌 Problem Statement

Given an array `prices[]` where `prices[i]` is the price of a given stock on the `i-th` day, find the maximum profit you can achieve by making at most one buy and one sell.

---

## 🧪 Examples

### Example 1:
**Input:**  
`prices = [7, 1, 5, 3, 6, 4]`  
**Output:**  
`5`  
**Explanation:** Buy on day 2 (price = 1) and sell on day 5 (price = 6). Profit = 6 - 1 = 5.

### Example 2:
**Input:**  
`prices = [7, 6, 4, 3, 1]`  
**Output:**  
`0`  
**Explanation:** In this case, no transactions are done and the max profit = 0.

---

## 💡 Approach

### Optimal Solution

**Intuition:** The idea is to traverse the array while keeping track of the minimum price seen so far and calculating the maximum profit at each step.

#### Pseudocode
```
max_profit = 0
min_price = infinity

for price in prices:
    if price < min_price:
        min_price = price
    else:
        profit = price - min_price
        if profit > max_profit:
            max_profit = profit

return max_profit
```

#### Code (C++)
```cpp
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int max_profit = 0;
    int min_price = INT_MAX;
    
    for (int price : prices) {
        if (price < min_price) {
            min_price = price;
        } else {
            int profit = price - min_price;
            if (profit > max_profit) {
                max_profit = profit;
            }
        }
    }
    
    return max_profit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int result = maxProfit(prices);
    cout << "Maximum Profit: " << result << endl;
    return 0;
}
```

**Output:**
```
Maximum Profit: 5
```

**Complexity Analysis:**
- Time Complexity: `O(N)` where N is the number of days (length of the prices array)
- Space Complexity: `O(1)`

---

## 🧷 Implementations

### Java

<details>
<summary>Stock Buy and Sell</summary>

```java
public class Main {
    static int maxProfit(int[] prices) {
        int maxProfit = 0;
        int minPrice = Integer.MAX_VALUE;
        
        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            } else {
                int profit = price - minPrice;
                if (profit > maxProfit) {
                    maxProfit = profit;
                }
            }
        }
        
        return maxProfit;
    }
    
    public static void main(String[] args) {
        int[] prices = {7, 1, 5, 3, 6, 4};
        int result = maxProfit(prices);
        System.out.println("Maximum Profit: " + result);
    }
}
```

</details>

### Python

<details>
<summary>Stock Buy and Sell</summary>

```python
def max_profit(prices):
    max_profit = 0
    min_price = float('inf')
    
    for price in prices:
        if price < min_price:
            min_price = price
        else:
            profit = price - min_price
            if profit > max_profit:
                max_profit = profit
                
    return max_profit

prices = [7, 1, 5, 3, 6, 4]
result = max_profit(prices)
print("Maximum Profit:", result)
```

</details>

### JavaScript

<details>
<summary>Stock Buy and Sell</summary>

```javascript
function maxProfit(prices) {
    let maxProfit = 0;
    let minPrice = Infinity;
    
    for (let price of prices) {
        if (price < minPrice) {
            minPrice = price;
        } else {
            let profit = price - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }
    
    return maxProfit;
}

let prices = [7, 1, 5, 3, 6, 4];
let result = maxProfit(prices);
console.log("Maximum Profit:", result);
```

</details>

---

## 🧭 Edge Cases to Consider

* Prices are in descending order
* Prices are in ascending order
* Prices contain only one element
* Prices contain all identical elements

---

## 🧾 Complexity Summary

| Approach                | Time Complexity | Space Complexity |
| ----------------------- | --------------- | ---------------- |
| Stock Buy and Sell     | `O(N)`          | `O(1)`           |

---

## 🙌 Credits

Special thanks to **TakeUforward** for the comprehensive explanation of the stock buy and sell problem.

---

## 📣 Notes

* This problem is a classic example of using a single pass algorithm to achieve optimal performance.
* Understanding this algorithm is crucial for many financial and trading applications.
