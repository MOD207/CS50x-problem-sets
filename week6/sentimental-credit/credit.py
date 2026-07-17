from cs50 import get_int


def main():
    while True:
        # Prompt user for card number
        credit_card = get_int("Card Number: ")
        # if card number is less than zero, Repromt user
        if credit_card >= 0:
            break

    if check_validity(credit_card):
        print_card_brand(credit_card)
    # if card number does is not valid, end program
    else:
        print("INVALID")


def check_validity(ccn):
    return checksum


def checksum(ccn):
    # check the sum of the card number
    sum = 0
    for i in range(len(str(ccn))):
        if (i % 2 == 0):
            sum += ccn % 10
        else:
            digit = 2 * (ccn % 10)
            sum += digit // 10 + digit % 10

        ccn //= 10

    sum % 10 == 0


def print_card_brand(ccn):
    # print whether the card is AMEX, MASTERCARD, or VISA
    if (ccn >= 34e13 and ccn < 35e13) or (ccn >= 37e13 and ccn < 38e13):
        print("AMEX")
    elif ccn >= 51e14 and ccn < 56e14:
        print("MASTERCARD")
    elif (ccn >= 4e12 and ccn < 5e12) or (ccn >= 4e15 and ccn < 5e15):
        print("VISA")
    # if the card is not any of the above return false
    else:
        print("INVALID")


if __name__ == "__main__":
    main()