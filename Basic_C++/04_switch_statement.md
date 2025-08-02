# 🔄 06. Switch Case Statements – Striver’s A2Z DSA Course

---

## 🚀 Overview

In C++, the `switch` statement is used for selecting one of many blocks of code to be executed. It's an alternative to long `if-else-if` chains when comparing a single variable against multiple constant values.

> ✅ Use `if-else` when:
> - Complex conditions
> - Range-based conditions
> 
> ✅ Use `switch` when:
> - Comparing **a single variable** with **multiple constant values**

---

## 📊 Flowchart of Switch Case

![Switch Case Flowchart](/mnt/data/55cf4cf8-1469-49ce-8aef-0e36639c1894.png)

---

## 🧪 Example: Day of the Week

```cpp
#include <iostream>
using namespace std;

int main() {
    int day = 4;

    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid";
    }

    return 0;
}
```

🟢 **Output:** `Thursday`

---
