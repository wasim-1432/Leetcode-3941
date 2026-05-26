# 🔐 Password Strength - LeetCode Solution

This repository contains my C++ solution for the **Password Strength** problem from LeetCode.

---

# 📌 Problem Statement

You are given a string `password`.

The strength of the password is calculated using the following rules:

- `+1` point for each distinct lowercase letter (`a-z`)
- `+2` points for each distinct uppercase letter (`A-Z`)
- `+3` points for each distinct digit (`0-9`)
- `+5` points for each distinct special character (`! @ # $`)

Return the total strength score of the password.

---

# 🧠 Example

## Input

```cpp
password = "bbB11#"
```

## Output

```cpp
11
```

## Explanation

Distinct characters are:

```cpp
b, B, 1, #
```

Score calculation:

| Character Type | Score |
|----------------|-------|
| Lowercase (`b`) | +1 |
| Uppercase (`B`) | +2 |
| Digit (`1`) | +3 |
| Special (`#`) | +5 |

### Total Score

```cpp
1 + 2 + 3 + 5 = 11
```

---

# 🚀 Approach

To avoid counting duplicate characters multiple times:

- I used `unordered_set<char>`
- Inserted all characters into the set
- Converted the set back into a string
- Traversed unique characters only
- Added scores based on character category

---

# 💻 C++ Solution

```cpp
class Solution {
public:
    int passwordStrength(string password) {

        int score = 0;

        unordered_set<char> st(password.begin(), password.end());

        password.assign(st.begin(), st.end());

        for(int i = 0; i < password.size(); i++)
        {
            if(password[i] >= 'a' && password[i] <= 'z')
            {
                score += 1;
            }
            else if(password[i] >= 'A' && password[i] <= 'Z')
            {
                score += 2;
            }
            else if(password[i] >= '0' && password[i] <= '9')
            {
                score += 3;
            }
            else if(password[i] == '!' || password[i] == '@' ||
                    password[i] == '#' || password[i] == '$')
            {
                score += 5;
            }
        }

        return score;
    }
};
```

---

# ⚙️ Time & Space Complexity

| Complexity | Value |
|------------|-------|
| Time Complexity | O(n) |
| Space Complexity | O(n) |

---

# 📚 Concepts Used

- C++
- STL
- `unordered_set`
- String Manipulation
- Character Classification
- Hashing

---

# 🔥 Key Learning

- How to remove duplicate characters efficiently
- Using `unordered_set` for uniqueness
- Clean categorization logic in strings
- Optimized scoring implementation

---

# 📊 Submission Result

✅ 800 / 800 Testcases Passed  
⚡ Runtime: 8 ms  
🚀 Beats 88.05% Users

---

# 👨‍💻 Author

## Mohd Wasim

- 💻 LeetCode: `Mohd_Wasim123`
- 🐙 GitHub: `wasim-1432`
- 🔗 LinkedIn:  
  https://www.linkedin.com/in/mohd-wasim-49b719292/

---

# ⭐ Support

If you found this repository helpful, please give it a ⭐ on GitHub.
It motivates me to upload more DSA & LeetCode solutions.

---
