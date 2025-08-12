for i in range(1, 6):  # rows
    # Print leading spaces
    for j in range(1, (5 - i) + 1):
        print(" ", end=" ")
    # Print stars
    for j in range(1, (i * 2)):
        print("*", end=" ")
    print()  # move to the next line
