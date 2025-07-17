# 🔎 Binary Search in C++

This is a simple and efficient implementation of the **Binary Search algorithm** in **C++**. The algorithm works only on **sorted arrays** and has a time complexity of **O(log n)**.

---

## 🚀 Features

- Accepts user input for array size and sorted array elements
- Searches for a key using the **binary search technique**
- Returns the **index** of the key if found
- Returns `-1` if the key is not present in the array

---

## 🧠 How It Works

Binary Search works by repeatedly dividing the search interval in half:

```cpp
int mid = (left + right) / 2;
if (arr[mid] == key) return mid;
else if (arr[mid] > key) right = mid - 1;
else left = mid + 1;
This continues until the element is found or the search space is exhausted.

🧪 Sample Input/Output
Input:

Copy
Edit
6
2 4 6 8 10 12
10
Output:

Copy
Edit
4
Explanation: 10 is located at index 4.

⚙️ How to Compile and Run
bash
Copy
Edit
g++ -o binary_search binary_search.cpp
./binary_search
⚠️ Make sure the input array is sorted in ascending order before performing binary search.

📚 Educational Value
Demonstrates divide-and-conquer approach

Great for practicing efficient search algorithms

Ideal for understanding logarithmic time complexity

📦 Limitations
Assumes input array is already sorted

Does not handle duplicate values specifically

No input validation (e.g., non-integer input)

✅ Suggested Extensions
Automatically sort the array before performing binary search

Handle multiple occurrences of the key

Add recursive version of binary search

📝 License
Free to use for personal learning, assignments, or teaching purposes.
