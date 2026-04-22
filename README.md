# 🧠 Analysis of Algorithms - Lab 10

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-blue.svg" />
  <img src="https://img.shields.io/badge/Language-Python-yellow.svg" />
  <img src="https://img.shields.io/badge/Topic-Dynamic%20Programming-green.svg" />
</p>

---

## 📌 Overview

This lab explores fundamental algorithmic paradigms:

- 🔁 Recursion
- ⚡ Dynamic Programming (Memoization)
- 🎒 Optimization Problems (0-1 Knapsack)

---

## 🚀 Implemented Algorithms

### 🔁 Fibonacci (Recursive)
- Formula: F(n) = F(n-1) + F(n-2)
- Time Complexity: O(2^n)
- Inefficient due to repeated calculations

---

### ⚡ Fibonacci (Dynamic Programming)
- Uses memoization to optimize
- Fixed bug: passing memo in recursive calls

Buggy:
result = fib(n-1) + fib(n-2)

Fixed:
result = fib(n-1, memo) + fib(n-2, memo)

- Time Complexity: O(n)

---

### 🎒 0-1 Knapsack
- Maximizes value under capacity constraint

DP relation:
dp[i][w] = max(dp[i-1][w], value[i-1] + dp[i-1][w-weight[i-1]])

- Time Complexity: O(n × W)

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

Compile:
g++ Fibonacci_recursion.cpp -o fib
./fib

g++ Knapsack.cpp -o knapsack
./knapsack

Run Python:
python Debug.py

---

## 📸 Screenshots
Included in repository.

---

## 🧠 Key Learnings
- Recursion is inefficient
- DP improves performance
- Knapsack shows optimal substructure

---

## 👨‍💻 Author
Andres Basantes  
Professor: Israel Pineda  

---

