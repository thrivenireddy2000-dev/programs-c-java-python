c = 0
for n in range(2, 100):
    p = 0
    for i in range(2, n):
        if n % i == 0:
            p = 1
            break
    if p == 0:
        c += 1
        if c == 7:
            print(n, end=" ")
            break
