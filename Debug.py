def fib(n, memo):
    if memo[n] is not None:
        return memo[n]

    if n == 1 or n == 2:
        result = 1
    else:
        result = fib(n - 1, memo) + fib(n - 2, memo)

    memo[n] = result
    return result


n = 10
memo = [None] * (n + 1)
print("The", n, "th Fibonacci number is:", fib(n, memo))