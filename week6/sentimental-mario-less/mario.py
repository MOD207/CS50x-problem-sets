from cs50 import get_int

while True:
    # Prompt user for height
    n = get_int("Height: ")
    # if height is more than 9 or less than 1 reprompt user
    if n >= 1 and n <= 8:
        break
for i in range(n):
    for j in range(n):
        print("#" if i + j >= n - 1 else " ", end="")
    print()