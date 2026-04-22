# 🧠 Analysis of Algorithms - Lab 10

## 📌 Overview
This lab focuses on fundamental algorithmic techniques including **recursion** and **dynamic programming (DP)**. The main goal is to understand performance differences and optimization strategies through classic problems.

---

## 🚀 Implemented Problems

### 1️⃣ Fibonacci using Recursion
- Implements the mathematical definition of Fibonacci.
- Demonstrates inefficiency due to repeated calculations.

#### Recursive Formula
F(n) = F(n-1) + F(n-2)

- Time Complexity: O(2^n)
- Simple but inefficient

---

### 2️⃣ Fibonacci using Dynamic Programming (Memoization)
- Optimized version using memoization
- Avoids recomputation

#### Fix Applied
Original bug:
result = fib(n-1) + fib(n-2)

Fixed:
result = fib(n-1, memo) + fib(n-2, memo)

- Time Complexity: O(n)

---

### 3️⃣ 0-1 Knapsack Problem

- Maximize value under capacity constraint

DP formula:
dp[i][w] = max(dp[i-1][w], value[i-1] + dp[i-1][w-weight[i-1]])

- Time Complexity: O(n × capacity)

---

## 📂 Project Structure

Lab10/
│── Debug.py
│── Fibonacci_recursion.cpp
│── Fibonacci_recursion.exe
│── Knapsack.cpp
│── Knapsack.exe
│── *.JPG

---

## 🛠 How to Run

Compile C++:
g++ Fibonacci_recursion.cpp -o fib
./fib

g++ Knapsack.cpp -o knapsack
./knapsack

Run Python:
python Debug.py

---

## 📸 Screenshots
Included:
- Fibonacci recursion
- Fibonacci DP
- Knapsack

---

## 🧠 Key Learnings
- Recursion is inefficient for large inputs
- Dynamic Programming improves performance
- Knapsack shows optimal substructure

---

## 👨‍💻 Author
Andres Basantes  
Professor: Israel Pineda  

---

## ⭐ Conclusion
This lab demonstrates how algorithm optimization using dynamic programming significantly improves performance compared to naive recursion.
