import math
# Charles Truscott Watters, Factors of an Integer Number
def main():
    x = int(input("Enter a number: "))
    for q in range(1, x + 1, 1):
        for s in range(1, x + 1, 1):
            if q * s == x:
                print("{} x {} is {}".format(q, s, x))
if __name__ == "__main__": main()
