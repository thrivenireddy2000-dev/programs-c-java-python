def fact(n):
    if n == 1:
        return 1
    else:
        return n * fact(n - 1)

# Main code
n = 5
print(f"Factorial of {n} is {fact(n)}")
