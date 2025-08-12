for i in range(1, 6):
    # spaces before stars
    for j in range(1, 6 - i + 1):
        print("  ", end="")

    # stars
    for j in range(1, i + 1):
        if i == 5 or j == 1 or j == i:
            print(" * ", end="")
        else:
            print("   ", end="")

    print()
