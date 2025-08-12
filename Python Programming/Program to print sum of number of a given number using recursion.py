def sum_recursive(n):
    if n == 1:
        return 1
    else:
        return n + sum_recursive(n - 1)

# main code
p = 5
print(f"Sum of first {p} numbers is: {sum_recursive(p)}")
