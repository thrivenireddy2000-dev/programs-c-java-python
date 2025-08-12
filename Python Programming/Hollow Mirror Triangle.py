for i in range(1, 6):
    # spaces
    for j in range(1, i):
        print(" * ", end="")

    # stars
    for j in range(1, i + 1):
        print("  ", end="")

    print()
