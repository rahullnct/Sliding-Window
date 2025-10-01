This repository contains imlemantation and important questions of the  Sliding window techniques- a powerful approch for solving problems that involves
subarray,substrings,or continuous sequence in arrays or strings.
**
Overview:-
It is especially useful for:-
i) The sFinding the maximum/minimum in a subarray of fixed size.
ii) Finding the smallest substring containing all given characters.
 iii) Detecting patterns or calculating sums over continuous elements.liding window techniques reduces the need for nested loops by maintaing a moving "window" over the data updating it effeciently.

 🚀 Features
Fixed-size window implementation.

Variable-size window implementation.

Optimized for O(n) time complexity in most cases.

Clear and reusable code structure.

🧠 How Sliding Window Works
Define a start and end pointer for the window.

Expand the window by moving the end pointer.

Adjust the start pointer when constraints are violated.

Track the result while moving the window through the array/string.

Example (Fixed Window Sum):

python
Copy
Edit
def max_sum_subarray(nums, k):
    window_sum = sum(nums[:k])
    max_sum = window_sum
    
    for i in range(k, len(nums)):
        window_sum += nums[i] - nums[i - k]
        max_sum = max(max_sum, window_sum)
    
    return max_sum

print(max_sum_subarray([2, 1, 5, 1, 3, 2], 3))  # Output: 9
📦 Installation
Clone this repository:

bash
Copy
Edit
git clone https://github.com/yourusername/sliding-window.git
cd sliding-window
Run examples:

bash
Copy
Edit
python examples/example1.py
📝 Example Problems Included
Maximum sum subarray of size k

Longest substring without repeating characters

Minimum window substring

Number of subarrays with a given sum

🤝 Contributing
Pull requests are welcome!
If you have new problems or optimizations, feel free to:

Fork the repository.

Create a new branch (feature/new-problem).

Submit a pull request.

📄 License
This project is licensed under the MIT License - see the LICENSE file for details.


 
 
