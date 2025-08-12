for n in range(2, 100):
    p = 0  # reset for each number

    # check each n is prime or not
    for i in range(2, n):
        if n % i == 0:
            p = 1
            break  # stop checking if divisor found

    if p == 0:
        print(n, end=" ")
