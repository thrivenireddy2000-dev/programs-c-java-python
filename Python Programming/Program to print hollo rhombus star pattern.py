for i in range(1, 6):
    # leading spaces
    for j in range(1, i):
        print(" ", end=" ")

    # hollow square part
    for j in range(1, 6):
        if i == 1 or i == 5 or j == 1 or j == 5:
            print(" * ", end=" ")
        else:
            print("   ", end=" ")

    print()  # move to next line
