def fact(n):
    r = 1
    for i in range(n, 0, -1):
        r *= i
    return r

a = 5
res = fact(a)
print(f"Factorial of given number {a} is {res}")
