from cs50 import get_int

while True:
    # Prompt user for height
    n = get_int("Height: ")
    # if n is more than 8 or less than 1, Repromt user
    if n >= 1 and n <= 8:
        break

for i in range(n):
    print(" " * (n - 1 - i), end="")
    print("#" * (i + 1), end="")
    print(" " * 2, end="")
    print("#" * (i + 1), end="")
    print()