n = 345
original_n = n  # Keep a copy of original number for first digit
ld = n % 10     # Last digit

# Finding first digit
while n >= 10:
    n = n // 10  # Integer division

fd = n  # Now n will have the first digit

# Sum of first and last digits
sum_digits = fd + ld

# Printing results
print("First digit is:", fd)
print("Last digit is:", ld)
print("Sum is:", sum_digits)
